#include <iostream>
using namespace std;

void sort(int arr[], int n){
  for (int i=0; i<n-1;i++){
    for(int j=0; j<=n-2-i; j++){
      if(arr[j]>arr[j+1]) swap(arr[j], arr[j+1]);
    }
  }
}

void printArr(int arr[], int size){
  for(int i=0;i<size;i++){
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main(){
  int arr[]= {2,32,24,1,5,43,7,345,2,3,-3,32,-31};
  int n = sizeof(arr)/sizeof(arr[0]);

  printArr(arr, n);
  sort(arr,n);
  printArr(arr, n);

  return 0;
}

