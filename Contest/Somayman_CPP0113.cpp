#include<iostream>
using namespace std;

void run(){
    string n; cin >> n;
    int l = n.length();
    if(n[l-1]=='6' && n[l-2]=='8') cout << "1" <<endl;
    else cout << " 0" << endl;
}

int main(){
    int t; cin >> t;
    while(t--) run();
}
 