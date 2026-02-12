#include<stdio.h>

float add(float x, float y)
{
    return x + y;
}

float subt(float x, float y)
{
    return x - y;
}

float multi(float x, float y)
{
    return x * y;
}

float div(float x, float y)
{
    return x / y;
}

float mod(int x, int y)
{
    return x % y;
}

int main(){

    int opt;
    float n1 , n2 , result;

    for (;;)
    {
        printf("\n--- Calculation Menu ---\n");
        printf("1. Addition (+)\n");
        printf("2. Subtract (-)\n");
        printf("3. Multiplication (*)\n");
        printf("4. Division (/)\n");
        printf("5. Modulus (%%)\n");
        printf(" Exit \n");
        printf("Enter Your Choice: ");
        scanf("%d , &opt");

        if (opt == 0)
        {
            printf("Exciting Program...\n");
            break;
        }

         if (opt < 1 || opt > 5)
        {
            printf("Invalid Choice! Try Again...\n");
            continue;
        }

        printf("Enter first number:");
        scanf("%f",&n1);

        printf("Enter second number:");
        scanf("%f",&n2);

        switch (opt)
        {
            case 1:
                result = add(n1,n2);
                if (result == (int)result)
                    printf("Result: %.0f + %.0f = %.0f\n", n1 , n2, result);
                else
                    printf("Result: %.2f + %.2f = %.2f\n", n1 , n2, result);
                break;

            case 2:
                result = subt(n1,n2);
                if (result == (int)result)
                    printf("Result: %.0f - %.0f = %.0f\n", n1 , n2, result);
                else
                    printf("Result: %.2f - %.2f = %.2f\n", n1 , n2, result);
                break;

            case 3:
                result = multi(n1,n2);
                if (result == (int)result)
                    printf("Result: %.0f * %.0f = %.0f\n", n1 , n2, result);
                else
                    printf("Result: %.2f * %.2f = %.2f\n", n1 , n2, result);
                break;

            case 4:
                if (n2 == 0)
                {
                    printf("Error: Division by zero!\n");

                }
                else
                {
                    result = div(n1,n2);
                if (result == (int)result)
                    printf("Result: %.0f / %.0f = %.0f\n", n1 , n2, result);
                else
                   printf("Result: %.2f / %.2f = %.2f\n", n1 , n2, result);
                    break;
                }    

            case 5:
                printf("Result: %d %% %d = %d\n", (int)n1 , (int)n2, mod((int)n1 , (int)n2));       
                break;

            default:
                printf("Invalid Choice!\n");   
                break;

        }
    }

}