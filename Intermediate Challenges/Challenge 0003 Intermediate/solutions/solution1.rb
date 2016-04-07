# Author: Lim Yao Jie
# Github: https://github.com/causztic
# Description: Subsitution Cipher + Transposition Cipher together.

module Main

  def self.init
    STDOUT.sync = true
    Encoding.default_internal = "utf-8"
    
    puts "Type in a number to begin."
    puts "1: Encrypt Message"
    puts "2: Decrypt Message"
    choice = gets.chomp

    begin
      case choice.to_i

      when 1
      
        puts "Type your message to be encrypted:"
        message = gets.chomp
        puts "Processing.."
        
        s_cipher = SubsitutionCipher.new
        t_cipher = ColumnarTranspositionCipher.new

        s_message = s_cipher.get_encrypted_message(message)
        encrypted_message = t_cipher.get_encrypted_message(s_message)

        puts "Your encrypted message is: '#{encrypted_message}'"
      when 2
      
        puts "Type your message to be decrypted:"
        message = gets.chomp
        puts "Processing.."
        s_cipher = SubsitutionCipher.new
        t_cipher = ColumnarTranspositionCipher.new


        t_message = t_cipher.get_decrypted_message(message)
        decrypted_message = s_cipher.get_decrypted_message(t_message)

        puts "Your decrypted_message is: '#{decrypted_message}'"
      else
        puts "Invalid choice!"
        self.init
      end
    rescue
      puts "Please type in a number!"
      self.init
    end
  end
end

class SubsitutionCipher

  # shifts index by a number, which in a sense subsitutes a character for another down the index shift.

  def initialize(*args)
    @shift_index = 3
  end

  def get_encrypted_message(message)
    encrypted_message = ""
    message.codepoints.each do |cp|
      chr = (cp+@shift_index).chr
      encrypted_message << chr
    end
    return encrypted_message
  end

  def get_decrypted_message(message)
    encrypted_message = ""
    message.codepoints.each do |cp|
      chr = (cp-@shift_index).chr
      encrypted_message << chr
    end
    return encrypted_message
  end


end

class ColumnarTranspositionCipher

  def initialize(*args)

    @key = "rickastley" # it is crucial for the key to have unique letters!
    @original_key = @key.codepoints
    @sorted_key = @original_key.sort

    @transpose = []
    @transpose_indexes = []

    # get transposed keys based on sorted index of original keys
    @original_key.each {|k| @transpose << @sorted_key.find_index(k) } 

    # get transposed indexes based on original keys and transposed keys
    (0..@transpose.length-1).each {|i| @transpose_indexes << @transpose.find_index(i) }
  end


  def get_encrypted_message(message)
    len = message.length
    padding_size = @original_key.length % len

    puts "Original: #{@original_key}"
    puts "Sorted: #{@sorted_key}"
    puts "Transposed: #{@transpose}"
    puts "Tranposed Indexes: #{@transpose_indexes}"

    message_arr = message.split("").each_slice(@original_key.length).to_a

    encrypted_message = ""

    # arrays to wrap the message to a "table" with the row length of @key
    message_arr.each do |arr|
      # row
      row_chunk = []
      arr.each_with_index do |char, index|
        # character
        row_chunk[@transpose_indexes[index]] = char # set the row of transposed characters
      end
      # add padding of space if empty to prevent the characters from skipping their intended index.
      row_chunk.map! {|c| c ? c : " " } 
      encrypted_message << row_chunk.join("")
    end

    return encrypted_message
  end

  def get_decrypted_message(message)

    message_arr = message.split("").each_slice(@original_key.length).to_a

    decrypted_message = ""
    # same as encryption, set arrays to wrap the encrypted message to a "table" form with the row length of @key
    message_arr.each do |arr|
      # row
      row_chunk = []
      arr.each_with_index do |char, index|
        row_chunk[@transpose[index]] = char # set the row of transposed characters
      end
      row_chunk.map! {|c| c ? c : " " }
      decrypted_message << row_chunk.join("")
    end
    return decrypted_message.strip
  end

end

Main.init