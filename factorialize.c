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
    long long i;
    printf("%i\n", num);

    for (i = 1; num >= 1; num--)
    {
        i = num * i;
    }
    printf("Number: %lld\n", i);

  }



}
/*

function factorialize(num) {
  for (i = 1; num >= 1; num--){
    i = num * i;
  }
  return i;
}

factorialize(5);


*/