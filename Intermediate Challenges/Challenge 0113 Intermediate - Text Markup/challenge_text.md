**Description:**

Many technologies, notably user-edited websites, take a source text with a special type of mark-up and output HTML code. As an example, Reddit uses a special formatting syntax to turn user texts into bulleted lists, web-links, quotes, etc.

Your goal is to write a function that specifically implements the Reddit markup language, and returns all results in appropriate HTML source-code. The actual HTML features you would like to implement formatting (i.e. using CSS bold vs. the old <b> tag) is left up to you, though "modern-and-correct" output is highly desired!

[Reddit's markup description is defined here](http://www.reddit.com/help/commenting). You are required to implement all 9 types found on that page's "Posting" reference table.

**Formal Inputs & Outputs:**

*Input Description:*

String UserText - The source text to be parsed, which may include multiple lines of text.

*Output Description:*

You must print the HTML formatted output.

**Sample Inputs & Outputs:**

The string literal `*Test*` should print <b>Test</b> or <div style="font-weight:bold;">Test</div>