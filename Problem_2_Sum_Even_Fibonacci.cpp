#include <iostream>
int main()
{
  int max {0};
  std::cout << "What is the upper bound of the even fibonacci numbers for which you require the sum? ";
  std::cin >> max;
  int i = 0;
  int j = 1;
  int k = i + j;
  int sum = 0;
//  std::cout << i << std::endl;
//  std::cout << j << std::endl;
//  std::cout << k << std::endl;
  while (k < max)
  {
    if(k%2 == 0)
    {
      sum += k;
    }
    k = i + j;
    i = j;
    j = k;
  }
  std::cout << sum << std::endl;
//  std::cout << sum << std::endl;
  return 0;
}

// 0 1 1 2 3 5 8 13 21 34 55 89

/*
void countDown(int count)
{
  std::cout << count << '\n';
  if (count > 1)
    countDown(count-1);
}

int main()
{
  int number;
  std::cout << "Countdown from which number? ";
  std::cin >> number;
  countDown(number);
  return 0;
}
*/

