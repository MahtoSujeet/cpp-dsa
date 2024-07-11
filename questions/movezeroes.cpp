#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int> &nums) {

  int pivot = nums.size() - 1;

  while (nums[pivot] == 0)
    pivot--;

  int i = pivot - 1;

  for (; i >= 0; i--) {
    if (nums[i] == 0) {
      int k = i;
      while (k < pivot) {
        nums[k] = nums[k + 1];
        k++;
      }
      nums[pivot--] = 0;
    }
  }
}

void print(vector<int> arr) {
  for (int e : arr)
    cout << e << " ";
  cout << endl;
}

int main() {
  vector<int> nums = {0, 1, 0, 3, 12};
  print(nums);

  moveZeroes(nums);
  print(nums);
}
