def reverse(number):
    result = 0
    while number > 0:
        result = result * 10 + (number % 10)
        number //= 10
    return result

A, B = map(int, input().split())
A = reverse(A)
B = reverse(B)
C = A + B
print(reverse(C))