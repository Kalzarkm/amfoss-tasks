#include <stdio.h>
#include "cs50.h"

int main()
{
    int n;

    do
    {
        n=get_int("Height: ");
    }
    while (n<1);

    for(int i=0;i<n+1;i++)
    {
        for(int k=n-i;k>0;k--)
        {
        printf(" ");
        }
        for(int j=0;j<i;j++)
        {
            printf("#");
        }
        printf("  ");
         for(int j=0;j<i;j++)
        {
            printf("#");
        }
        printf("\n");
    }

}

