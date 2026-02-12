#include<stdio.h>

int main(){

    char str[100];
    int i , length, palin;

    printf("Input: Enter any String: ");
    scanf("%s", str);

    length = 0;
    while(str[length] != '\0')
    {
        length++;
    }

    palin = 1;

    for(i = 0; i < length/2; i++)
    {
        if(str[i] != str[length-1-i])
        {
            palin = 0;

            break;
        }
    }        

    if(palin == 1)
    {
       printf("The given thing is a palindrome.\n");  
    }
    else
    {
        printf("The given thing is not a palindrome.\n");  
    }
    

    return 0;
}