#include<stdio.h>

float calculationDiscount(int billAmount){

   if (billAmount > 500 ){
        return billAmount * 0.10;
    }
    return 0;
}    

int main(){
    int bill;
    float discount, finalAmount;

    printf("Enter the billAmount:");
    scanf("%d",&bill);

    discount = calculationDiscount(bill);
    finalAmount = bill - discount;

    printf("finalAmount : %f\n", finalAmount);
     
    return 0;
}