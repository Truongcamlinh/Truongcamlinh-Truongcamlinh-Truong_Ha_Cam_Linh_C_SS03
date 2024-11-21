#include <stdio.h>

int main()
{
    float scoreMath, scoreLiterature, scoreEnglish;
    printf("Nhap diem toan: ");
    scanf("%f", &scoreMath);
    printf("Nhap diem van: ");
    scanf("%f", &scoreLiterature);
    printf("Nhap diem anh: ");
    scanf("%f", &scoreEnglish);
    float sum = scoreMath + scoreLiterature + scoreEnglish, average = sum / 3;
    printf("Tong diem: %.2f \nDiem trung binh: %.2f", sum, average);
}