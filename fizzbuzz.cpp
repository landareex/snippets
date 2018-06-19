#include <stdio.h>
#include <iostream>

std::string fizzybuzz(int x)
{
  int fizz{3};
  int buzz{5};
  std::string out{""};

  if (x%fizz==0)
    {
      out = out + "fizz";
    }

  if (x%buzz==0)
    {
      out = out + "buzz";
    }

  if (out=="")
    {
      printf ("%i",x);
    }

  return out;
}

int main()
{
  int x{0};
  do
    {
      x = x+1;
      std::cout << fizzybuzz(x) << std::endl;
    }
  while (x < 100);
  return 0;
}
