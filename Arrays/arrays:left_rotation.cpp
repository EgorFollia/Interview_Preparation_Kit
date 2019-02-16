#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int n = 0, d = 0;
  cin >> n >> d;
  vector <int> arr;

  while (n--)
  {
    int elem;
    cin >> elem;
    arr.push_back(elem);
  }

  while (d--)
  {
    arr.push_back(arr.front());
    arr.erase(arr.begin());
  }

  for (auto i : arr)
    cout << i << ' ';
}
