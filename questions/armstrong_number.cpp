#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

bool isArmstrong(int n) {
  vector<int> digits;
  int copy = n;

  while (copy) {
    digits.push_back(copy % 10);
    copy /= 10;
  }

  int len = digits.size();
  long sum = 0;
  for (int d : digits) {
    sum += pow(d, len);
  }

  return (n == sum);
}

int main(int argc, char *argv[]) {
  while (1) {
    int n;
    cin >> n;

    cout << isArmstrong(n) << endl;
  }

  return 0;
}
