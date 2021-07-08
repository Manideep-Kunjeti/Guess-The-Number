#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num,i,guess;
    char name[30];

    printf("Hi there, Enter your name please:");
    gets(name);
    printf("\n");
    printf("Hello %s, You have an intesting game to play\n",name);

    srand(time(NULL));
    num=rand()%1000;

    printf("I have assumed a number between 0 and 1000\n");

    for(i=0;num!=guess;i++)
    {
        printf("\nEnter the number:\t");
        scanf("%d",&guess);

        if(guess==num)
        {
            printf("\nYou guessed it correct\n");
        }
        else if(guess>num)
            printf("lower number please\n");
        else
            printf("higher number please\n");
    }
    
    if(i<=5)
    {
        printf("%s, You did a Marvellous job\n",name);
        printf("You have used %d guesses\n",i);
    }
    else if(i>5 && i<=10)
    {
        printf("%s, You did an Excellent job\n",name);
        printf("You have used %d guesses\n",i);
    }
    else if(i>10 && i<=20)
    {
        printf("%s, You did a Good job\n",name);if(i<=5);
        printf("You have used %d guesses\n",i);
    }
    else if(i>20 && i<=40)
    {
        printf("%s, You could have made it better\n",name);
        printf("You have used %d guesses\n",i);
    }
    else if(i>40)
    {
        printf("%s, That wasn't a Great guess\n",name);
        printf("You have used %d guesses\n",i);
    }
    return 0;

}