Hi everyone! This challenge is gonna be a special one. There will be no challenge! Well there will be research! Not very interesting huh ? Lets try shall we ? I just want to spread some awareness of a versatile concept in computer science.

Today we will be learning about classification algorithms. Continuing our previous Challenge #183[Hard] if you completed, you should know the whole point of dimensionality reduction done in the challenge was basically to **Reduce the data**. Why reduce ? Thats mainly for later use when we can classify the data to its separate classes.


Lets try to understand classification. Consider it in this way. Say you have sets of documents. Some are history documents, Some biology, Some psychology and so on. The web is full of documents. Now if you want to design a search of what does every document classify to then we can consider the classes to be history, biology, psychology and so on.

Now you will ask how are the documents fed to the algorithm basically. There are multiple ways but the main way is normally that a document can be considered as a collection of words. Every word here is an attribute or a property of the document. And if you consider the attribute to be the column names of the matrix then you can consider the number of times the word occurs to be the value of the word in the document. 

So here is an example dataset.

    a1 a2  a3  a4  a5 a6  a7 a8
    1  1   0   0   0  0   0  0        psychology
    0  0   1   1   1  0   0  0        biology
    0  0   0   0   0  1   1  1        chemistry

from the above small set you can see that the documents which have the attribute a1 and a2 can be classified into psychology, a3, a4 and a5 into biology and a7 and a8 into chemistry. It can be clearly seen here.

Now thats just a small data set. When it comes to building classification for huge data sets a lot of constraints and complexities arise based on the problem. for example, some attributes can be important for some type of classification. Like when considering finding out the best player in Counter Strike, I would consider a player with a higher sniper strength to have a higher importance and such.

There are multiple classification algorithms. For example Naive bayes, K means etc. This basic classification can be considered as a small step in Machine Learning. Classification algorithms are basically divided into two types. Supervised and Unsupervised. Supervised basically means that the attributes are labeled and unsupervised is the type of learning where the data is unlabelled which means we have to deduce its importance on our own using the different algorithms.



I dont want to give a challenge today since i feel a lot of people wont be able to do it and its not feasible to do it in one week. Machine Learning basically means that your algorithm *learns* the data and you predict classes. Its a difficult concept but very interesting. All top companies use it. You can see from google to facebook to uber to intel, every face recognition, search, pattern recognition software use it and is a growing industry concept and i wanted to bring some awareness.



#So yes the challenge..

Do some research on Machine leaning and classification algorithms and do discuss! (Remember Google is your best friend! :D)


__________________________

[You can discuss in the IRC Channel too!](http://www.reddit.com/r/dailyprogrammer/comments/2dtqr7/psa_rdailyprogrammer_irc_channel/)