#include <vector>
#include <iostream>

int main()
{
  int n = 0;
  std::cout << "What number would you like to check? " << std::endl;
  std::cin >> n;
  std::vector<int> factors;
  for (int i = 1; i < n; i++)
  {
    if (n%i == 0)
    {
      factors.push_back(i);
    }
  }
  if (factors.size() > 1)
  {
    std::cout << "This number is a composite" << std::endl;
  }
  else
  {
    std::cout << "This number is a prime" << std::endl;
  }
  return 0;
}

//  std::vector<int> v;
//  v.push_back(2);
//  std::cout << v[0] << std::endl;
