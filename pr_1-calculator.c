#include<stdio.h>
#include<conio.h>

int main(){
    float height,breath, area = 0;
    printf("Enter the Value of h:");
    scanf("&f",&height);
    printf("Enter the Value of b:");
    scanf("&f",&breath);
    area = height * breath / 2;
    printf("Area of Triangle is:%f",area);
    return 0;
}