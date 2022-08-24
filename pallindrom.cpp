#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    
    char arr[x  + 1];
    cin>>arr;
    // cout<<arr;
    bool check=1;

    for(int i=0;i<x;i++)
    {
     if(arr[i] != arr[x-1-i])
     {
         check =0;
         break;
     }  
    }
    if(check==0){
        cout<<"not a Pallindrome";
    }else{
        cout<<"pallindrome";
    }
}