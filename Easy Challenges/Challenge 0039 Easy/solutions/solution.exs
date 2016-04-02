fizzbuzz = fn n ->
  case {rem(n, 3), rem(n, 5)} do
    {0, 0} -> "FizzBuzz"
    {0, _} -> "Fizz"
    {_, 0} -> "Buzz"
    {_, _} -> "#{n}"
  end
end

with n <- String.to_integer(hd System.argv) do
  Enum.each(1..n, &(IO.puts fizzbuzz.(&1)))
end
