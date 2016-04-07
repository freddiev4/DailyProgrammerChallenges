input = System.argv |> File.read! |> String.codepoints
lines = Enum.count(input, &(&1 == "\n"))
words = Enum.count(input, &(&1 == " ")) + lines
IO.puts("#{lines} lines.")
IO.puts("#{words} words.")
