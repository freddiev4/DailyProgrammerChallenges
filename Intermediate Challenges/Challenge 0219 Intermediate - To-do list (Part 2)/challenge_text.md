#Description

Thanks for that list you made me, my thoughts are way more organised!

I've got a few problems though that I thought you might be able to help with?
Sometimes I put the wrong information in a list item. Maybe to prevent this I'd be able to modify/update the list item? That's not the only problem though, when there are 50+ items it gets kind of hard to work my way through. Do you think you could maybe add the ability to categorise my items? Obviously, if I have that, I'd also like to be able to view by category!

Oh and finally, a few of you were really great and did this last time but is there a way you can somehow make my list retain state so that I don't have to re-type it everytime I turn my computer on again?

The newest To-do list should be capable of the following functionality:

* Modifying an existing list item

* Be able to give a list item a category. The list item should be able to take an arbitrary amount of categorys

* View by category - All list items should be able to be sorted and output by category to make it easier to wade through submissions

* Retain state

Thanks!

#Formal Inputs & Outputs

##Output description

Any output that is created should be user-friendly. When I'm viewing my to-do list, I should be able to easily discern one list item from another.

#Examples

(don't take this too literally, do it how you would like to do it)

##Categorisation

Input:

    addItem('Go to work','Programming'); //Item belongs to the Programming Category
    addItem('Create Sine Waves in C', 'Music', 'Programming); //Belongs to 2 categories, 'Programming' and 'Music');

##Category Output 
Input:

    viewList('programming');
    viewList('music');
    viewList('music', 'programming');

Output:

    ----PROGRAMMING----
    - A pixel is not a pixel is not a pixel
    - The Scheme Programming Language
    - Memory in C
    - Haskell's School of Music
    - Algorithmic Symphonies from one line of code

    ----MUSIC----
    - Modes in Folk Music
    - The use of the Melodic Minor Scale
    - Haskell's School of Music
    - Algorithmic Symphonies from one line of code

    ----MUSIC & PROGRAMMING----
    - Haskell's School of Music
    - Algorithmic Symphonies from one line of code

## Modifying an item

    updateItem('Create Sine Waves in C', 'Create Sine Waves in Python');
    //The item has now changed from 'Create Sine Waves in C' to 'Create Sine Waves in Python'. This should be reflected in the viewList function/method you have created.

#Finally

Have a good challenge idea?

Consider submitting it to /r/dailyprogrammer_ideas