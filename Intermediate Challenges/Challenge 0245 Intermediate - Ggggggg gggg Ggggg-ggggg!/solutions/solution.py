from random import choice

def decode_Ggg(keys, text):
    keys_words = dict(zip(keys.split()[1::2], keys.split()[0::2]))
    text_decrypt = ""
    s = ""
    for c in text:
        if c == "g" or c == "G":
            s += c
        else:
            text_decrypt += c
        
        if s in keys_words.keys():
            text_decrypt += keys_words[s]
            s = ""
    return text_decrypt


def encode_Ggg(text):
    keys = list()
    keys_words = dict()
    text_encrypt = ""
    aKey = ""
    i = 0
    words = set([c for c in text if c.isalpha()])
    
    while i < len(words):
        akey = "".join(choice("Gg") for _ in range(3))
        
        if akey not in keys:
            keys.insert(i, akey)
            i+=1
    
    keys_words = dict(zip(words, keys))
   
    for c in text:
        if c.isalpha():
            text_encrypt += keys_words[c]
        else:
            text_encrypt += c
    keys = ' '.join('{}{}'.format(key+" ", val) for key, val in keys_words.items())
    
    return keys, text_encrypt

print(decode_Ggg("H GgG d gGg e ggG l GGg o gGG r Ggg w ggg",
                 "GgGggGGGgGGggGG, ggggGGGggGGggGg!"))
print(encode_Ggg("Hello, World!"))

    


