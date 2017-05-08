# Description

I've been a fan of text-based interactive fiction games for a long time, and used to play [Zork](https://en.wikipedia.org/wiki/Zork) a lot as a kid, as well as [Rogue](https://en.wikipedia.org/wiki/Rogue_(video_game\)). In college I got into MUDs, and several years ago I wrote a small MUD engine called [punymud](https://github.com/paralax/punymud) in an effort to see how much could be done in a small amount of code. 

Many games sometimes build on hand-generated worlds, but increasingly people explore *procedurally generated worlds*, or dungeons. This keeps games fresh and exicting. However, the development of such algorithms is crucial to keep it enticing to a human player and not repetitive. 

Today's challenge is open ended. Write code to procedurally generate dungeons. Some things to keep in mind:

- You can make it a 2D or 3D world, it's up to you.
- How you let people interact with it is up to you. You can make a series of maps (ASCII art, graphics, etc) or even output a world compatible with something like punymud. An example of a procedurally generated world that's just maps is the [Uncharted Atlas](http://mewo2.com/notes/terrain/) Twitter account, which uses code to create fake maps. The goal isn't to write a game engine, but rather something you could wrap a game engine around.
- Things like names, descriptions, items, etc - all optional. But really neat if you do. The Genmud code (below) has some examples of how to do that. 
- Your code must yield unique maps for every run. 

I encourage you to have fun, build on each other's work (and even work collaboratively if you wish), and see where this takes you. If you like this sort of thing, there's a [group of subreddits](https://www.reddit.com/r/proceduralgeneration/) devoted to that type of thing. 

# Useful Links

- [Genmud](https://github.com/toddcarnes/genmud) - A multi user dungeon that uses a procedurally generated world with layouts, items, quests, room descriptions, and more. 
- [Tutorial: Procedural Dungeon Generation: A Roguelike Game](https://www.scirra.com/tutorials/1112/procedural-dungeon-generation-a-roguelike-game) - In this tutorial, we will learn how to create a Roguelike-style game.
- [The Procedural Content Generation Wiki](http://pcg.wikidot.com/) - The PCG Wiki is a central knowledge-base for everything related to Procedural Content Generation, as well as a detailed directory of games using Procedural Content Generation. You may want to skip right to the [dungeon generation algorithm description](http://pcg.wikidot.com/pcg-algorithm:dungeon-generation). 
- [Bake Your Own 3D Dungeons With Procedural Recipes](https://gamedevelopment.tutsplus.com/tutorials/bake-your-own-3d-dungeons-with-procedural-recipes--gamedev-14360) - In this tutorial, you will learn how to build complex dungeons from prefabricated parts, unconstrained to 2D or 3D grids.
- [Procedural Dungeon Generation Algorithm](http://www.gamasutra.com/blogs/AAdonaac/20150903/252889/Procedural_Dungeon_Generation_Algorithm.php) - This post explains a technique for generating randomized dungeons that was first described by TinyKeepDev here. I'll go over it in a little more detail than the steps in the original post. *I really like this writeup. While complicated, it's pretty clear and talks about the strategies to keep the game interesting.*
- [RANDOM DUNGEON GENERATION](https://www.saschawillems.de/?page_id=395) - So this article is about my “journey” into the realms of random dungeon generation. Note that this is not an article on how to code a random dungeon generator, but more a journal on how I went from zero ideas on how-to-do it to a fully working dungeon generator in the end. 
- [Rooms and Mazes: A Procedural Dungeon Generator](http://journal.stuffwithstuff.com/2014/12/21/rooms-and-mazes/) -  Instead of game loops, today we’re going to talk about possibly the most fun and challenging part of making a roguelike: generating dungeons!
