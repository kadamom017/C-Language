#include<stdio.h>

int main(){

    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
            printf("%d ", j);
        for (int l = 1; l <= 2 * (n - i); l++)
            printf("  ");
        for (int k = i; k >= 1; k--)
            printf("%d ", k);
        printf("\n");
    }
}
