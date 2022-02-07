#include<iostream>
#include <iomanip>
using namespace std;

int main(){
    int n;  cin >> n;
    double i,temp,sum=0; // Khai báo double
    for(i=1; i<=n; i++){
        temp = 1/i;
        sum = sum + temp;
    }
    cout << fixed << setprecision(4) << sum;
    // fixed để thông báo sau dấu chấm có thập phân
    //setprecison(4) là lấy 4 số sau chấm
}