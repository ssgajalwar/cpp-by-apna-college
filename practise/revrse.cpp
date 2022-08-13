#include <bits/stdc++.h>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    char ch;
    int a,b,c;
    cout<<str[0];
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}