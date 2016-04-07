%Author Evilk9 (github.com/evilk9)
password_number = input('Enter How Many Passwords To Generate: '); 
password_length = input('Enter Password Length: ');

for i = 1:password_number
    fprintf('Password: %d\n', i); 
    for i = 1:password_length
        character = randi([33, 126]); 
        fprintf('%s', char(character)); 
    end
    fprintf('\n'); 
end


