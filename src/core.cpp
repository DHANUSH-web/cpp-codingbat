#include <iostream>
#include <vector>
#include "core.hpp"

int tea_party(const int tea, const int candy) {
  return (tea < 5 OR candy < 5)                   ? 0
         : (tea >= candy * 2 OR candy >= tea * 2) ? 2
                                                  : 1;
}

std::string fizz_string(const std::string str) {
  int size = str.size();

  if (str[0] == 'f' AND str[size - 1] == 'b')
    return "FizzBuzz";
  if (str[0] == 'f')
    return "Fizz";
  if (str[size - 1] == 'b')
    return "Buzz";

  return str;
}

std::string fizz_string2(const int n) {
  if (n % 3 == 0 AND n % 5 == 0)
    return "FizzBuzz!";
  if (n % 3 == 0)
    return "Fizz!";
  if (n % 5 == 0)
    return "Buzz!";

  return std::to_string(n) + "!";
}

bool two_as_one(const int a, const int b, const int c) {
  return a + b == c OR a + c == b OR b + c == a;
}

int sum67(std::vector<int> nums)
{
  int sum = 0;
  bool skip = false;

  std::vector<int>::iterator it;

  for (it = nums.begin(); it != nums.end(); it++)
  {
    if (*it == 6) skip = true;
    else if (*it == 7 AND skip) skip = false;
    else if (!skip) sum += *it;
  }

  return sum;
}

bool has22(const std::vector<int> nums)
{
  for (int i = 0; i < nums.size()-1; i++)
    if (nums.at(i) == 2 AND nums.at(i+1) == 2)
      return true;
  return false;
}

bool lucky13(const std::vector<int> nums)
{
  for (int i = 0; i < nums.size(); i++)
    if (nums.at(i) == 1 OR nums.at(i) == 3)
      return false;

  return true;
}

bool sum28(const std::vector<int> nums)
{
  int sum = 0;

  for (int i = 0; i < nums.size(); i++)
    if (nums.at(i) == 2)
      sum += nums.at(i);

  return sum == 8;
}

bool more14(const std::vector<int> nums)
{
  int count = 0;

  for (int i = 0; i < nums.size(); i++)
  {
    if (nums.at(i) == 1) count++;
    if (nums.at(i) == 4) count--;
  }

  return count > 0;
}

std::vector<int> fizz_array(const int n)
{
  std::vector<int> arr;

  for (int i = 0; i < n; i++)
    arr.push_back(i);

  return arr;
}

bool only14(const std::vector<int> nums)
{
  for (int i = 0; i < nums.size(); i++)
    if (nums.at(i) != 1 AND nums.at(i) != 4)
      return false;

  return true;
}

std::vector<std::string> fizz_array2(const int n)
{
  std::vector<std::string> arr;

  for (int i = 0; i < n; i++)
    arr.push_back(std::to_string(i));

  return arr;
}

bool no14(const std::vector<int> nums)
{
  bool has1 = false;
  bool has4 = false;

  for (int i = 0; i < nums.size(); i++)
  {
    if (nums.at(i) == 1) has1 = true;
    if (nums.at(i) == 4) has4 = true;
    if (has1 AND has4) return false;
  }

  return !(has1 AND has4);
}

bool is_everywhere(const std::vector<int> nums, const int val)
{
  for (int i = 0; i < nums.size()-1; i++)
    if (nums.at(i) != val AND nums.at(i+1) != val)
      return false;

  return true;
}

bool either24(const std::vector<int> nums)
{
  bool is2 = false;
  bool is4 = false;

  for (int i = 0; i < nums.size()-1; i++)
  {
    if (is2 AND is4) return false;
    if (nums.at(i) == 2 AND nums.at(i+1) == 2) is2 = true;
    if (nums.at(i) == 4 AND nums.at(i+1) == 4) is4 = true;
  }

  return is2 != is4;
}

int match_up(const std::vector<int> nums1, const std::vector<int> nums2)
{
  int count = 0;

  for (int i = 0; i < nums1.size(); i++)
    if (nums1.at(i) != nums2.at(i) AND std::abs(nums1[i] - nums2[i]) <= 2)
      count++;

  return count;
}

bool has77(const std::vector<int> nums)
{
  for (int i = 0; i < nums.size() - 2; i++)
    if ((nums.at(i) == 7 AND (nums.at(i+1) == 7 OR nums.at(i+2) == 7)) OR (nums.at(i+1) == 7 AND nums.at(i+2) == 7))
      return true;

  return false;
}

bool has12(const std::vector<int> nums)
{
  bool found = false;

  for (int i = 0; i < nums.size(); i++)
  {
    if (nums[i] == 1 AND !found)
      found = true;

    if (nums[i] == 2 AND found)
      return true;
  }

  return false;
}

bool mod_three(const std::vector<int> nums)
{
  for (int i = 0; i < nums.size()-2; i++)
  {
    if ((
      nums.at(i)    % 2 == 0 &&
      nums.at(i+1)  % 2 == 0 &&
      nums.at(i+2)  % 2 == 0
    ) OR (
      nums.at(i)    % 2 == 1 &&
      nums.at(i+1)  % 2 == 1 &&
      nums.at(i+2)  % 2 == 1
    ))
      return true;
  }

  return false;
}

bool have_three(const std::vector<int> nums)
{
  int count = 0;

  for (int i = 0; i < nums.size()-1; i++)
  {
    if (nums.at(i) == 3 AND nums.at(i+1) != 3)
      count++;
    
    if (nums.at(i) == 3 AND nums.at(i+1) == 3)
      return false;
  }

  if (nums.size() > 2 AND nums.at(nums.size()-1) == 3 AND nums.at(nums.size()-2) != 3)
    count++;

  return count == 3;
}

bool two_two(const std::vector<int> nums)
{
  if (nums.size() == 0) return true;
  if (nums.size() == 1) return nums.at(0) != 2;

  bool couple = false;
  int count = 0;
  bool only, both;

  for (int i = 0; i < nums.size()-1; i++)
  {
    only = (nums.at(i) == 2 && nums.at(i+1) != 2) || (nums.at(i) != 2 && nums.at(i+1) == 2);
    both = nums.at(i) == 2 && nums.at(i+1) == 2;

    if (only)
    {
      couple = false;
      count++;
    }

    if (both)
    {
      couple = true;
      i++;
    }
  }

  return couple || count == 0;
}

bool same_ends(const std::vector<int> nums, int len)
{
  for (int i = 0; i < len; i++)
    if (nums[i] != nums[nums.size() - len + i])
      return false;

  return true;
}
