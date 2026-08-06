# ep 2 of dynamic programming
# use recursion to calculate nth fib number

def fibRec(n):
    '''
    base case: n = 0, 1
    recursive: fib(n) = fib(n-1) + fib(n-2)
    iterative: tracking first = 0, second = 1, third = first + second
    '''
    if n == 0 or n == 1: return n
    return fibRec(n - 1) + fibRec(n - 2)

def fibIte(n):
    '''
    this method is more time efficient
    '''
    if n == 0 or n == 1: return n    

    first = 0
    second = 1 

    for i in range(0, n):
        third = first + second
        first = second
        second = third

    return first


fib = fibRec(2)

fib2 = fibIte(5)

print(fib)

print(fib2)




