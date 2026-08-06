
def valid_braces(braces:str):
    b = []
    for c in braces:
        if len(b) == 0: b.append(c)
        else:
            for bb in b:
                if is_match(c, bb):
                    b.remove(bb)
                    break
    if len(b) == 0: return True
    return False
                        

def is_match(b1, b2):
    if b1 == '{' and b2 == '}':
        return True
    elif b1 == '(' and b2 == ')':
        return True
    elif b1 == '[' and b2 == ']':
        return True
    return False

def main():
    print(valid_braces("{[()]}"))

main()
