#include<iostream>
using namespace std;
/*
   https://www.geeksforgeeks.org/count-number-of-solutions-of-x2-1-mod-p-in-given-range/   
*/
long long b,p;
void input(){
    cin >> b >> p;
}
void solve(){
    long long res = 0;
    for(long long i =  1 ; i < p ; i++){
        if ( (i * i) %p == 1){
            long long last = i + p * (b/p);
            if ( last > b ) last -= p;
            res += ((last - i)/p + 1);
        }
    }
    cout << res << endl;
}
int main(){
    int t=1; 
    cin>>t;
    while(t--){ 
        input();
        solve();
    }
    return 0;
}


// Input: 
// 2
// 5 7
// 8 6
// Output:
// 1
// 3