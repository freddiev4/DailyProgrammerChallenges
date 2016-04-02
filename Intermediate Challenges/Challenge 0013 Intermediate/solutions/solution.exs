reversed_input = IO.gets("Your string: ") |> String.rstrip |> String.reverse
File.write("output.txt", reversed_input)
