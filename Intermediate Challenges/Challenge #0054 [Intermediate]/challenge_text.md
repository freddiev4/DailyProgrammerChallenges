For this challenge, create the worlds simplest IM client. It should work like this: if Alice on computer A wants to talk to Bob on computer B, she should start the IM program as a server listening to some port. Bob should then start the program on his end, punch in computer A's IP address with the right port. The two computers should now be connected to each other and Alice and Bob should be able to communicate by sending short strings to each other. Example conversation seen on Alice's computer:

You: "Hey Bob!"     
Bob: "Hey Alice!"       
Bob: "I can't believe I successfully connected!"        
You: "Isn't it cool?"       
Bob: "It really is!"        

Same conversation seen on Bob's computer:

Alice: "Hey Bob!"     
You: "Hey Alice!"       
You: "I can't believe I successfully connected!"        
Alice: "Isn't it cool?"       
You: "It really is!"        

If you don't have two computers lying around, or just want to make it easier for yourself, it is perfectly allowed to run both programs on the same computer and connect to "localhost". 

If you want to, you can design a very simple GUI for this, but that is not necessary. If you can finagle this to work in a terminal, that is perfectly fine. 
