A transposition cipher we'll call the "matrix cipher" can be defined as follows: write each character in the text that you want to encrypt in a matrix of some specified width, where the width is the key of the cipher. So, for instance, if you wanted to encrypt "The cake is a lie!" with the key 3, you would write it like so (the spaces are replaced with underscores for clarity):

    T h e
    _ c a
    k e _
    i s _
    a _ l
    i e !
    
Then to get the ciphertext, you simply read off the columns one by one. So in this case, the ciphertext would be "T\_kiaihces\_eea\_\_l!", or "T kiaihces eea&nbsp;&nbsp;l!" if you put the spaces back in. 

If the text doesn't fit the matrix perfectly, you add in random letters to fill in the last row. So, if we wanted to encode "The cake is a lie!" with key 7, we'd construct this matrix:

    T h e _ c a k
    e _ i s _ a _
    l i e ! v m z
    
Here "v", "m" and "z" have been added in to fill the last row, and the ciphertext is "Telh ieie s!c vaamk z".

Write an implementation of the matrix cipher that can both encode and decode text given the correct key.

***

BONUS: One of the major tricks code-crackers have used throughout history is the fact that the first parts of many messages often follow a regular pattern. They start with "Hello" or "Greetings", "Transmission from" or something like that (Allied codebreakers during World War II took advantage of the fact that Nazi messages often began with "Heil Hitler").

Use this trick to construct a way to automatically crack messages encrypted with the matrix cipher. That is, given a certain ciphertext to crack and the first few characters of the cleartext, figure out what the entire message is without human input. Your code should just return the correct answer and optionally the key, but nothing else.

Try your code-cracker on this text, using the clue that the message starts with "It seems" (or "It_seems", if you use the underscore):

    I_rso_wotTe,taef_h__hl__socaeihtemonraaheamd_svemsp_l_ems_ayiN___Anofeadt.yueo_o
    h_..__leaA_.iaastnY.snw__do__d_nyeuhl_foor_eiaotushlvrr.'oapee.avnv_d__he,ey_gOf
    ___oiunrbpaunieeer_r_l_geos_ctoingoloyfq_rcam__ilainpotlimadufhjv_llt_emiw_aevsd
    nrsdriengieysr_p_tc_,tlfteuc_uitwrrawavzo_irhlez_ftrelszloyyry_bir__e_huv_no_ead
    eauuyvsbs_mtoe_l.rb_urat_eeh_y_pOsreg_fjnp,rocucee___otn_cpgbmujltaayprgiayr_uep
    fb_btt,velyahe_s,eogeraq__ue__ncysr.hcdzoo__ar_duftTcioi'tahkmnarwxeeeegeae_r__j

As you can see, there's plenty of punctuation in this text, but there are no new-lines, it is just one chunk of text. And again, all spaces have been replaced with underscores for clarity, but you should remove those to make the cleartext readable. If you do solve it, please put four spaces before the cleartext if you post it here, to hide it for people who want to solve it themselves.

* Thanks to [SwimmingPastaDevil](http://www.reddit.com/user/SwimmingPastaDevil) for suggesting this problem at /r/dailyprogrammer_ideas! If you have a problem that you think would be a good challenge, why not head over there and help us out!