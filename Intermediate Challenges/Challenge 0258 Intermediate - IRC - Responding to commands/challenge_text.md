# Description

In the last challenge we initiated a connection to an IRC server. This time we are going to utilise that connection by
responding to user input. On an IRC server you can communicate with other users either directly, or in a group chatroom
known as a channel. Channel names are distinguished from users by a prefixed character (`#` on freenode) in the name.

After connecting to an IRC server you will receive some informational text from the server known as the Message Of The Day,
or MOTD. The server will buffer any messages (particularly attempts to join channels) sent before it has finished.
The end of the MOTD is marked by the message `RPL_ENDOFMOTD` which is defined as the number `376`. You don't necessarily
have to wait for the end of the MOTD before joining, but I've found it usually works better if you do.

    :wolfe.freenode.net 376 GeekBot :End of /MOTD command.

To join a channel you must use the `JOIN` message. It takes a single parameter, which is a comma separated list of one or
more channels.

    JOIN #reddit-dailyprogrammer,#botters-test

Once you have sent this message, you will receive one or more JOIN message(s) back from the server for every channel
you were successfully able to join. The message you receive back will be prefixed with yourself as the origin.

    :GeekBot!G33kDude@192-168-1-42.isp.com JOIN #reddit-dailyprogrammer
    :GeekBot!G33kDude@192-168-1-42.isp.com JOIN #botters-test

After you've been joined to the channel, you can send text to the channel using the `PRIVMSG` message. It takes two
parameters, the first being the the comma separated list of users or channels to send the text to, and the second being the
colon prefixed message text.

    PRIVMSG #reddit-dailyprogrammer :Hello World!

In addition to being able to send messages, you can receive messages that have been sent to the channel by other users.
You should listen for a phrase prefixed with your name, then respond to that chat message. For example, you might see
the following chat message.

    :GeekDude!G33kDude@192-168-1-42.isp.com PRIVMSG #ahkscript :GeekBot: random 20

Your code would parse this message, and see the chatted contents were `GeekBot: random 20`. In response, your program might
do something like generate a random number, and chat it back.

    PRIVMSG #ahkscript :GeekDude: 4 // chosen by fair 20 sided dice roll // guaranteed to be random

# Input Description

In addition to the input from last time's challenge, there will also be two line specifying a channel to join, and a
message to chat upon joining.

    chat.freenode.net:6667
    Nickname
    Username
    Real Name
    #reddit-dailyprogrammer,#rdp,#botters-test
    Hello World!

# Output Description

In addition to the last challenge's output, you must also pick and respond to one or more chat commands. These commands
must take at least one parameter, and the return value should be chatted back to the same channel prefixed with the nick
of the person who invoked the command.

The following code block has the prefix `>` for outgoing messages, and `<` for incoming messages.

    >NICK Nickname
    >USER Username 0 * :Real Name
    <:wolfe.freenode.net NOTICE * :*** Looking up your hostname...
    <:wolfe.freenode.net NOTICE * :*** Checking Ident
    <:wolfe.freenode.net NOTICE * :*** Found your hostname
    <:wolfe.freenode.net NOTICE * :*** No Ident response
    <:wolfe.freenode.net 001 Nickname :Welcome to the freenode Internet Relay Chat Network Nickname
    --- A bit later ---
    <:wolfe.freenode.net 376 MyRC_Bot :End of /MOTD command.
    >JOIN #reddit-dailyprogrammer,#rdp,#botters-test
    <:GeekBot!G33kDude@192-168-1-42.isp.com JOIN #reddit-dailyprogrammer
    >PRIVMSG #reddit-dailyprogrammer :Hello World!
    <:GeekBot!G33kDude@192-168-1-42.isp.com JOIN #rdp
    >PRIVMSG #rdp :Hello World!
    <:GeekBot!G33kDude@192-168-1-42.isp.com JOIN #botters-test
    >PRIVMSG #botters-test :Hello World!
    --- Wait for chat ---
    <:GeekDude!G33kDude@192-168-1-42.isp.com PRIVMSG #reddit-dailyprogrammer :GeekBot: sum 12 8 7 3 5
    >PRIVMSG #reddit-dailyprogrammer :GeekDude: The sum is 35

Also, don't forget to return any incoming `PING` messages!

# Challenge Input

Your bot should handle commands sent to it directly as well as through normal channels. When you receive such a message,
the channel parameter of `PRIVMSG` is set to your own nickname.

    :GeekDude!G33kDude@192-168-1-42.isp.com PRIVMSG GeekBot :GeekBot: mult 6 9

# Challenge Output

You will have to recognize that the message has been sent directly to you, so you can send your own reply directly back.
If you tried to send to the same destination as the original message (as you would with a regular channel message),
you would end up sending the chat to yourself.

    PRIVMSG GeekDude :GeekDude: 42

# Bonus

When communicating with the bot directly via private message, nickname prefixes for calling commands and for return
values should be optional. For example, the following should work:

    <:GeekDude!G33kDude@192-168-1-42.isp.com PRIVMSG GeekBot :GeekBot: div 1 9801
    >PRIVMSG GeekDude :GeekDude: 0.00010203...
    <:GeekDude!G33kDude@192-168-1-42.isp.com PRIVMSG GeekBot :div 1 9801
    >PRIVMSG GeekDude :0.00010203...

# Notes

Be careful not to allow your bot to generate any newlines in response to a command. For example, if your bot did hex to
ascii conversion (`GeekBot: hex2ascii 0D0A`) someone could potentially cause the bot to send a new protocol message, which
could do all sorts of nasty things. This includes sending the `QUIT` message which would disconnect the bot, or making it
spam people potentially getting it banned. If your bot is registered to an account, someone could use this technique to
delete the account, or reset the password.

To verify your code is joining channels and chatting correctly, I suggest joining the channel(s) in advance using an IRC client, such as the web based http://webchat.freenode.net/.

You can see the full original IRC specification at https://tools.ietf.org/html/rfc1459. Sections 2.3 and 4.1 are of particular note, as they describe the message format and the initial connection.

[A Regular Expression For IRC Messages](https://mybuddymichael.com/writings/a-regular-expression-for-irc-messages.html)

I get the distinct feeling I've missed something, so if you see anything off let me know.