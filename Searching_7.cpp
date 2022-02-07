#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

void input(int a[], int n){
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
}
void run(){
    int n, k;  cin >> n >> k;
    int a[n+1]; 
    input(a,n);  sort(a,a+n);
    for(int i=n-1; i>=n-k; i--){
        cout<<a[i]<<" ";
    }
    cout << endl;
}    
int main(){
    int t; cin >> t;
    while(t--) run();
}

// Ý tưởng : thứ tự giảm dần => sort rồi làm như bthg in đến (n-k)

// Input:

// 2
// 5 3
// 10 7 9 12 6
// 6 2
// 9 7 12 8 6 5
// Output:
// 12 10 9
// 12 9