#include<stdio.h>
#include<conio.h>

int main(){
    int score;
    char grade;

    printf("Enter your score:");
    scanf("%d", &score);

    if(score >= 90)
        grade = 'A';
    else if (score >= 80)
        grade = 'B';
    else if (score >= 70)
        grade = 'C';
    else if (score >= 60)
        grade = 'D';
    else 
        grade = 'F';
            
    printf("Your grade is %c.\n", grade);
 
    switch (grade)
    {
    case 'A':
        printf("Outstanding\n");
        break;
    
    case 'B':
        printf("Excellent\n");
        break;
    case 'C':
        printf("Good\n");
        break;    
    case 'D':
        printf("Just Pass!\n");
        break;    
    case 'F':
        printf("Needs Improvement!\n");
        break;    

}
    if (grade != 'F')   
    printf("You are for Certificate\n.");

    else
    printf("Better Luck Next Time...\n");

    return 0;
}