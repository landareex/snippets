#include <stdio.h>

void fizzybuzz(int x)
{
  int fizz{3};
  int buzz{5};
  if (x%fizz==0 && x%buzz==0)
    {
      printf ("%s\n","FizzBuzz");
    }
  else if (x%fizz==0)
    {
      printf ("%s\n", "Fizz");
    }
  else if (x%buzz==0)
    {
      printf ("%s\n", "Buzz");
    }
  else
    {
      printf ("%i \n", x);
    }
}

int main()
{
  int x{0};
  do
    {
      x = x+1;
      fizzybuzz(x);
    }
  while (x < 100);
  return 0;
}
