#include<iostream>
using namespace std;

int main(){
  char op;
  float val1,val2,ans;
  cout<<"Enter expresion with spaces : ";
  cin>>val1;
  cin>>op;
  cin>>val2;
  // cout<<"Enter a operator : ";
  // cin>>op;
   switch (op)
   {
   case '+':
   ans=val1+val2;
   cout<<ans;
      break;
   case '-':
   ans=val1-val2;
   cout<<ans;
      break;
   case '*':
   ans=val1*val2;
   cout<<ans;
      break;
   case '/':
   ans=val1/val2;
   cout<<ans;
      break;

   default:
   cout<<"please enter valid input between";
    break;
   }

    return 0;
}