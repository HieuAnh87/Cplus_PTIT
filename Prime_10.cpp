//
// Một số được gọi là số Smith 
// nếu N không phải là số nguyên tố và 
// có tổng các chữ số của N 
// bằng tổng các chữ số của các ước số nguyên tố của N.
//

#include<iostream>
#include<cmath>
#define Max 100
typedef unsigned long long ull;
using namespace std;

bool snt(int n){
    if(n<2)  return false;
    for(int i=2; i<=sqrt(n); i++)
        if(n%i==0) return false;
    return true;
}

int Demcs(int n){
    int d=0,sotachra;
    while(n>0){

        d += n % 10;
        n/=10;
    }
    return d;
}

int TongcsDivisors(int n){
    int m=n, a[Max];
    int hihi=0,tong=0;
    for(int i=2; i<=n; i++){
        while(m%i==0){
            a[hihi]= i;
            m/=i;
            hihi++;
        }
    }
    for(int i=0; i<hihi; i++){
        tong = tong + Demcs(a[i]);
    }
    return tong;
}

void run(){
    ull n; cin >> n;
    if(Demcs(n)==TongcsDivisors(n) && snt(n)==false) cout << "YES" << endl;
    else                            cout << "NO" << endl;
}

int main(){
    short t;  cin >> t;
    while(t--) run();
}


// Ý TƯỞNG: 3 HÀM: 1 HÀM ĐẾM CHỮ SỐ _ 1 HÀM TÁCH CHỮ SỐ CỦA ƯỚC RỒI CỘNG VÀO _ 1 CHECK SNT