#include <stdio.h>
#include <math.h>
#include <cs50.h>
#include <stdlib.h>

int main(int argC, string argV[])
{
  if (argC != 2)
  {
    printf("Enter an interger... you dummy\n");
    return 1;
  }
  else
  {
    int num = atoi(argV[1]);
    int evenNumberEqualizer = 2;
    int i;
    printf("%i\n", num);
    int total = 2;

    if (num % evenNumberEqualizer == 0) //check if the number is even
    {
        printf("Sum these primes... %i\n", num);
        for (i = 3; i <= num; i++)///FIX THIS
        {
            printf("What up: %d\n", (total += i));////FIX THIS
        }
    }
    else
    {
        printf("This is not an even number!\n");
        return(1);
    }
    printf("The total: %d\n", total);
  }
}



/*
function sumPrimes(num) {
  var total = 2;
  for (var n = 3; n <= num; n++) {
      total += n;
  }
  return total;
}
*/


//FUNCTION DECLARATIONS ARE NOT ALLOWED INSIDE A FUNCTION








/*

function isPrime(num) {
  for (var n = 2; n < num; n++) {
    if (num % n === 0) {
      return false;
    }
  }
  return true;
}

function sumPrimes(num) {
  var total = 2;
  for (var n = 3; n <= num; n++) {
    if (isPrime(n)) {
      total += n;
    }
  }
  return total;
}

*/