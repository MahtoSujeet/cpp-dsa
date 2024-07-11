#include <iostream>
using namespace std;

void reverse(string &s) {
  int start, end;
  int prevSpace = -1;

  for (int i = 0; i < s.length(); i++) {
    if (s[i] == ' ') {
      start = prevSpace + 1;
      end = i - 1;
      while (start < end) {
        swap(s[start++], s[end--]);
      }
      prevSpace = i;
    }
  }
  start = prevSpace + 1;
  end = s.length() - 1;
  while (start < end) {
    swap(s[start++], s[end--]);
  }
}
int main(int argc, char *argv[]) {
  string s = "eee rupali, pakad meri daali. Yo yo bentai rapper!";
  cout << s << endl;
  reverse(s);
  cout << s << endl;

  return 0;
}
