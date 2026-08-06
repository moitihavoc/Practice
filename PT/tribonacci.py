# tribonacci numbers are just fibonacci numbers but add 3 instead of 2 previous numbers are added to make the next one
# base case: n = 0, n = 1 -> tri(n) = n, but tri(2) = 1

def tribonacci(n):
    if n == 0 or n == 1: return n
    if n == 2: return 1

    return tribonacci(n - 1) + tribonacci(n - 2) + tribonacci(n-3)

print(tribonacci(4))

print()

def tribonacciIte(n):
    if n == 0 or n == 1: return n
    if n == 2: return 1

    first = 0
    second = 1
    third = 1

    for i in range(0, n):
        fourth = first + second + third

        first = second
        second = third
        third = fourth

    return first

print(tribonacciIte(4))
