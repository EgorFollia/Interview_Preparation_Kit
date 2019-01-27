#include <bits/stdc++.h>

using namespace std;

int countingValleys(int n, string s)
{
  char s_arr[s.length() + 1];
  strcpy(s_arr, s.c_str());

  int lvl = 0, val = 0;
  for (auto i : s_arr)
  {
    if (i == 'U') lvl++;
    if (i == 'D') lvl--;

    if (lvl == 0 && i == 'U')
      val++;
  }

  return val;
}

int main()
{
    int n;
    cin >> n;

    string s;
    getline(cin, s);

    cout << countingValleys(n, s) << endl;

    return 0;
}
