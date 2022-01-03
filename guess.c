#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
        int P,Q;
        srand(time(NULL));
        P=(rand()%11)+100;
        printf("READY!!!\n");
        for(;;)
        {
            printf("Enter a number between 101 to 110\n");
            scanf("%d",&Q);
                if (P==Q)
                {
                   printf("BRAVO!!\n You gussesd right\n");
                   break;
                }
                else if (P>Q)
                {
                    printf("Guess a bit higher\n");
                }
                else 
                {
                    printf("Guess a bit lower\n");
                }
        }
}
