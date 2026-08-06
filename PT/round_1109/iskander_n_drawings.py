import math
def longest_draw(page: str) -> int:
    '''
    input: a string made of # and *; # =1cm line, * = empty space
    yura and iskan erases the lines from both side, each takes 1s to erase a 1cm segment
    output: the longest time taken to erase a line
    '''
    lines = page.split("*")
    max_time = 0
    for l in lines:
        # check which line uses max time
        time = math.ceil(len(l)/2)
        if time > max_time:
            max_time = time
    return max_time

def main():
    t:int = int(input()) # the number of test cases

    for i in range(0,t):
        n:int = int(input()) # the length of page s 
        try:
            page = input() # input page content
            assert len(page) == n, "inappropriate length"
            print(longest_draw(page))
        except AssertionError as e:
            print(e)

if __name__ == "__main__":
    main()
