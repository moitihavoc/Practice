import random

def perfect_root():
    t: int = int(input())
    arr = []
    for _ in range(t):
        n: int = int(input())
        per = [random.randint(1, 10**9) for _ in range(n)]
        arr.append(per)

    for p in arr:
        print(*p)

if __name__ == "__main__":
    perfect_root()

