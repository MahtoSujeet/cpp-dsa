#include <iostream>
using namespace std;


void sort(int arr[], int size){
  for(int i=0;i<size-1;i++){
    //find min
    int minidx = i;
    for(int j=i+1; j<size; j++){
      if(arr[j] < arr[minidx]) minidx = j;
    }

    //swap
    if(i!=minidx) swap(arr[i], arr[minidx]);
  }
}

void printArr(int arr[], int size){
  for(int i=0;i<size;i++){
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main(){
  int arr[] = {2,453,1,4,67,3,74,9,3,234,342,23,2,1,0,-34,-13,345,1};
  int size = sizeof(arr)/sizeof(arr[0]);

  printArr(arr, size);
  sort(arr, size);
  printArr(arr, size);

  return 0;
}
