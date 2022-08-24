#include<bits/stdc++.h>
using namespace std;
int divisible(int x,int a,int b){
    int c1=x/a;
    int c2=x/b;
    int c3=x/(a*b);

    return c1 + c2 -c3;
}

int main(){
    int x,a,b;
    cin>>x>>a>>b;
    cout<<divisible(x,a,b);
    return 0;
}