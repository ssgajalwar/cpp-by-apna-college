#include<bits/stdc++.h>
using namespace std;
int getBit(int n,int pos){
    return ((n&(1<<pos))!=0);
}

int setBit(int n,int pos){
    return ((n&(1<<pos)==0010));
}

int main(){
    cout<<getBit(5,2)<<endl;
    cout<<setBit(5,2)<<endl;
    return 0;    
}