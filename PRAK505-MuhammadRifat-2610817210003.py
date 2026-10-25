def Biodata(birthYear, name, origin):
    current_Year = 2020
    age = current_Year - birthYear
    print(f"Perkenalkan Nama Saya: {name}")
    print(f"Umur Saya: {age}")
    print(f"Saya Adalah Angkatan : {current_Year}")
    print(f"Asal Saya dari : {origin}")

birthYear = int(input())
name = input().strip()
origin = input().strip()

Biodata(birthYear, name, origin)