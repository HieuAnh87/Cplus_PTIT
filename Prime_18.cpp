#include<iostream>
#include<cmath>
using namespace std;

int main(){
    short t; cin >> t;
    while (t--){
        int dem=0;
        int m,n;  cin >> m >> n;
        int a,b;  cin >> a >> b;
        for(int i=m; i<=n; i++){
            if(i%a==0 || i%b==0) dem++;
        }
        cout << dem << endl;
    }
    
}