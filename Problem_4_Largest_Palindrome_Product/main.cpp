#include <iostream>
#include <vector>

bool palindrome_check(std::vector<int> data)
{
  for(unsigned int n {0}; n < data.size(); n++)
  {
    if((data[n] == data[data.size()-(n+1)]) == 0) return false;
  }
  return true;
}



int main()
{
//  std::vector<int> data = {9, 1, 0, 0, 1, 9};
//  std::cout << palindrome_check(data) << std::endl;
  make_vector(97179);
  return 0;
}
