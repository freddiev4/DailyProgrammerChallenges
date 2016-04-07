# Description

DNA sequences are made up of a 4 character alphabet - A, C, T or G, that describe the nucleotide bases in a gene sequence. To ascertain the sequence of DNA, scientists use chemical methods to identify the component nucleotides in a method called DNA sequencing. DNA *shotgun* sequencing is a method whereby DNA subsequences of the same larger sequence are produced at massive parallel scale by DNA sequencing methods, and the overlap between segments is used to reconstruct the input gene. This is a fast and accurate method, and is dropping in price. Shotgun sequencing was used to perform the first entire sequence of a human's DNA, for example. For additional background information, see [Wikipedia on shotgun sequencing](http://en.wikipedia.org/wiki/Shotgun_sequencing). 

You're working in a DNA laboratory and you have to reconstruct a gene's sequence from a series of fragments!

# Formal Input Description

You'll be given a series of DNA sequence fragments, which include overlaps with neighbor sequences, but not in any specific order - it's random. Your job is to read in the fragments and reconstruct the input DNA sequence that lead to the fragments. 

# Formal Output Description

Your program should emit the DNA sequence it calculated. 

# Sample Input

You'll be given the DNA sequence of one of the strands of DNA (e.g. no complementarity calculations or inferences required) using the DNA alphabet of "a,t,c,g". Assume no read errors, also. Example:

        tgca
        taggcta
        gtcatgcttaggcta
        agcatgctgcag
        tcatgct

# Sample Output

Your program should emit the shortest DNA sequence that would contain the above fragments. Example:

        agcatgctgcagtcatgcttaggcta

# Challenge Input

        gatccatctggatcctatagttcatggaaagccgctgc
        tatttcaacattaattgttggttttgatacagatggtacacca
        aaaagaaattcaaaaagaacaagaaaaatctgaaaaacaacaaaa
        ggaatgtcaatcctatagattaactgttgaagattcaccatcagttg
        tggaaataaaaatattgaaattgcagtcattagaaataaacaac
        tcaagtagaatatgccatggaagcagtaagaaaaggtactgttg
        tgcaagatcaattagaaaaatcgttaaattagatgaccacatt
        tgtcgttgaagctgaaaaagaaattcaaaaagaacaagaaaaatct
        gaaaaacaacaaaaataaattacatcaaattccttttttt
        caatcgttttattagatgaacaagaaattgataaattagttgc
        aatctttatcaaactgatccatctggatcctatagttcatg
        gaaattgcagtcattagaaataaacaaccaatcgttttattagatg
        atcgttaaattagatgaccacatttgtttaacctttgctggt
        aattatacagacgttagtgaagaggaatcaattaaattagcagtta
        tatactcaaagtggtggtgttagaccatttggtatttcaacattaat
        ttttaggtgttgaaaagaaagcaaccgctaaacttcaaga
        aagaaagcaaccgctaaacttcaagatgcaagatcaattagaaaa
        ccccacctttttttttaattatcttcaagtttttttaaaaaaaaaaaaaaaa
        gaatttttagaaaagaattatacagacgttagtgaagaggaatc
        agtgcaagatacgatagagcaattacagttttctcaccagatg
        aattaaattagcagttagagctttattagagattgttgaaag
        cagttggtgtacgtggtaaagatgttattgttttaggtgttgaa
        ttcaacaacgttatactcaaagtggtggtgttagaccatttgg
        ataaattacatcaaattcctttttttccccacctttttttt
        aattggtcgtagttcaaagagtgttggtgaatttttagaaaag
        aatatatttctaaatttattgctggtattcaacaacgt
        aacaagaaattgataaattagttgctgtcgttgaagctga
        gagctttattagagattgttgaaagtggaaataaaaatatt
        ttaactgccgattcacgtgtattaattagtaaagcattaat
        acgatagagcaattacagttttctcaccagatggtcatctttt
        aaggtactgttgcagttggtgtacgtggtaaagatgttattg
        tgtttaacctttgctggtttaactgccgattcacgtgtattaatt
        aataatataatatatatataaatacataataatgtcaagtgcaagat
        agtaaagcattaatggaatgtcaatcctatagattaactgt
        tgaagattcaccatcagttgaatatatttctaaatttattgctggta
        gaaagccgctgcaattggtcgtagttcaaagagtgttggt
        gtcatctttttcaagtagaatatgccatggaagcagtaagaa
        tgttggttttgatacagatggtacaccaaatctttatcaaact


# Challenge Input Solution

        aataatataatatatatataaatacataataatgtcaagtgcaagatacgatagagcaattacagttttctcaccagatggtcatctttttcaagtagaatatgccatggaagcagtaagaaaaggtactgttgcagttggtgtacgtggtaaagatgttattgttttaggtgttgaaaagaaagcaaccgctaaacttcaagatgcaagatcaattagaaaaatcgttaaattagatgaccacatttgtttaacctttgctggtttaactgccgattcacgtgtattaattagtaaagcattaatggaatgtcaatcctatagattaactgttgaagattcaccatcagttgaatatatttctaaatttattgctggtattcaacaacgttatactcaaagtggtggtgttagaccatttggtatttcaacattaattgttggttttgatacagatggtacaccaaatctttatcaaactgatccatctggatcctatagttcatggaaagccgctgcaattggtcgtagttcaaagagtgttggtgaatttttagaaaagaattatacagacgttagtgaagaggaatcaattaaattagcagttagagctttattagagattgttgaaagtggaaataaaaatattgaaattgcagtcattagaaataaacaaccaatcgttttattagatgaacaagaaattgataaattagttgctgtcgttgaagctgaaaaagaaattcaaaaagaacaagaaaaatctgaaaaacaacaaaaataaattacatcaaattcctttttttccccacctttttttttaattatcttcaagtttttttaaaaaaaaaaaaaaaa

# Credit

This same idea - shortest common superstring - was also suggested by /u/202halffound, many thanks! If you have your own idea for a challenge, submit it to /r/DailyProgrammer_Ideas, and there's a good chance we'll post it.
