#include <cassert>
#include <iostream>
#include <vector>

using namespace std;

// clang++ -fcolor-diagnostics -fansi-escape-codes -g -pedantic-errors -ggdb -Werror -std=c++17 ./main.cpp -o ./main

int sockMerchant(int n, vector<int> ar)
{
  int pairs = 0;
  for (int left = 0; left < n; left++)
  {
    for (int right = left + 1; right < n; right++)
    {
      if (ar[left] == ar[right])
      {
        pairs++;
        left++;
      }
    }
  }

  return pairs;
}

int main()
{
  vector<int> input = {1, 2, 2, 1, 1, 3, 5, 1, 2};
  int result = sockMerchant(input.size(), input);
  cout << "Result: " << result << endl;
  cout << "Expected: 3" << endl;

  input = {1, 1, 3, 1, 2, 1, 3, 3};
  result = sockMerchant(input.size(), input);
  cout << "Result: " << result << endl;
  cout << "Expected: 2" << endl;

  input = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  result = sockMerchant(input.size(), input);
  cout << "Result: " << result << endl;
  cout << "Expected: 0" << endl;

  return 0;
}
