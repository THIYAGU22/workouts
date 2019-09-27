#include <iostream>
using namespace std;

int main() {
  
  int tc;
  int size;
  cin>>tc;
  

  int i , j;

  while(tc--){
  cin>>size;
  int arr[size];
  for(i=0;i<size;i++){
    cin>>arr[i];
  }
  i = 0;
  j = size-1;

  while(i<=j){
    if(i==j){
      cout<<arr[i];
      break;
    }
    cout<<arr[j]<<" "<<arr[i]<<" "; 
    j--;
    i++;
  }
  
  }
}
