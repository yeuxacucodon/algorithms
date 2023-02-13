#include <iostream>
using namespace std;

void sort(int arr[1000], int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
      }
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
