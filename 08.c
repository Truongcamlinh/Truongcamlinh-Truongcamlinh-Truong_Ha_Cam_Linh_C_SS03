#include <stdio.h>

int main()
{
    int num, result = 0;
    printf("Moi ban nhap so co 4 chu so: ");
    scanf("%d", &num);

    int tmp = num;
    result += num % 10;
    result = result * 10 + (num / 10) % 10;
    result = result * 10 + (num / 100) % 10;
    result = result * 10 + (num / 1000);
    printf("So nghich dao cua so %d la: %d", tmp, result);
}