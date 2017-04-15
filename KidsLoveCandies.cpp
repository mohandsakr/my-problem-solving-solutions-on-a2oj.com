//============================================================================
//problem link: https://a2oj.com/p?ID=17
// Name        : KidsLoveCandies.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//status :
//============================================================================

#include <iostream>
using namespace std;

int main() {
     int t;
     cin>>t;
     while(t--){
         int n;
         int k;
         int sum=0;
         cin>>n>>k;
         int arr[n];
         for(int i=0;i<n;i++){
             cin>>arr[i];
         }
         for(int i=0;i<n;i++){
             sum+=arr[i]/k;
             }
         cout<<sum<<endl;
     }
    return 0;
}
