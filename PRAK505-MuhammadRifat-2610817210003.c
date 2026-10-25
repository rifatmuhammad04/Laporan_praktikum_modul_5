#include <stdio.h>

void Biodata(int birth_Year, char name[20], char origin[15]) {
    int current_Year = 2020;
    int age = current_Year - birth_Year;
    printf("Perkenalkan Nama Saya: %s\n", name);
    printf("Umur Saya: %d\n", age);
    printf("Saya Adalah Angkatan : %d\n", current_Year);
    printf("Asal Saya dari : %s\n", origin);
}

int main() {
    int birth_year;
    char name[20], origin[15];
    scanf("%d", &birth_year);
    scanf(" %[^\n]%*c", name);
    scanf(" %[^\n]%*c", origin);
    Biodata(birth_year, name, origin);
    return 0;
}