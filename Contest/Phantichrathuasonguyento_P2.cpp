#include <bits/stdc++.h> 
using namespace std; 
int main(){ 
    int n; cin >> n; 
    int dem=0; 
    while(n%2==0){ 
        dem++; n/=2; 
    }
    if (dem != 0) cout << "2 " << dem << "\n"; 
    for(int i=3;i<=sqrt(n);i+=2){ 
        dem=0; 
        while(n%i==0){ 
            dem++; n/=i; 
        }
        if(dem!=0) cout << i << " " << dem << "\n"; 
    } 
    if(n>1) cout << n << " " << "1" << "\n"; 
    return 0; 
}