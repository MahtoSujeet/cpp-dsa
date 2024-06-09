#include <iostream>
using namespace std;

int main(){

  int n =9;

  for (int row=0;row<n;row++){
    // 1st triangle
    for(int i=0;i<n-row;i++){
      cout << i+1;
    }

    // stars
    for(int i=0;i<row;i++){
      cout << "**";
    }

    // 2nd tri
    for(int i=n-row;i>0;i--){
      cout << i;
    }

    cout << endl;
  }

}
