# 2 strings are close if i can obtain one from another using these operations:
# swap 2 letters
# turn instances of a letter into another existing letter in a string
# do the operations as many times as required.

from collections import Counter

def closeString(word1: str, word2: str) -> bool:
    if len(word1) != len(word2): return False

    dict1 = {}
    dict2 = {}
    
    for i in range(len(word1)):
        if dict1.get(word1[i]) == None:
            dict1[word1[i]] = 1
        else: dict1[word1[i]] += 1

        if dict2.get(word2[i]) == None:
            dict2[word2[i]] = 1
        else: dict2[word2[i]] += 1
    
    sval1 = sorted(list(dict1.values()))
    sval2 = sorted(list(dict2.values()))

#    sword1 = sorted(list(dict1.keys()))
#    sword2 = sorted(list(dict2.keys()))

    sword1 = dict1.keys()
    sword2 = dict2.keys()

    if sval1 != sval2 or sword1 != sword2: return False

    return True


w1 = "abbzzca"
w2 = "babzzcz"

print(closeString(w1,w2))

def betterSol(word1: str, word2: str) -> bool:
    if len(word1) != len(word2): return False

    count1 = Counter(word1) #returns a dict of chars and their nums of instances
    count2 = Counter(word2)

    if set(count1) != set(count2) or sorted(list(count1.values())) != sorted(list(count2.values())): return False
    return True
