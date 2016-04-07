Write a program that takes a title and a list as input and outputs the list in a nice column. Try to make it so the title is centered. For example:

    title: 'Necessities'
    input: ['fairy', 'cakes', 'happy', 'fish', 'disgustipated', 'melon-balls']

    output:

        +---------------+
        |  Necessities  |
        +---------------+
        | fairy         |
        | cakes         |
        | happy         |
        | fish          |
        | disgustipated |
        | melon-balls   |
        +---------------+
        

Bonus: amend the program so that it can output a two-dimensional table instead of a list. For example, a list of websites:

    titles: ['Name', 'Address', 'Description']
    input:  [['Reddit', 'www.reddit.com', 'the frontpage of the internet'],
            ['Wikipedia', 'en.wikipedia.net', 'The Free Encyclopedia'],
            ['xkcd', 'xkcd.com', 'Sudo make me a sandwich.']]
            
    output:
    
        +-----------+------------------+-------------------------------+
        |   Name    |     Address      |          Description          |
        +-----------+------------------+-------------------------------+
        | Reddit    | www.reddit.com   | the frontpage of the internet |
        +-----------+------------------+-------------------------------+
        | Wikipedia | en.wikipedia.net | The Free Encyclopedia         |
        +-----------+------------------+-------------------------------+
        | xkcd      | xkcd.com         | Sudo make me a sandwich       |
        +-----------+------------------+-------------------------------+


* Thanks to [Medicalizawhat](http://www.reddit.com/user/Medicalizawhat) for suggesting this problem at /r/dailyprogrammer_ideas (a version of this problem was originally posted [here](http://programthis.net/table-games/)). If you have a problem you think would be good for us, [head over there](http://www.reddit.com/r/dailyprogrammer_ideas) and post it! 
