

def solution(arr:list[int]) -> bool:
    # return true if the number of occurences of each value is unique
    # i.e 1,2,3 each has a unique instances of appearance in an array
    count = {}

    for num in arr: # initiate the hashtable to count the number of appearances
        if (count.get(num) == None):
            count[num] = 1
            continue
        count[num] += 1

    count_values = list(count.values())

    unique: set = {count_values[0]}
    for i in range(1, len(count_values)):
        curr = len(unique)
        unique.add(count_values[i])
        if (len(unique) == curr):
            return False

    return True


arr = [1,2,3,2,2,3,3]
print(solution(arr))
