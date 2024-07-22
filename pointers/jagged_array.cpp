#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  int row;

  std::cout << "Enter the no. of row: ";
  cin >> row;
  int *sizeOfNthRow = new int[row];
  int **arr = new int *[row];

  for (int i = 0; i < row; i++) {
    std::cout << "No. of elements in array " << i << ": ";
    cin >> sizeOfNthRow[i];

    arr[i] = new int[sizeOfNthRow[i]];

    cout << "Enter elements: ";
    for (int j = 0; j < sizeOfNthRow[i]; j++) {
      cin >> arr[i][j];
    }
  }

  // print
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < sizeOfNthRow[i]; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
