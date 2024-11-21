#include <stdio.h>
const float pi = 3.14;

int main()
{
    float radius;
    printf("Moi ban nhap ban kinh cua hinh tron: ");
    scanf("%f", &radius);

    float perimeter = 2 * pi * radius, area = pi * radius * radius;
    printf("Chu vi cua hinh tron: %.2f \nDien tich cua hinh tron: %.2f", perimeter, area);
}