# Description

Automatic summarization is the process of reducing a text document with a computer program in order to create a summary that retains the most important points of the original document. A number of algorithms have been developed, with the simplest being one that parses the text, finds the most unique (or important) words, and then finds a sentence or two that contains the most number of the most important words discovered. This is sometimes called "extraction-based summarization" because you are extracting a sentence that conveys the summary of the text. 

For your challenge, you should write an implementation of a text summarizer that can take a block of text (e.g. a paragraph) and emit a one or two sentence summarization of it. You can use a stop word list (words that appear in English that don't add any value) from [here](http://snowball.tartarus.org/algorithms/english/stop.txt).

You may want to review this brief overview of the algorithms and approaches in text summarization from [Fast Forward labs](http://blog.fastforwardlabs.com/post/141666523533/hp-luhn-and-the-heuristic-value-of-simplicity). 

This is essentially what [the autotldr bot does](https://www.reddit.com/r/autotldr/comments/31b9fm/faq_autotldr_bot/). 

# Example Input

Here's a paragraph that we want to summarize:

    The purpose of this paper is to extend existing research on entrepreneurial team formation under 
    a competence-based perspective by empirically testing the influence of the sectoral context on 
    that dynamics. We use inductive, theory-building design to understand how different sectoral 
    characteristics moderate the influence of entrepreneurial opportunity recognition on subsequent 
    entrepreneurial team formation. A sample of 195 founders who teamed up in the nascent phase of 
    Interned-based and Cleantech sectors is analysed. The results suggest a twofold moderating effect 
    of the sectoral context. First, a technologically more challenging sector (i.e. Cleantech) demands 
    technically more skilled entrepreneurs, but at the same time, it requires still fairly 
    commercially experienced and economically competent individuals. Furthermore, the business context 
    also appears to exert an important influence on team formation dynamics: data reveals that 
    individuals are more prone to team up with co-founders possessing complementary know-how when they 
    are starting a new business venture in Cleantech rather than in the Internet-based sector. 
    Overall, these results stress how the business context cannot be ignored when analysing 
    entrepreneurial team formation dynamics by offering interesting insights on the matter to 
    prospective entrepreneurs and interested policymakers.

# Example Output

Here's a simple extraction-based summary of that paragraph, one of a few possible outputs:

    Furthermore, the business context also appears to exert an important influence on team 
    formation dynamics: data reveals that individuals are more prone to team up with co-founders 
    possessing complementary know-how when they are starting a new business venture in Cleantech 
    rather than in the Internet-based sector. 

# Challenge Input

    This case describes the establishment of a new Cisco Systems R&D facility in Shanghai, China, 
    and the great concern that arises when a collaborating R&D site in the United States is closed 
    down. What will that closure do to relationships between the Shanghai and San Jose business 
    units? Will they be blamed and accused of replacing the U.S. engineers? How will it affect 
    other projects? The case also covers aspects of the site's establishment, such as securing an 
    appropriate building, assembling a workforce, seeking appropriate projects, developing 
    managers, building teams, evaluating performance, protecting intellectual property, and 
    managing growth. Suitable for use in organizational behavior, human resource management, and 
    strategy classes at the MBA and executive education levels, the material dramatizes the 
    challenges of changing a U.S.-based company into a global competitor.
