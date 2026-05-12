#include "main.h"
#include <iostream>
#include <vector>

const int tea_party(const int tea, const int candy) {
  return (tea < 5 || candy < 5)                   ? 0
         : (tea >= candy * 2 || candy >= tea * 2) ? 2
                                                  : 1;
}

const std::string fizz_string(const std::string str) {
  int size = str.size();

  if (str[0] == 'f' && str[size - 1] == 'b')
    return "FizzBuzz";
  if (str[0] == 'f')
    return "Fizz";
  if (str[size - 1] == 'b')
    return "Buzz";

  return str;
}

const std::string fizz_string2(const int n) {
  if (n % 3 == 0 && n % 5 == 0)
    return "FizzBuzz!";
  if (n % 3 == 0)
    return "Fizz!";
  if (n % 5 == 0)
    return "Buzz!";

  return std::to_string(n) + "!";
}

const bool two_as_one(const int a, const int b, const int c) {
  return a + b == c || a + c == b || b + c == a;
}

const int sum67(std::vector<int> nums)
{
  int sum = 0;
  bool skip = false;

  std::vector<int>::iterator it;

  for (it = nums.begin(); it != nums.end(); it++)
  {
    if (*it == 6) skip = true;
    else if (*it == 7 && skip) skip = false;
    else if (!skip) sum += *it;
  }

  return sum;
}

const bool has22(const std::vector<int> nums)
{
  for (int i = 0; i < nums.size()-1; i++)
    if (nums.at(i) == 2 && nums.at(i+1) == 2)
      return true;
  return false;
}

const bool lucky13(const std::vector<int> nums)
{
  for (int i = 0; i < nums.size(); i++)
    if (nums.at(i) == 1 || nums.at(i) == 3)
      return false;

  return true;
}

const bool sum28(const std::vector<int> nums)
{
  int sum = 0;

  for (int i = 0; i < nums.size(); i++)
    if (nums.at(i) == 2)
      sum += nums.at(i);

  return sum == 8;
}

const bool more14(const std::vector<int> nums)
{
  int count = 0;

  for (int i = 0; i < nums.size(); i++)
  {
    if (nums.at(i) == 1) count++;
    if (nums.at(i) == 4) count--;
  }

  return count > 0;
}

const std::vector<int> fizz_array(const int n)
{
  std::vector<int> arr;

  for (int i = 0; i < n; i++)
    arr.push_back(i);

  return arr;
}

const bool only14(const std::vector<int> nums)
{
  for (int i = 0; i < nums.size(); i++)
    if (nums.at(i) != 1 && nums.at(i) != 4)
      return false;

  return true;
}

const std::vector<std::string> fizz_array2(const int n)
{
  std::vector<std::string> arr;

  for (int i = 0; i < n; i++)
    arr.push_back(std::to_string(i));

  return arr;
}

const bool no14(const std::vector<int> nums)
{
  bool has1 = false;
  bool has4 = false;

  for (int i = 0; i < nums.size(); i++)
  {
    if (nums.at(i) == 1) has1 = true;
    if (nums.at(i) == 4) has4 = true;
    if (has1 && has4) return false;
  }

  return !(has1 && has4);
}

#ifndef TESTING
int main() {
  std::cout << "\ntea_party:\n";
  std::cout << (tea_party(6, 8) == 1 ? "OK" : "FAILED") << std::endl;
  std::cout << (tea_party(3, 8) == 0 ? "OK" : "FAILED") << std::endl;
  std::cout << (tea_party(20, 6) == 2 ? "OK" : "FAILED") << std::endl;

  std::cout << "\nfizz_string:\n";
  std::cout << (fizz_string("fig") == "Fizz" ? "OK" : "FAILED") << std::endl;
  std::cout << (fizz_string("dib") == "Buzz" ? "OK" : "FAILED") << std::endl;
  std::cout << (fizz_string("fib") == "FizzBuzz" ? "OK" : "FAILED")
            << std::endl;

  std::cout << "\nfizz_string2:\n";
  std::cout << (fizz_string2(1) == "1!" ? "OK" : "FAILED") << std::endl;
  std::cout << (fizz_string2(2) == "2!" ? "OK" : "FAILED") << std::endl;
  std::cout << (fizz_string2(3) == "Fizz!" ? "OK" : "FAILED") << std::endl;

  std::cout << "\ntwo_as_one:\n";
  std::cout << (two_as_one(1, 2, 3) ? "OK" : "FAILED") << std::endl;
  std::cout << (two_as_one(3, 1, 2) ? "OK" : "FAILED") << std::endl;
  std::cout << (!two_as_one(3, 2, 2) ? "OK" : "FAILED") << std::endl;

  return 0;
}
#endif
