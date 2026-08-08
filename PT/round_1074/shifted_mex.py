import math
'''

given an array and int x
for every number in array, plus x
then find the MEX, for the minimum absent non negative integer
the max mex is required

find the longest consecutive number series in the array.
set x = -1 * the min in the series
do the rest as guided
'''




def mex_max(arr: list) -> int:
    # find the smallest non-negative number
    s = set(arr) 
    ans = 0

    for x in s:
        if x-1 not in s: # check if x is the start of a sequence
            length = 1

            while x + length in s:
                length += 1

            ans = max(ans, length)
    
    return ans

def main():
    t:int = int(input())
    for _ in range(t):
        l:int = int(input())
        try:
            arr = list(map(int, input().split()))
            assert len(arr) == l, "invalid input"
            m = mex_max(arr)
            print(m)
        except AssertionError as e:
            print(e)

if __name__ == "__main__":
    main()
        
