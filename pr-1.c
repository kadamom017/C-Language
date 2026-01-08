#include<stdio.h>
#include<conio.h>

int main(){
    float Cel , Fer = 0;
    printf("Enter Temp in Celsius C:");
    scanf("%f",&Cel);
    Fer = (9 * Cel)/5+32;
    printf("Temp in Fahrenheit is:%f ",Fer);
    return 0;
}