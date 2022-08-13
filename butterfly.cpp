#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=8;j++){
            if(i>1 && i<8){
                cout<<"  ";
            }else{
                cout<<" *";
            }
            
        }
        cout<<endl;
    }
}