# 21 - 07 - 2026
# input strings of words
# output same strings but words with 5 or more letters reversed

def spin_words(sentence) -> str:
    '''
    make an arrays of words from the sentence
    for each word, see if it is 5 or more letter long
        if yes, reverse then add to the result string
        if no, add to the result string
    '''
    arr = sentence.strip().split(" ")
    result: str = ""
    for i in range(0, len(arr)):
        if (len(arr[i]) >= 5): 
            word = reversed(list(arr[i]))
            result += "".join(word)
        else: result += arr[i]
        if (i != len(sentence) - 1):
            result += " "
    return result.strip()

def better_spin_words(sen) -> str:
    result = [x[::-1] if len(x) >= 5 else x for x in sen.split()]
    return " ".join(result)

sen = "Hey fellow warriors"
res = spin_words(sen)
res1 = better_spin_words(sen)

print(res1)

