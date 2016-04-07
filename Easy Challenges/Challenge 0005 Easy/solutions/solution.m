%Author Evilk9 (github.com/evilk9)
user_username = input('Enter Username: ', 's'); 
user_password = input('Enter Password: ','s');

info = fileread('login.txt');
info = strsplit(info);
username = info(1);
password = info(2);


if(strcmp(user_password,password) && strcmp(user_username, username))
    fprintf('ACCESS GRANTED');
    
else
    fprintf('ACCESS DENIED');
end

    
 
    
