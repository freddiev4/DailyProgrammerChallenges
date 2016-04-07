**Description:**

[Website URLs](http://en.wikipedia.org/wiki/Uniform_resource_locator), or Uniform Resource Locators, sometimes embed important data or arguments to be used by the server. This entire string, which is a URL with a [Query String](http://en.wikipedia.org/wiki/Query_string) at the end, is used to "[GET](http://en.wikipedia.org/wiki/GET_(HTTP)#Request_methods)" data from a web server.

A classic example are URLs that declare which page or service you want to access. The Wikipedia log-in URL is the following:

    http://en.wikipedia.org/w/index.php?title=Special:UserLogin&returnto=Main+Page

Note how the URL has the Query String "?title=..", where the value "title" is "Special:UserLogin" and "returnto" is "Main+Page"?

Your goal is to, given a website URL, validate if the URL is well-formed, and if so, print a simple list of the key-value pairs! Note that URLs only allow specific characters ([listed here](http://en.wikipedia.org/wiki/Uniform_resource_locator#List_of_allowed_URL_characters)) and that a Query String must always be of the form "<base-URL>[?key1=value1[&key2=value2[etc...]]]"

**Formal Inputs & Outputs:**

*Input Description:*

String GivenURL - A given URL that may or may not be well-formed.

*Output Description:*

If the given URl is invalid, simply print "The given URL is invalid". If the given URL is valid, print all key-value pairs in the following format:

    key1: "value1"
    key2: "value2"
    key3: "value3"
    etc...

**Sample Inputs & Outputs:**

Given "http://en.wikipedia.org/w/index.php?title=Main_Page&action=edit", your program should print the following:

    title: "Main_Page"
    action: "edit"

Given "http://en.wikipedia.org/w/index.php?title= hello world!&action=é", your program should print the following:

    The given URL is invalid

(To help, the last example is considered invalid because space-characters and unicode characters are not valid URL characters)