#include <cs50.h>
#include <stdio.h>

bool isPrime(int);
int sumPrimes(int);

int main(void)
{
    int input = get_int("Enter a number: ");
    //eprintf("I got %i\n", input);
    printf("%i\n", sumPrimes(input));
}

bool isPrime(int num)
{
        for (int i = 2, max = num / 2; i <= max; i++)
        {
            if (num % i == 0)
            {
            return false;
            }
        }
        return true;
}

int sumPrimes(int num)
{
    int sum = 2;
    for (int i = 3; i <= num; i+= 2) //count odd numbers since the even ones are not going to be prime //only check odd numbers
    {
        if (isPrime(i))
        {
            sum += i;
        }
    }
    return sum;
}



/*
//FIND PRIME NUMBERS
//TEST IF ITS PRIME
CHECK NUMBER DIVIDED BY 2
CHECK NUMBER/2 ... NUMBER/NUMBER-1


*/