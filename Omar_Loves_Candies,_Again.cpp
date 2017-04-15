//============================================================================
//prblem link:https://a2oj.com/p?ID=193
// Name        : Omar_Loves_Candies,_Again.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//ststus : accepted
//============================================================================

#include <iostream>
using namespace std;
#include <string>
#include<vector>
#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        string x;
        cin>>x;
        int a=x.length();
        int arr[a];
        for(int i=0;i<a;i++){
            int counter=0;
            for(int j=0;j<a;j++){
                if(x[i]==x[j])
                {
                    counter++;
                }
            }
            arr[i]=counter;
        }
     int index=0;
    int value=arr[0];
    for(int i=1;i<a;i++){
    if(arr[i]>value)
    {
        value=arr[i];
        index=i;
    }
    else if(arr[i]==value)
    {
        if(x[i]<x[index])
        {
            value=arr[i];
            index=i;
        }

    }

    }
    cout<<value<<" "<<x[index]<<endl;
    }

    return 0;
}
