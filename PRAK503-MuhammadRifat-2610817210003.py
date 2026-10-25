def maximum(a, b):
    return a if a > b else b

def minimum(a, b):
    return a if a < b else b

# Membaca token input pertama
tokens = []
while not tokens:
    tokens = input().split()

total_numbers = int(tokens[0])
numbers = [int(x) for x in tokens[1:]]

# Jika angka belum cukup, baca baris berikutnya
while len(numbers) < total_numbers:
    for x in input().split():
        numbers.append(int(x))

limit = 0
max_val = -100000
min_val = 100000

# Mengolah nilai menggunakan fungsi maximum dan minimum
while limit < total_numbers:
    value = numbers[limit]
    max_val = maximum(max_val, value)
    min_val = minimum(min_val, value)
    limit += 1

print(f"{max_val} {min_val}")