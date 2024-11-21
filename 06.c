#include <stdio.h>

int main()
{
    float base, height, area;
    printf("Nhap do dai canh day: ");
    scanf("%f", &base);
    printf("Nhap do dai chieu cao: ");
    scanf("%f", &height);
    area = 0.5 * base * height;
    printf("%.2f", area);
}