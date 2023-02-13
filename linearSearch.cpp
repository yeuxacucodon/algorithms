#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int x)
{
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == x)
    {
      return i;
    }
  }
  return -1;
}

int main()
{
  int n, arr[1000], target;
  cin >> n;
  cin >> target;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int result = linearSearch(arr, n, target);
  if (result == -1)
  {
    cout << "Can't find " << target;
  }
  else
  {
    cout << "Position is "
         << "arr[" << result << "]";
  }
}