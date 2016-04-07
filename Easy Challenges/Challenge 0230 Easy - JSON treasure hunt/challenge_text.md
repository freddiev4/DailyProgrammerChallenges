#Description

One of the most common ways for computers to communicate with each other today, especially over the internet, is a format known as JSON. JSON stands for JavaScript Object Notation and has it's origins in JavaScript, but nowadays libraries exist to parse it in pretty much every language in common use. JSON is a pretty great tool for this, because it is very compact and easily parsable, yet it's also very easy for humans to read and write. 

There are 6 different fundamental types in JSON:

 * `null`, which usually signifies the absense of a value
 * A number, like `3`, `4`, `5` or `2.718281828` (JSON makes no distinction between integers and floats)
 * A boolean, either `true` or `false`
 * A string, some number of characters between quotation marks: `"hello world"`, for instance
 * A list, which is an ordered list of JSON values: `[1, 3.14, [null, "popsicle"], false]` for instance. 
 * An "object", which is an unordered list of key-value pairs. The keys are always strings, and the values can be any JSON object: `{"key1": [1,2,3], "key2": {"nestedKey": 14}}`, for instance. 

In strict JSON, the "root" is always an object. Here's a JSON document for demonstration: 

    {
        "name": "William Shakespeare",
        "birthYear" : 1564,
        "dead" : true,
        "deathYear" : 1616,
        "selectedWorks" : [
            {
                "name" : "The Tragedy of Macbeth",
                "written" : 1606,
                "isItAwesome" : true
            },
            {
                "name" : "Coriolanus",
                "written" : 1608,
                "isItAwesome" : "It's alright, but kinda fascist-y"
            }
        ],
        "wife" : {
            "name" : "Anne Hathaway",
            "birthYear" : 1555,
            "dead" : false,
            "deathYear" : "Fun fact, she's a vampire"
        },
        "favoriteWebsites" : [
            "dailysonneter",
            "dailyprogrammer",
            "vine (he's way into 6-second cat videos)"
        ],
        "facebookProfile" : null
    }

Note that this JSON document has been pretty-printed, which means that a bunch of spaces and indentation has been added in to make it look nicer, but they make no difference. Whitespace that is outside a string has no meaning in JSON.

If you wish to find the name of the first play in the list of selected works, you could say that the "path" to it looks something like this: 

    selectedWorks -> 0 -> name

You would say that the value located at this path is `"The Tragedy of Macbeth"`. The value "dailyprogrammer" is located at:

    favoriteWebsites -> 1

Notice that JSON lists are zero-based, so the first item in the list has index 0.

Your challenge today is as follows: you will be given a JSON object, and you will print out the search path that leads to the value "dailyprogrammer". You are allowed to use any JSON parsing libraries that you want to, today's challenge is not about parsing JSON, it's about finding a key hidden in a JSON object. If you wish to write a parser yourself, you are of course allowed to do so (though I personally think that would be a little nuts), but you are absolutely not required to do so in any way. 

#Formal inputs &amp; outputs

##Inputs
The input will be a JSON document which contains the string "dailyprogrammer" somewhere as a value. The JSON document is guaranteed to be valid and use no non-ASCII characters. 

##Outputs
The search-path for the string "dailyprogrammer", in the format described above. Each "element" of the path will either be an integer (if it's indexing a list) or a string (if it's indexing an object). The elements should be joined together with " -> " between them.

#Sample inputs &amp; outputs

##Input 1

    {"name": "William Shakespeare", "wife": {"birthYear": 1555, "deathYear": 
    "Fun fact, she's a vampire", "name": "Anne Hathaway", "dead": false}, 
    "favoriteWebsites": ["dailysonneter", "dailyprogrammer", 
    "vine (he's way into 6-second cat videos)"], "dead": true, "birthYear": 1564, 
    "facebookProfile": null, "selectedWorks": [{"written": 1606, "name": 
    "The Tragedy of Macbeth", "isItAwesome": true}, {"written": 1608, "name": 
    "Coriolanus", "isItAwesome": "It's alright, but kinda fascist-y"}], "deathYear":
     1616}

##Output 1

    favoriteWebsites -> 1

##Input 2

    {"dlpgcack": false, "indwqahe": null, "caki": {"vvczskh": null, "tczqyzn": 
    false, "qymizftua": "jfx", "cyd": {"qembsejm": [null, "dailyprogrammer", null], 
    "qtcgujuki": 79, "ptlwe": "lrvogzcpw", "jivdwnqi": null, "nzjlfax": "xaiuf", 
    "cqajfbn": true}, "kbttv": "dapsvkdnxm", "gcfv": 43.25503357696589}, "cfqnknrm": 
    null, "dtqx": "psuyc", "zkhreog": [null, {"txrhgu": false, "qkhe": false, 
    "oqlzgmtmx": "xndcy", "khuwjmktox": 48, "yoe": true, "xode": "hzxfgvw", 
    "cgsciipn": 20.075297532268902}, "hducqtvon", false, [null, 76.8463226047357, 
    "qctvnvo", null], [null, {"nlp": false, "xebvtnvwbb": null, "uhfikxc": null, 
    "eekejwjbe": false, "jmrkaqky": null, "oeyystp": false}, [null, 10, "nyzfhaps", 
    71, null], 40, null, 13.737832677566875], [true, 80, 20, {"weynlgnfro":
    40.25989193717965, "ggsirrt": 17, "ztvbcpsba": 12, "mljfh": false, "lihndukg": 
    "bzebyljg", "pllpche": null}, null, [true, false, 52.532666161803895, "mkmqrhg",
     "kgdqstfn", null, "szse"], null, {"qkhfufrgac": "vpmiicarn", "hguztz": 
     "ocbmzpzon", "wprnlua": null}], {"drnj": [null, false], "jkjzvjuiw": false, 
     "oupsmgjd": false, "kcwjy": null}]}

##Output 2

    caki -> cyd -> qembsejm -> 1

#Challenge inputs

##Input 1

[This input](https://gist.githubusercontent.com/anonymous/8f35cc4fbbccf6d3f59f/raw/1f9786fc2fec9a7afa20cdd70d2d8afb7d3aecb9/challenge1.txt) (about 24 kilobytes)

##Input 2

[This input](https://gist.githubusercontent.com/anonymous/b7733192c0d1004a084b/raw/b5f8df53469410c634034c12d99bbb8ccc46f102/challenge2.txt) (about 6.5 megabytes)

#Notes

Thanks to /u/G33kDude for suggesting a similar challenge dealing with JSON. He's been awarded with a silver medal for his good deeds.

If you have an idea for a challenge, head on over to /r/dailyprogrammer_ideas and suggest it! If it's a good challenge, we might use it!
