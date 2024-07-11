#include <iostream>
#include <vector>
using namespace std;

void printArr(vector<int> arr) {
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {
  vector<int> a = {2, 4, 6, 7};
  vector<int> b = {5, 6, 7, 8, 13};

  int pivot = 0;
  for (int el : b) {
    while (a[pivot] <= el)
      pivot++;

    for (int j = a.size(); j > pivot; j--)
      a[j] = a[j - 1];

    a[pivot] = el;
  }
  printArr(a);

  return 0;
}
