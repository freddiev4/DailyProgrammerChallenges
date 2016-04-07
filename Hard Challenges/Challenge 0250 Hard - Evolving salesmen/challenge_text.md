You must plan a route for a salesman to visit each of 26 cities and then return home.  

#The catch?

That is 3.04888e29 route permutations to brute force (don't try), and you only have 1 second to calculate the answer.  (salesman needs to leave right away)

# out of kindness,

The requirement is to get a good solution.  Not the guaranteed optimal one.  
The 1 second limit is just approximate.  
You may spend additional second(s) evolving a better solution from a previous one (but only spending up to 1 second on each evolved new solution)  
You may also "cheat" by keeping a small (under say 10kb) amount of state for the next evolution iteration.

# input
cities are x y points, and the distance between them is the floor of the pythagoran distance.

home city is the first at: 0 0

      0   0
    689 291
    801 724
    388 143
    143 832
    485 484
    627 231
    610 311
    549 990
    220  28
     66 496
    693 988
    597 372
    753 222
    885 639
    897 594
    482 635
    379 490
    923 781
    352 867
    834 713
    133 344
    835 949
    667 695
    956 850
    535 170
    583 406

The calculated distance table,

       0 747 1079 413 844 685 668 684 1132  221 500 1206 703 785 1091 1075 797 619 1209 935 1097 368 1264 963 1279 561 710
     747   0  447 335 768 280  86  81  712  537 655  697 122  94  399  367 401 368  543 667  446 558  674 404  619 195 156
    1079 447    0 712 666 396 522 455  366  906 769  285 406 504  119  161 331 482  134 471   34 768  227 137  199 614 385
     413 335  712   0 731 354 254 278  862  203 477  898 310 373  702  680 500 347  832 724  723 324  921 618  906 149 327
     844 768  666 731   0 487 771 699  435  807 344  571 646 862  766  790 392 415  781 211  701 488  701 541  813 769 612
     685 280  396 354 487   0 290 213  510  527 419  545 158 374  428  426 151 106  529 405  417 378  582 278  596 317 125
     668  86  522 254 771 290   0  81  762  454 620  759 144 126  482  452 429 358  624 692  524 506  747 465  701 110 180
     684  81  455 278 699 213  81   0  681  481 574  682  62 168  428  403 348 292  564 612  460 478  676 388  640 159  98
    1132 712  366 862 435 510 762 681    0 1016 690  144 619 794  485  527 361 528  428 232  397 768  288 317  430 820 584
     221 537  906 203 807 527 454 481 1016    0 492 1070 510 567  903  882 661 488 1030 849  919 327 1107 802 1103 345 524
     500 655  769 477 344 419 620 574  690  492   0  796 545 739  831  836 438 313  903 468  798 166  892 633  957 571 524
    1206 697  285 898 571 545 759 682  144 1070 796    0 623 768  398  443 411 588  309 361  309 853  147 294  297 833 592
     703 122  406 310 646 158 144  62  619  510 545  623   0 216  392  373 287 247  523 552  415 464  624 330  597 211  36
     785  94  504 373 862 374 126 168  794  567 739  768 216   0  437  398 493 460  584 759  497 631  731 480  659 224 250
    1091 399  119 702 766 428 482 428  485  903 831  398 392 437    0   46 403 527  146 579   89 807  314 225  222 585 381
    1075 367  161 680 790 426 452 403  527  882 836  443 373 398   46    0 417 528  188 609  134 803  360 251  262 557 365
     797 401  331 500 392 151 429 348  361  661 438  411 287 493  403  417   0 177  464 265  360 454  472 194  520 468 250
     619 368  482 347 415 106 358 292  528  488 313  588 247 460  527  528 177   0  616 377  506 286  647 353  680 356 220
    1209 543  134 832 781 529 624 564  428 1030 903  309 523 584  146  188 464 616    0 577  112 902  189 270   76 723 506
     935 667  471 724 211 405 692 612  232  849 468  361 552 759  579  609 265 377  577   0  506 567  489 358  604 720 515
    1097 446   34 723 701 417 524 460  397  919 798  309 415 497   89  134 360 506  112 506    0 792  236 167  183 619 396
     368 558  768 324 488 378 506 478  768  327 166  853 464 631  807  803 454 286  902 567  792   0  926 639  966 438 454
    1264 674  227 921 701 582 747 676  288 1107 892  147 624 731  314  360 472 647  189 489  236 926    0 304  156 834 598
     963 404  137 618 541 278 465 388  317  802 633  294 330 480  225  251 194 353  270 358  167 639  304   0  327 541 300
    1279 619  199 906 813 596 701 640  430 1103 957  297 597 659  222  262 520 680   76 604  183 966  156 327    0 799 579
     561 195  614 149 769 317 110 159  820  345 571  833 211 224  585  557 468 356  723 720  619 438  834 541  799   0 240
     710 156  385 327 612 125 180  98  584  524 524  592  36 250  381  365 250 220  506 515  396 454  598 300  579 240   0


# output
      total distance of itinerary:  14193 pythagores
      route order: 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 0

Or a much shorter route

# tips

This is a well known problem called The Travelling Salesman.

Genetic algorithms are considered a good fit for time constrained solutions.

Clustering and then travelling among clusters can reduce the permutation space significantly.  Similarly, finding close pairs and/or triplets creates good candidate clusters.

The allowed cheat list suggests a 3 step program.  1. quick clustering, 2. arrange clusters, 3. format output.  You may keep step 1 or 2's output as input for the next evolution.

The evolving solver does not need to be the same program that creates the first solution.

#bonus
a 40 city tour.  Not sure if same algorithms will work

      0   0
    194 956
    908 906
    585 148
    666 196
     76  59
    633 672
    963 801
    789 752
    117 620
    409  65
    257 747
    229 377
    334 608
    837 374
    382 841
    921 910
     54 903
    959 743
    532 477
    934 794
    720 973
    117 555
    519 496
    933 152
    408  52
    750   3
    465 174
    790 890
    983 861
    605 790
    314 430
    272 149
    902 674
    340 780
    827 507
    915 187
    483 931
    466 503
    451 435
    698 569