#Description

If you are studying a particular pair of genes or proteins, an important question is to what extent the two sequences are similar. To quantify similarity, it is necessary to align the two sequences, and then you can calculate a similarity score based on the alignment.

There are two types of alignment in general. A global alignment is an alignment of the full length of two sequences, for example, of two protein sequences or of two DNA sequences. A local alignment is an alignment of part of one sequence to part of another sequence.

Alignment treats the two inputs as a linear sequence to be lined up as much as possible, with optional gaps and conversions allowed. The goal is to minimize these differences. 

The first step in computing a sequence alignment is to decide on a scoring system. For this exercise, we'll simplify this and give a score of +2 to a match and a penalty of -1 to a mismatch, and a penalty of -2 to a gap. 

Here's a small example. Our two DNA sequences to align:

    CTCTAGCATTAG
    GTGCACCCA

One alignment might look like this:

    CTCTAGCATTAG
    GT---GCACCCA

But that one adds three gaps. We can do a bit better with only one gap added (and a small shift in starting position):

    CTCTAGCATTAG
      GT-GCACCCA

While not an exact match, it now minimizes the conversion penalties between the two and aligns them as best we can. 

For more information and how to do this using an R package, see the chapter ["Pairwise Sequence Alignment"](http://a-little-book-of-r-for-bioinformatics.readthedocs.org/en/latest/src/chapter4.html), or [this set of lecture notes from George Washington University](http://www.seas.gwu.edu/~simhaweb/cs151/lectures/module12/align.html). The key algorithm is [Needleman-Wunsch](http://en.wikipedia.org/wiki/Needleman%E2%80%93Wunsch_algorithm).

For this challenge your task is to write a program that accepts two sequences and globally aligns them. If you want to make this harder and integrate the BLOSUM matrices, you may. 

#Input Description

You'll be given two sequences on two lines, one line per sequence. They'll be the same type of input, DNA or protein. 

#Output Description

Your program should emit the aligned sequences with gaps introduced represented by dashed ("-"). 

#Input

DNA example

    GACGTACGTACGTACGTACGTACGTACGTACGTACGTACGTACGTACGTAC
    ACGTACGTACGTACGTACGTACGTACGTACGTACGTACGTACGTAC
    
Protein example

        MTNRTLSREEIRKLDRDLRILVATNGTLTRVLNVVANEEIVVDIINQQLLDVAPKIPELENLKIGRILQRDILLKGQKSGILFVAAESLIVIDLLPTAITTYLTKTHHPIGEIMAASRIETYKEDAQVWIGDLPCWLADYGYWDLPKRAVGRRYRIIAGGQPVIITTEYFLRSVFQDTPREELDRCQYSNDIDTRSGDRFVLHGRVFKN
        MLAVLPEKREMTECHLSDEEIRKLNRDLRILIATNGTLTRILNVLANDEIVVEIVKQQIQDAAPEMDGCDHSSIGRVLRRDIVLKGRRSGIPFVAAESFIAIDLLPPEIVASLLETHRPIGEVMAASCIETFKEEAKVWAGESPAWLELDRRRNLPPKVVGRQYRVIAEGRPVIIITEYFLRSVFEDNSREEPIRHQRSVGTSARSGRSICT

#Output

DNA example

    GACGTACGTACGTACGTACGTACGTACGTACGTACGTACGTACGTACGTAC
     ACGTACGTACGTACGTACGTACGTACGTACGTACGTACGTACGTAC
    
Protein example

              MTNRTLSREEIRKLDRDLRILVATNGTLTRVLNVVANEEIVVDIINQQLLDVAPKIPELENLKIGRILQRDILLKGQKSGILFVAAESLIVIDLLPTAITTYLTKTHHPIGEIMAASRIETYKEDAQVWIGDLPCWLADYGYWDLPKRAVGRRYRIIAGGQPVIITTEYFLRSVFQDTPREELDRCQYSNDIDTRSGDRFVLHGRVFKN
    MLAVLPEKREMTECHLSDEEIRKLNRDLRILIATNGTLTRILNVLANDEIVVEIVKQQIQDAAPEMDGCDHSSIGRVLRRDIVLKGRRSGIPFVAAESFIAIDLLPPEIVASLLETHRPIGEVMAASCIETFKEEAKVWAGESPAWLELDRRRNLPPKVVGRQYRVIAEGRPVIIITEYFLRSVFEDNSREEPIRHQRS--VGT-SA-R---SGRSICT

#Notes

Once you have a simple NW algorithm implemented, you can alter the cost matrices. In the bioinformatics field, the PAM and BLOSUM matrices are the standards. You can find them here: ftp://ftp.ncbi.nih.gov/blast/matrices/ 

Have a cool challenge idea? Post it to /r/DailyProgrammer_Ideas!