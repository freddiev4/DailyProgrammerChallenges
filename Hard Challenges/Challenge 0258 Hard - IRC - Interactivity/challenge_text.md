# Description

In the previous two challenges the main focus has been on automated actions. Today we will be focusing on manual inputs.
Instead of being a chat bot, today's project will be a chat client.

Your client must allow for simultaneous input and output, so that the user can read messages while writing their own
response. It should allow the user to join and chat to multiple channels, as well as read the outputs of those channels.
They should also be able to leave (part) those channels, and message specific users directly.

It must also keep track of which users are in what channels. When you first join a channel, you will receive a list of
nicks that are currently in that channel. This will come as one or more messages `RPL_NAMREPLY` which is defined as `353`.
These names will sometimes be prefixed by symbols indicating special operator status, but for our purposes that can be
ignored or discarded. The `=` message parameter can also be discarded, as it holds no specific meaning. Once the server has
finished sending `RPL_NAMEREPLY` messages, it will send an `RPL_ENDOFNAMES` message, which is defined as `366`.

    :wolfe.freenode.net 353 GeekBot = #reddit-dailyprogrammer :GeekBot Blackshell @GeekDude +jose_ +j-bot
    :wolfe.freenode.net 366 GeekBot #reddit-dailyprogrammer :End of /NAMES list.

# Input Description

Initial program input is the same as Monday's challenge. However, in addition to this there should be an input field
that the user can use to send chat messages and specify chat messages and commands.

    chat.freenode.net:6667
    Nickname
    Username
    Real Name

Because you can be joined to multiple channels at once, there must be one channel selected for your messages to be sent to.
This will be referred to as the 'current output channel'. Whenever you send a message, it will be sent to the current
output channel, which can be any of the channels you are currently joined to. You must be able to switch between these
channels through chat commands, or through an optional mouseable interface.

And as for chat commands, the following should be supported. Braces `[]` denote optional fields. `//` denotes comment.

    /join #channel    // Joins a channel
    /part [#channel]  // Parts a specified channel, or the current output channel
    /quit             // Sends a QUIT message and closes the connection
    /msg user private message // Sends a message to a user directly
    /nicks [#channel] // Lists the nicks joined to a specified channel, or the current output channel
    /channel #channel // Changes the current output channel

# Output Description

There should be an output field that shows parsed messages in the following format:

    [HH:MM] GeekBot has joined #rdp
    [HH:MM] #rdp <GeekBot> Hey, is anyone here?
    [HH:MM] GeekDude has joined #rdp
    [HH:MM] #rdp <GeekDude> Oh, hey GeekBot.
    [HH:MM] GeekBot has joined #reddit-dailyprogrammer
    [HH:MM] #reddit-dailyprogrammer <GeekBot> This is a test message
    [HH:MM] GeekBot has parted #rdp
    [HH:MM] GeekBot <GeekDude> This is a private message
    [HH:MM] GeekBot has parted #reddit-dailyprogrammer

It should show the joins/parts of any users, including yourself. Outgoing messages should be shown as well as incoming.

# Challenge Input

Keep separate logs for each channel, and only populate the output field with messages from the current output channel.

# Challenge Output

Because you no longer have to specify where a message is coming from, the message log should be formatted as follows:

\#reddit-dailyprogrammer

    [HH:MM] GeekBot has joined #reddit-dailyprogrammer
    [HH:MM] <GeekBot> This is a test message
    [HH:MM] <jose_> This conversation is entirely made up
    [HH:MM] <GeekBot> Yes, yes it is. Got to go!
    [HH:MM] GeekBot has parted #reddit-dailyprogrammer

\#rdp

    [HH:MM] GeekBot has joined #rdp
    [HH:MM] <GeekBot> Hey, is anyone here?
    [HH:MM] GeekDude has joined #rdp
    [HH:MM] <GeekDude> Oh, hey GeekBot.
    [HH:MM] <GeekBot> What's up GeekDude?
    [HH:MM] GeekDude has parted #rdp
    [HH:MM] <GeekBot> Guess he won't be replying...
    [HH:MM] GeekBot has parted #rdp

GeekDude (not technically a channel, but it should go into its own section for the individual messager)

    [HH:MM] GeekBot <GeekDude> This is a private message. Sorry for parting without replying to your message.

# Bonus

Allow the user to connect to multiple servers. You should be able to accept a comma separated list of servers in the
initial input, as well as allow the user to connect to or switch between servers using the `/server server [port]` command.
Port is optional and should default to 6667.

# Notes

To verify your code is joining channels and chatting correctly, I suggest joining the channel in advance using an already
finished IRC client, such as the web based http://webchat.freenode.net/.

You can see the full original IRC specification at https://tools.ietf.org/html/rfc1459. Sections 2.3 and 4.1 are of
particular note, as they describe the message format and the initial connection.

[A Regular Expression For IRC Messages](https://mybuddymichael.com/writings/a-regular-expression-for-irc-messages.html)