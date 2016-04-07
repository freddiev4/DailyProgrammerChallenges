%Author Evilk9 (github.com/evilk9)
choice = input('Make A Decision.\n(1) Encrypt\n(2) Decrypt: '); 
user_input = input('Enter Text: ', 's');
offset = input('Enter Offset Number: '); 

if(choice == 1) 
    
    for i = 1:length(user_input)
    
        encoded_char = int32(user_input(i));
        encoded_char = encoded_char + offset; 
        encoded_char = char(encoded_char); 
    
        fprintf('%s', encoded_char); 
    end
    
end

if(choice == 2)
    for i = 1:length(user_input)
    
        decoded_char = int32(user_input(i));
        decoded_char = decoded_char - offset; 
        decoded_char = char(decoded_char); 
    
        fprintf('%s', decoded_char); 
    end
end

    
