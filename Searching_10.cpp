#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

bool snt(int n){
    if(n<2) return false;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0) return false;
    }
    return true;
}

void run(){
    int n;  cin >> n ;
    int temp=0; 
    for(int i=2; i<=n/2; i++){
        if(snt(i) && snt(n-i)){
            cout << i << " " << n-i << endl;
            temp=1;
            break;
        }
    }
    if(temp==0) cout << -1 << endl;
}    
int main(){
    int t; cin >> t;
    while(t--) run();
}

//Ý tưởng : tìm cặp số nguyên tố có tổng X => Hầu hết là tổng của số đầu và số cuối 
//          => Chạy vòng for 2 số 2 đầu cho đến khi tìm được kqua (i và n-i)


// Input:
// 2
// 4
// 8
// Output:
// 2 2
// 3 5