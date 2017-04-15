//============================================================================
//problem link:https://a2oj.com/p?ID=6
// Name        : Balloons_Colors.cpp
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
    cin>>n;
    int x,y;
    cin>>x>>y;
    int arr[n];
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }
    if(arr[0]==x&&arr[n-1]==y)
    {
        cout<<"BOTH"<<endl;
    }
    else if(arr[0]==x&&arr[n-1]!=y){
        cout<<"EASY"<<endl;
    }
    else if(arr[0]!=x&&arr[n-1]==y){
        cout<<"HARD"<<endl;
    }
    else{
        cout<<"OKAY"<<endl;
    }
 }
    return 0;
}
