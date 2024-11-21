#include <stdio.h>

int main()
{
    int num;
    printf("Nhap mot so co bon chu so: ");
    scanf("%d", &num);

    int sum = 0;
    sum += num / 1000;
    sum += (num / 100) % 10;
    sum += (num / 10) % 10;
    sum += num % 10;
    printf("Tong chu so: %d", sum);
}