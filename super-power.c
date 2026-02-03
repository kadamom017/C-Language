#include<stdio.h>

void superPower(int level){

    if (level == 10)
    {
    printf("Emergency! Flying Mode ON!." );
    }

  else if (level < 10)
  {
    printf("Energy too low for flight.");
  }

   else 
  {
    printf(" Invalid Energy.");
  }
}
int main(){
 int level;
    printf("Enter the energy level: ");
    scanf("%d",&level);
    superPower(level);

    return 0;
    }
