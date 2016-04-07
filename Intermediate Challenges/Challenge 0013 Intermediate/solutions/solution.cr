user_input = STDIN.gets || ""
File.write("output.txt", user_input.chomp.reverse)
