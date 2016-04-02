def fizzbuzz(n)
  if n % 15 == 0
    'FizzBuzz'
  elsif n % 5 == 0
    'Buzz'
  elsif n % 3 == 0
    'Fizz'
  else
    n.to_s
  end
end

(1..ARGV[0].to_i).each { |n| puts fizzbuzz(n) }
