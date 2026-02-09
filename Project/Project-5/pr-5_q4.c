#include <stdio.h>

int main() {
    int r, c;

    printf("Enter the array's row size: ");
    scanf("%d", &r);

    printf("Enter the array's column size: ");
    scanf("%d", &c);

    int a[r][c];

    printf("\nEnter array's elements:\n");
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    int row, col, sum = 0;

    printf("\nEnter row number: ");
    scanf("%d", &row);

    printf("Elements of row %d: ", row);
    for(int j = 0; j < c; j++) 
    {
        printf("%d ", a[row][j]);
        sum += a[row][j];
    }
    printf("\nThe sum of row %d: %d\n", row, sum);

    sum = 0;

    printf("\nEnter column number: ");
    scanf("%d", &col);

    printf("Elements of column %d: ", col);
    for(int i = 0; i < r; i++) 
    {
        printf("%d ", a[i][col]);
        sum += a[i][col];
    }
    printf("\nThe sum of column %d: %d\n", col, sum);

    return 0;
}
