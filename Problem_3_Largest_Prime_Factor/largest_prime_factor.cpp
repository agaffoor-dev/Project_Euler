#include <iostream>

bool isprime(long x)
{
  if(x < 2) return false;
  if(x == 2) return true;
  if(x % 2 == 0) return false;
  for(long i = 3; (i*i)<=x; i+=2)
  {
    if(x % i == 0) return false;
  }
  return true;
}


int main()
{
  long number = 600851475143;
  for(long i = 2; i < number; i++)
  {
    if(number%i == 0)
    {
      if (isprime(number/i) == 1)
      {
	std::cout << number/i << std::endl;
	break;
      }
    }
  }
}










/*

lets first start out small. For instance, find the largest prime factor of 50.

First check if it is divisible by 2.
  If divisible by 2
    Check if 50/2 is a prime number,
      If not, proceed to next number for which you check divisibility (3)

This is because factor rainbow. 

*/
