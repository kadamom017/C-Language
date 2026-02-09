#include<stdio.h>

int main() {

    int r,c;

    printf("Enter the row size of array: ");
    scanf("%d",&r);

    printf("Enter the column size of array: ");
    scanf("%d",&c);

    int a[r][c];

    printf("\nEnter array's elements:\n");
    for(int i = 0; i < r; i++)
    {
       for(int j = 0; j < r; j++)
       {
            printf("a[%d][%d] = ", i, j);
            scanf("%d",a[i][j]);
       } 
    }

    int max = a[0][0];

     for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < r; j++)
        {
            if(a[i][j] > max)
            {
                max = a[i][j];
            }
        }
    }   

     printf("\nThe largest element is: %d\n", max);
     
}