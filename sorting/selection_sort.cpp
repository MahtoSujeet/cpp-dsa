#include <iostream>
using namespace std;

void sort(int arr[], int n) {
  for (int i = 1; i < n; i++) {
    /* for (int j = i; j != 0 && arr[j - 1] > arr[j]; j--) { */

    /* swap works but we can optimise */
    /* swap(arr[j - 1], arr[j]); */

    /* } */
    int tempnum = arr[i];
    int j = i;
    for (j = i; j != 0 && arr[j - 1] > tempnum; j--) {
      arr[j] = arr[j - 1];
    }
    arr[j] = tempnum;
  }
}

void printArr(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {
  int arr[] = {2, 32, 24, 1, 0, 5, 43, 7, 345, 2, 3, -3, 32, -31};
  int n = sizeof(arr) / sizeof(arr[0]);

  printArr(arr, n);
  sort(arr, n);
  printArr(arr, n);

  return 0;
}
