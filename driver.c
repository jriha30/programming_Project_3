#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// enter the input string "jokerbaby I owe you $2000"


int main(int argv, char** argc)
{
    char B[10];
    char s1[16] = "I owe you $1000";
    char s2[16] = "I don't know you";

    printf("what's your name? ");
    gets(B);
    for(int i = 0; i < 10; i++)
    {
        if(B[i] == 'j' && B[i + 1] == 'o' && B[i + 2] == 'k' && B[i + 3] == 'e' && B[i + 4] == 'r')
        {
            printf(s1);
            return;
        }
    }
    printf(s2);
}