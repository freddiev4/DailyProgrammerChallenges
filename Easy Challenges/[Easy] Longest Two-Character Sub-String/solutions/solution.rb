puts 'Enter input string:'
input = gets.chomp

puts "Longest 2-unique-character substring is:"
puts input
  .to_enum(:scan, /(.)\1*(.)(\1|\2)*/) # Find all 2-char substrings
  .map { Regexp.last_match[0] } # Convert MatchData object to matched string
  .reverse # Use the right-most result
  .max_by(&:length) # Select the longest result
