#include <iostream.h>

using namespace std;

int hourglassSum(int arr[][6])
{
  int sum = 0;

  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      int temp = 0;

      temp += arr[i][j];
      temp += arr[i][j + 1];
      temp += arr[i][j + 2];
      temp += arr[i + 1][j + 1];
      temp += arr[i + 2][j];
      temp += arr[i + 2][j + 1];
      temp += arr[i + 2][j + 2];

      if (temp > sum || i == 0 && j ==0)
        sum = temp;
    }
  }

  return sum;
}

int main()
{
    int arr[6][6] = {};

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
              cin >> arr[i][j];
    }

    cout << hourglassSum(arr) << endl;

    return 0;
}
