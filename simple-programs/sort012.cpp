// it can also bae done in 1 traversal only, with 2 pointers
#include <algorithm>
#include <iostream>
#include <utility>
using namespace std;

int main() {
  int arr[] = {0, 0, 0, 1, 1, 0, 2, 2, 0, 1};
  int size = 10;

  int pivot = 0;
  while (arr[pivot] == 0) {
    pivot++;
  }
  for (int i = pivot + 1; i < size; i++) {
    if (arr[i] == 0) {
      swap(arr[pivot], arr[i]);
      pivot++;
    }
  }

  while (arr[pivot] == 1) {
    pivot++;
  }
  for (int i = pivot + 1; i < size; i++) {
    if (arr[i] == 1) {
      swap(arr[pivot], arr[i]);
      pivot++;
    }
  }

  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}
