print 'Your string: '
File.open('output.txt', 'w') do |f|
  f.print gets.reverse
end
