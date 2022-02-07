#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

long long Replace(long long n, int from, int to){
    long long res=0;
    long long temp=1;
    while(n>0){
        long long remember = n % 10;   // Lấy chữ số cuối cùng
        if(remember == from)
            res = res + to*temp;
        else
            res = res + remember*temp;
        temp *=10;
        n /= 10;
    }
    return res;   
}

void run(){
    long long a,b;
    cin >> a >> b;
    long long minSum = Replace(a,6,5) + Replace(b,6,5);
    long long maxSum = Replace(a,5,6) + Replace(b,5,6);
    cout << minSum << " " << maxSum << endl;
}

int main(){
    int t;  cin>>t;
    while(t--)  run();
}


// Input:
// 2
// 645  666
// 5466 4555
// Output:
// 1100  1312
// 10010 11132