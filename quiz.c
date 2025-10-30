#include <stdio.h>
int main()
{
    int answer;
    int score = 0;
    printf("Question 1: What is the capital of India?\n");
    printf("1.Mumbai\n");
    printf("2.New Delhi\n");
    printf("3.Kolkata\n");
    printf("4.chennai\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &answer);
    if (answer == 2)
    {
        printf("Correct!\n");
        score = score + 1;
    }
    else
    {

        score = score - 1;
    }
    printf("Question 2: How many states are there in India?\n");
    printf("1.28\n");
    printf("2.24\n");
    printf("3.29\n");
    printf("4.30\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &answer);
    if(answer == 1)
    {
        printf("Correct!\n");
        score = score + 1;
    }
    else
    {
        printf("Wrong,the correct answer is 28\n");
        score = score + 1;
    }
    printf("\n Final Score: %d\n",score);
    return 0;
    }


