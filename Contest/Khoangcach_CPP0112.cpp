#include <bits/stdc++.h>
using namespace std;

void run(){
    double a,b,c,d;  cin >> a >> b >> c >> d;
    double res = sqrt((a-c)*(a-c)+(b-d)*(b-d));
    cout << fixed << setprecision(4) <<  res << endl;
}

int main(){
    int t; cin >> t;
    while(t--) run();
}