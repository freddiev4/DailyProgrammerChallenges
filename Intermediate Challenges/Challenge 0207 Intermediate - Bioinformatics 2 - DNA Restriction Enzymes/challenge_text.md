Continuing with our bioinformatics theme today. If you like these sorts of problems, I encourage you to check out Project Rosalind (their site seems back up): http://rosalind.info/

# Description

Restriction enzymes are DNA-cutting enzymes found in bacteria (and harvested from them for use). Because they cut within the molecule, they are often called restriction endonucleases. In order to be able to sequence DNA, it is first necessary to cut it into smaller fragments. For precise molecular biology work, what is needed is a way to cleave the DNA molecule at a few specifically-located sites so that a small set of homogeneous fragments are produced. The tools for this are the restriction endonucleases. The rarer the site it recognizes, the smaller the number of pieces produced by a given restriction endonuclease.

For more information on how these enzymes work, including a great visualization of how they cut, have a look here: http://users.rcn.com/jkimball.ma.ultranet/BiologyPages/R/RestrictionEnzymes.html

These enzymes can cleave the DNA at a site that leaves both strands the same length. This is called a "blunt" end because of this and can be visualized like this:

	5'-GG  +CC-3'
	3'-CC   GG-5'

Other DNA restriction enzymes cleave the ends at different lengths, although it's symmetrical about the central axis. These are called "sticky" ends, and here's a simple visualization of one of those cuts:

	5'-ATCTGACT      + GATGCGTATGCT-3'
	3'-TAGACTGACTACG        CATACGA-5'
	
In both cases the two strands are cut at a point of symmetry (the upper and lower strands are symmetrical if rotated). 

Today your challenge is to write a program that can recognize the locations where various enzymes will cut DNA. 

# Input

You'll be given a list of DNA restriction enzymes and their recognition site and where the cut occurs. The input will be structured as enzyme name, if the enzyme makes a "sticky" or "blunt" end cut, the DNA recognition sequence and the position of the cut marked with a caret ("\^"). For the sticky ends, you should assume the mirror image of the complementary strand gets the same cut, leaving one of the strands to overhang (hence it's "sticky"). 

	BamHI sticky G^GATCC
	HaeIII blunt GG^CC
	HindIII sticky A^AGCTT

Then you'll be given a DNA sequence and be asked to cut it with the listed enzymes. For sake of convenience, the DNA sequence is broken into blocks of 10 bases at a time and in lengths of 6 blocks per row. You should merge these together and drop the first column of digits.

This sequence was taken from the genome of *Enterobacteria phage phiX174 sensu lato* http://www.genome.jp/dbget-bin/www_bget?refseq+NC_001422 and modified for this challenge. 

	  1 gagttttatc gcttccatga cgcagaagtt aacactttcg gatatttctg atgagtcgaa
	 61 aaattatctt gataaagcag gaattactac tgcttgttta cgaattaaat cgaagtggac
	121 tgctggcgga aaatgagaaa attcgaccta tccttgcgca gctcgagaag ctcttacttt
	181 gcgacctttc gccatcaact aacgattctg tcaaaaactg acgcgttgga tgaggagaag
	241 tggcttaata tgcttggcac gttcgtcaag gactggttta gatatgagtc acattttgtt
	301 catggtagag attctcttgt tgacatttta aaagagcgtg gattactatc tgagtccgat
	361 gctgttcaac cactaatagg taagaaatca tgagtcaagt tactgaacaa tccgtacgtt
	421 tccagaccgc tttggcctct attaagctta ttcaggcttc tgccgttttg gatttaaccg
	481 aagatgattt cgattttctg acgagtaaca aagtttggat ccctactgac cgctctcgtg
	541 ctcgtcgctg cgttgaggct tgcgtttatg gtacgctgga ctttgtggga taccctcgct
	601 ttcctgctcc tgttgagttt attgctgccg tcaaagctta ttatgttcat cccgtcaaca
	661 ttcaaacggc ctgtctcatc atggaaggcg ctgaatttac ggaaaacatt attaatggcg
	721 tcgagcgtcc ggttaaagcc gctgaattgt tcgcgtttac cttgcgtgta cgcgcaggaa
	781 acactgacgt tcttactgac gcagaagaaa acgtgcgtca aaaattacgt gcggaaggag
	841 tgatgtaatg tctaaaggta aaaaacgttc tggcgctcgc cctggtcgtc cgcagccgtt

# Output

Your program should emit the name of the enzyme, the cut positions for that enzyme, and the contextualized cut. For the above the solution would be:

	BamHI 517 agttt[g gatcc]ctactg
	HaeIII 435 gcttt[gg cc]tctattaa
	HaeIII 669 caaac[gg cc]tgtctcat
	HindIII 444 ctatt[a agctt]attcag
	HindIII 634 cgtca[a agctt]attatg
	
# Bonus

Write some code that identifies any and all symmetrical points along the DNA sequence where an enzyme (not just the three listed) could cut. These should be even-length palindromes between 4 and 10 bases long. 
	
# Notes

If you have your own idea for a challenge, submit it to /r/DailyProgrammer_Ideas, and there's a good chance we'll post it.