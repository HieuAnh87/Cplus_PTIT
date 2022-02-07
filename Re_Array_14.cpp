#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;
long long k,n;
vector<long long> a;
void run(){
    cin>>k>>n;
    a.clear();
    for(int i=0; i<k*n; i++){
            long long b;
            cin>>b;
            a.push_back(b);
    }
    sort(a.begin(), a.end());
    for(int i=0; i<a.size(); i++) cout<<a[i]<<' ';
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--) run();
    return 0;
}



// Input:
// 1
// 3 4

// 1 3 5 7

// 2 4 6 8

// 0 9 10 11
// Output:
// 0 1 2 3 4 5 6 7 8 9 10 11