Wrapping up our bioinformatics theme with the third and final installment today. If you like these sorts of problems, I encourage you to check out Project Rosalind (their site seems back up): http://rosalind.info/

# Description

The Chou-Fasman method is an empirical technique for the prediction of secondary structures in proteins, originally developed in the 1970s by Peter Y. Chou and Gerald D. Fasman. The method is based on analyses of the relative frequencies of each amino acid in alpha helices, beta sheets, and turns based on known protein structures.  From these frequencies a set of probability parameters were derived for the appearance of each amino acid in each secondary structure type, and these parameters are used to predict the probability that a given sequence of amino acids would form a helix, a beta strand, or a turn in a protein. The method is at most about 50–60% accurate in identifying correct secondary structures, and is mostly of historical significance at this point (it's been updated by better methods). 

The Chou-Fasman method predicts helices and strands in a similar fashion, first searching linearly through the sequence for a "nucleation" region of high helix or strand probability and then extending the region until a subsequent four-residue window carries a probability of less than 1. As originally described, four out of any six contiguous amino acids were sufficient to nucleate helix, and three out of any contiguous five were sufficient for a sheet. The probability thresholds for helix and strand nucleations are constant but not necessarily equal; originally 1.03 was set as the helix cutoff and 1.00 for the strand cutoff.

You can find a table showing propensities for an amino acid to help form an alpha-helix or a beta-sheet at [this link](http://employees.csbsju.edu/hjakubowski/classes/ch331/protstructure/tablechoufas.htm) or [this one](http://prowl.rockefeller.edu/aainfo/chou.htm) along with an algorithm description. 

You can learn more about the [Chou-Fasman method via Wikipedia](http://en.wikipedia.org/wiki/Chou%E2%80%93Fasman_method). Also, slide 17 of [this deck](http://www.slideshare.net/RoshanKarunarathna1/chou-fasman-algorithm-for-protein-structure) describes the approach quite cleanly.

In this challenge you'll be given a protein sequence and asked to suggest its secondary structure. 

# Input

    MET LYS ILE ASP ALA ILE VAL GLY ARG ASN SER ALA LYS ASP ILE ARG THR GLU GLU ARG ALA ARG
    VAL GLN LEU GLY ASN VAL VAL THR ALA ALA ALA LEU HIS GLY GLY ILE ARG ILE SER ASP GLN THR
    THR ASN SER VAL GLU THR VAL VAL GLY LYS GLY GLU SER ARG VAL LEU ILE GLY ASN GLU TYR
    GLY GLY LYS GLY PHE TRP ASP ASN HIS HIS HIS HIS HIS HIS 

# Output

Here's the results of an **[online Chou-Fasman prediction](http://www.biogem.org/cgi-bin/cho-fas.pl)** for the 2RNM sequence showing predicted helices and sheets:

	Met Lys Ile Asp Ala Ile Val Gly Arg Asn Ser Ala Lys Asp Ile Arg Thr Glu Glu Arg Ala Arg 
	H   H   H   H   H   H                               H   H   H   H   H   H   H   H   H   


	Val Gln Leu Gly Asn Val Val Thr Ala Ala Ala Leu His Gly Gly Ile Arg Ile Ser Asp Gln Thr 
	H   H   H   H   H   H   H   H   H   H   H   H  
	B   B   B   B   B   B   B   B   B   B                               B   B   B   B             
	
	Thr Asn Ser Val Glu Thr Val Val Gly Lys Gly Glu Ser Arg Val Leu Ile Gly Asn Glu Tyr 
																	H   H   H
	B   B   B   B   B   B   B   B 

	Gly Gly Lys Gly Phe Trp Asp Asn His His His His His His
	


And here is the **empirically determined** secondary structure from x-ray crystallography, based on http://pdbj.org/mine/structural_details/2rnm. Note that no alpha helices were found in the structure, so that row is blank. You can see how far off the prediction method and experiment can be:

	MET LYS ILE ASP ALA ILE VAL GLY ARG ASN SER ALA LYS ASP ILE ARG THR GLU GLU ARG ALA ARG
	
	                                            B   B   B   B   B   B

	VAL GLN LEU GLY ASN VAL VAL THR ALA ALA ALA LEU HIS GLY GLY ILE ARG ILE SER ASP GLN THR

	B   B   B           B   B  

	THR ASN SER VAL GLU THR VAL VAL GLY LYS GLY GLU SER ARG VAL LEU ILE GLY ASN GLU TYR

	B   B   B   B   B   B   B   B   B                   B   B   B   B           B   B

	GLY GLY LYS GLY PHE TRP ASP ASN HIS HIS HIS HIS HIS HIS
	

# Notes

Other interesting proteins you could analyze include 1VPX or 1BKF, they'll give you some mixed structures. Use the European Protein Databank site (for example for [1VPX](http://www.ebi.ac.uk/pdbe-srv/view/entry/1vpx/secondary.html)) to confirm your results. 

If you have your own idea for a challenge, submit it to /r/DailyProgrammer_Ideas, and there's a good chance we'll post it.