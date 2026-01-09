#include<stdio.h>
#include<conio.h>

int main(){
    float a1, a2, a3 = 0;
    printf("Enter the First Angle:");
    scanf("&f",&a1);
    printf("Enter the Second Angle:");
    scanf("&f",&a2);
    a3 = 180 - a1 - a2;
    printf("The third angle of the triangle is:%f",a3);
    return 0;
}