#include <iostream>
#include <vector>

using namespace std;

void minimumBribes(vector <int> queue)
{
  int bribes = 0;
  for (int i = queue.size() - 1; i >= 0; i--)
  {
    if (queue[i] - (i + 1) > 2)
    {
      cout << "Too chaotic" << endl;
      return;
    }

    for (int j = max(0, queue[i] - 2); j < i; j++)
      if (queue[j] > queue[i])
        bribes++;
  }

  cout << bribes << endl;
}

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    vector <int> queue;
    int n = 0;
    cin >> n;

    while (n--)
    {
      int el = 0;
      cin >> el;
      queue.push_back(el);
    }

    minimumBribes(queue);
  }

  return 0;
}
