def absolute(number):
    if number < 0:
        return -number
    return number

def calculate(val1, val2):
    return absolute(val1 - val2)

data = list(map(int, input().split()))
a, c, b, d = data[0], data[1], data[2], data[3]

Result = calculate(a, b) + calculate(c, d)
print(absolute(Result))