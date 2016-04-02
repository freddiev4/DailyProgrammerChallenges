#Description

You run a popular programming forum, Programming Daily, where programming challenges are posted and users are free to show off their solutions. Three of your most prolific users happen to have very similar handles: Sarlik, Sarlek, and Sarlak. Following a discussion between these three users can be incredibly confusing and everyone mixes them up.


The community decides that the best solution is to allow users to provide square avatars to identify themselves. Plus the folks over at the competing /r/dailyprogrammer forum don't have this feature, so perhaps you can use this to woo over some of their userbase. However, Sarlik, Sarlek, and Sarlak are totally old school. They each browse the forum through an old text-only terminal with a terminal browser (lynx, links). They don't care about avatars, so they never upload any.


After sleeping on the problem you get a bright idea: you'll write a little program to procedurally generate an avatar for them, and any other stubborn users. To keep the database as simple as possible, you decide to generate these on the fly. That is, given a particular username, you should always generate the same avatar image.


#Formal Input Description


Your forum's usernames follow the same rules as reddit's usernames (e.g. no spaces, etc.). Your program will receive a single reddit-style username as input.

#Formal Output Description


Your program outputs an avatar, preferably in color, with a unique pattern for that username. The output must always be the same for that username. You could just generate a totally random block of data, but you should try to make it interesting while still being reasonably unique.

##Sample Inputs

Sarlik
Sarlek
Sarlak

##Sample Outputs

    http://i.imgur.com/9KpGEwO.png
    http://i.imgur.com/IR8zxaI.png
    http://i.imgur.com/xf6h0Br.png

#Challenge Input

Show us the avatar for your own reddit username.




#Note

Thanks to /u/skeeto for submitting the idea, which was conceived from here: https://github.com/download13/blockies


Remember to submit your own challenges over at /r/dailyprogrammer_ideas
