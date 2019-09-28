#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
int main()
{
  int tc;
  cin>>tc;

  while(tc--){
    int size;
    cin>>size;
    string val[size];

    for(int i = 0 ; i < size ; i++){
      cin>>val[i];
    }

     for(int i = 0 ; i < size ; i++){
      for(int j = i+1 ; j < size; j++){
        if(val[i]+val[j] < val[j]+val[i]){
          swap(val[i],val[j]);
        }
      }
      //cout<<endl<<endl;
    }
    //
    string a;
    for(int i = 0 ; i < size ; i++){
      a += val[i];
    }
    cout<<a;
  }
  return 0;
}
