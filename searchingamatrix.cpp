#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
    }


    int find;
    cin>>find;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j] == find){
                cout<<"index "<<i<<" "<<j;
            }
        }
    }
    cout<<"Not found";
}