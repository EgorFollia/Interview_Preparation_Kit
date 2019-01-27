#include <bits/stdc++.h>

using namespace std;

long repeatedString(string s, long n)
{
  long count = 0;
  for (auto i : s)
  {
    if (i == 'a')
      count++;
  }

  long fact = n/s.length();
  count *= fact;

  long rem = n%s.length();
  for (int i = 0; i < rem; i++)
  {
    if (s[i] == 'a')
      count++;
  }

  return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
