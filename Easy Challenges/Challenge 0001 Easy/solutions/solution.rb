if File.exist?('userinfo.txt')
  name, age, username = File.readlines('userinfo.txt').map(&:chomp)
  puts "Your name is #{name}, you are #{age} years old, and your username is #{username}"
else
  print 'Your name: '
  name = gets
  print 'Your age: '
  age = gets
  print 'Your username: '
  username = gets
  File.open('userinfo.txt', 'w') do |f|
    puts "Your name is #{name}, you are #{age} years old, and your username is #{username}"
    f.puts [name, age, username]
  end
end
