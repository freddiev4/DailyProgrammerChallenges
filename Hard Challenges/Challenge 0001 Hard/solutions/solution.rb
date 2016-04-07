class NumberGuesser
  MIN_ANSWER = 1
  MAX_ANSWER = 100

  def initialize
    @current_min = MIN_ANSWER
    @current_max = MAX_ANSWER
    @guesses = 1
  end

  def guess_until_found
    loop do
      perform_sanity_check
      case make_guess
      when '1'
        @current_min = current_guess + 1
        @guesses += 1
      when '2'
        @current_max = current_guess - 1
        @guesses += 1
      when '3'
        puts "Woohoo! I guessed your number in #{@guesses} tries!"
        break
      else
        puts 'Please enter either "1", "2" or "3".'
      end
    end
  end

  private

  def make_guess
    puts "My guess is: #{current_guess}"
    puts 'Was I right? 1) higher, 2) lower, 3) YES!'
    gets.chomp
  end

  def current_guess
    (@current_max + @current_min)/2
  end

  def perform_sanity_check
    if @current_max < @current_min
      puts 'Oops, something impossible has happened -- Looks like you cheated!'
      exit
    end
  end
end

puts '***** Number guessing game!! *****'
puts "Pick a number between #{NumberGuesser::MIN_ANSWER}-#{NumberGuesser::MAX_ANSWER}"
puts
sleep 2

NumberGuesser.new.guess_until_found
