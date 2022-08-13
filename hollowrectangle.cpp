#include<iostream>
using namespace std;
int main(){

int row,col;
row=5;
col=4;
// cin>>row;
// cin>>col;

for (int i = 1; i <=row; i++)
{
  for (int j = 1; j <=col; j++)
    {

        if(i==1 || i==5 || j==1 || j==4){
           cout<<" *";
        }
        else{
            cout<<"  ";
        }
        
    }
    cout<<endl;
}    
} 
