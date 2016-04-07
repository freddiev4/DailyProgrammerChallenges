Anyone who've tried to get through the *A Song of Ice and Fire* books written by George R.R. Martin (the basis for the HBO show Game of Thrones) knows that while the books are generally excellent, there are *a lot* of characters. A staggering number, in fact, and it can be very hard to remember who's who and who is related to who and who had an incestual relationship with what sister or brother.

So, today, we make that a little bit easier! What follows at the end here is a list of 50+ characters from the books and a list detailing how their related. Each character is given a two-letter code (for instance "AA" or "BQ") and a specification of their gender ("M" or "F"), and then what follows is a list detailing how they're related to the other characters. 

To make things simple, there's only one "basic" relationship, which is "A is parent to B", written as "->". So, for instance, if Arya Stark has the code "AI" and Eddard Stark has the code "AB", then "AB->AI" means "Eddard Stark is parent to Arya Stark". Each person may have 0, 1 or 2 parents specified somewhere in the list, but no more.

(I should point out here that this family tree contains *no spoilers*. This is the family tree as it stands in the beginning of Book 1, though some of the characters you wont meet until much later. For those of you who've read the books or seen the show, please don't put any spoilers in the comments, even in hidden spoiler text.)

Write a program that parses this list, and can then answer questions about the relationships between people. Here are a list of functions you should write:

* ancestors(person) which gives the direct ancestors of that person (parents, grand-parents, great-grand-parents, etc.). For instance, ancestors("Asha Greyjoy") should return ["Balon Greyjoy", "Alannys Harlaw", "Quellon Greyjoy"]. What is the result to ancestors("Daenerys Targaryen")?

* descendants(person) which gives you the direct descendants of that person (children, grand-children, great-grand-children, etc.). What is the result of descendants("Jaehaerys Targaryen")?

* brothers(person) and sisters(person) which gives the brothers and sisters of the specified person (including half-brothers and half-sisters, though you could write special functions for full siblings and half siblings if you want).

* aunts(person) and uncles(person) which gives you the aunts and uncles of the specified person.

* cousins(person), which gives you the 1st cousins of the specified person.

* Bonus: As a bonus, write a function called relationship(person1, person2) which returns person1's relationshipt to person2 as a string (i.e. "Grandfather", "1st cousin", "Brother", "Great uncle", "Not related" etc.). As with all bonuses on /r/dailyprogrammer, this is entirely optional. EDIT: Since this chart gives no indication about who is married to whom, you can safely exclude all familial relationships that somehow involves marriage. That means that relationship("Eddard Stark", "Catelyn Tully") should return "Not related", and you can also skip all brother/sister/mother/father in-laws. Only relationships "by blood", so to speak. 

***


And now, here is the family tree of some of the major characters in A Song of Ice and Fire:

    AA = Rickard Stark (M)        AB = Eddard Stark (M)         AC = Catelyn Tully (F)        
    AD = Brandon Stark (M)        AE = Benjen Stark (M)         AF = Jon Snow (M)             
    AG = Robb Stark (M)           AH = Sansa Stark (F)          AI = Arya Stark (F)           
    AJ = Bran Stark (M)           AK = Rickon Stark (M)         AL = Hoster Tully (M)         
    AM = Minisa Whent (F)         AN = Edmure Tully (M)         AO = Lysa Tully (F)           
    AP = Jon Arryn (M)            AQ = Robert Arryn (M)         AR = Tytos Lannister (M)      
    AS = Tywin Lannister (M)      AT = Joanna Lannister (F)     AU = Kevan Lannister (M)      
    AV = Cersei Lannister (F)     AW = Jamie Lannister (M)      AX = Tyrion Lannister (M)     
    AY = Robert Baratheon (M)     AZ = Joffrey Baratheon (M)    BA = Myrcella Baratheon (F)   
    BB = Tommen Baratheon (M)     BC = Lancel Lannister (M)     BD = Steffon Baratheon (M)    
    BE = Stannis Baratheon (M)    BF = Selyse Florent (F)       BG = Shireen Baratheon (F)    
    BH = Renly Baratheon (M)      BI = Jaehaerys Targaryen (M)  BJ = Aerys Targaryen (M)      
    BK = Rhaella Targaryen (F)    BL = Rhaegar Targaryen (M)    BM = Elia Martell (F)         
    BN = Rhaenys Targaryen (F)    BO = Aegon Targaryen (M)      BP = Viserys Targaryen (M)    
    BQ = Daenerys Targaryen (F)   BR = Quellon Greyjoy (M)      BS = Balon Greyjoy (M)        
    BT = Euron Greyjoy (M)        BU = Victarion Greyjoy (M)    BV = Urrigon Greyjoy (M)      
    BW = Aeron Greyjoy (M)        BX = Rodrik Greyjoy (M)       BY = Maron Greyjoy (M)        
    BZ = Asha Greyjoy (F)         CA = Theon Greyjoy (M)        CB = Alannys Harlaw (F)       
    ---------------------------------------------------------------------------------------
    AA->AB, AA->AD, AA->AE, AB->AF, AB->AG, AB->AH, AB->AI, AB->AJ, AB->AK, AC->AG, 
    AC->AH, AC->AI, AC->AJ, AC->AK, AL->AC, AL->AN, AL->AO, AM->AC, AM->AN, AM->AO, 
    AO->AQ, AP->AQ, AR->AS, AR->AU, AS->AV, AS->AW, AS->AX, AT->AV, AT->AW, AT->AX, 
    AU->BC, AV->AZ, AV->BA, AV->BB, AY->AZ, AY->BA, AY->BB, BD->AY, BD->BE, BD->BH, 
    BE->BG, BF->BG, BI->BJ, BI->BK, BJ->BL, BJ->BP, BJ->BQ, BK->BL, BK->BP, BK->BQ, 
    BL->BN, BL->BO, BM->BN, BM->BO, BR->BS, BR->BT, BR->BU, BR->BV, BR->BW, BS->BX, 
    BS->BY, BS->BZ, BS->CA, CB->BX, CB->BY, CB->BZ, CB->CA
