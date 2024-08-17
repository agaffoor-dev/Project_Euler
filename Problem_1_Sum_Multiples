#include <iostream>
#include <vector>
#include <string>
#include <array>
#include <algorithm>

int main()
{
  std::vector<int> numbers = {};
  int n {0};
  while (n * 3 < 1000)
  {
    numbers.push_back(n*3);
    ++n;
  }
  n = 0;
  while (n * 5 < 1000)
  {
    numbers.push_back(n*5);
    ++n;
  }
  std::sort(numbers.begin(), numbers.end());
  numbers.erase( unique( numbers.begin(), numbers.end() ), numbers.end() );
  int sum = 0;
  for (std::vector<int>::size_type x = 0; x < numbers.size(); x++)
  {
    sum += numbers[x];
  }
  std::cout << sum << std::endl;
}
