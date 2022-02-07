#include<iostream>
#include<string>
using namespace std;

void run(){
    string a; cin >> a;
    // Xét từng chữ số
    for(int i=0; i<a.size(); i++){
        if(a[i]!='0' && a[i]!='6' && a[i]!='8'){
           cout << "NO" <<endl;
            return;        
        }
    }
    cout << "YES" <<endl;
}

int main(){
    int t; cin >> t;
    while(t--)  run();
}