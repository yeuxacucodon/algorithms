#include <iostream>
#include <type_traits>
using namespace std;

void sort(int arr[], int n) {
  int haveswap = false;
  for (int i = 0; i < n - 1; i++) {
    haveswap = false;
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
        haveswap = true;
      }
    }
    if (haveswap == false) {
      break;
    }
  }
}

int main() {
  int arr[1000], n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cout << "arr[" << i << "] = ";
    cin >> arr[i];
  }
  sort(arr, n);
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}
