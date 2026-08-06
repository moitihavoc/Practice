import math

def make_neat(row:list[int]):
    '''
    rule: by repeating an arbitrary number of times, yura can choose 1 of the middle stacks, and move 1 book to the next stack.
    neat: a row is neat if the stacks' lengths ascend from left to right
    input: a row of stacks whose length is in int
    output: "yes" if yura can make the row neat abiding by the rule, otherwise,"no"
    '''
    
    # check for necessary and sufficient condition 
    i = len(row)
    min_sum = (i*(i+1))/2
    if sum(row) < min_sum: return "no"
    
    cur = 0

    for j in range(0, i):
        cur += row[j]
        n = j + 1
        need = (n*(n+1))/2
        if (cur < need): return "no"
    return "yes"



def main():
    t = int(input())

    for i in range(0, t):
        n = int(input())
        try:
            row = [int(x) for x in input().split(" ")]
            assert len(row) == n, "inappropriate length"
            print(make_neat(row))
        except AssertionError as e:
            print(e)

if __name__ == "__main__":
    main()
