#include<stdio.h>

void makecoffee(int sugar){

    printf("Coffee is ready with %d with spoons of sugar\n",sugar );
}

int main(){
    int sugar;
    printf("Enter the no of sugar spoons: ");
    scanf("%d",&sugar);
    makecoffee(sugar);
    return 0;
}
