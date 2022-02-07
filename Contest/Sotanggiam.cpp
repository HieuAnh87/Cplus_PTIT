#include<bits/stdc++.h>
using namespace std;
int a[10]={5,20,38,50,38,20,8,5,0}; 
int main() { 
    int t; cin >> t; 
    while (t--) { 
        int n; cin >> n;
        cout << a[n-1] << endl;
    } 
}