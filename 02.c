#include <stdio.h>

int main()
{
    float celsius;
    printf("Moi ban nhap nhiet do nhap nhiet do theo do C");
    scanf("%f", &celsius);
    float fahrenheit = celsius * 1.8 + 32;
    printf("%.2f do C = %.2f do F", celsius, fahrenheit);
}