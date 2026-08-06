# array value = sum of the max of each prefix

def max_prefix():
    t:int = int(input())
    for _ in range(t):
        try:
            n:int = int(input())
            assert 2 <= n <= 50, "invalid input"
            arr = list(map(int, input().split()))
            assert len(arr) == n, "invalid array"

            # swap the first index with the max element's index so that we maximize the sum
            ms = max(arr)
            idx = arr.index(ms)
            if idx != 0: arr[0], arr[idx] = arr[idx], arr[0]
            tot = 0
            m_a = []
            for num in arr:
                m_a.append(num)
                m = max(m_a)
                tot += m
            print(tot)

        except AssertionError as e:
            print(e)
if __name__ == "__main__":
    max_prefix()
