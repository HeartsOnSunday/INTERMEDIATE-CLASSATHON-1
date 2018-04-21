#include <stdio.h>
#include <math.h>
#include <cs50.h>
#include <stdlib.h>

int main(int argC, string argV[])
{
    if (argC != 3)
    {
        printf("Enter two strings\n");
        return 1;
    } else {
        printf("%s\n", argV[1]);
        printf("%s\n", argV[2]);
        return argC;
    }
}