#include<iostream>
#include<cmath>
using namespace std;

void run(){
    string s;  cin >> s;
    int r=0;
    for(int i=0; i<s.size(); i++){
        r = (2*r + (s[i] - '0')) % 5; // r = (2*r + x) % 5
    }
    if(r==0)  cout << "Yes" << endl;
    else      cout << "No" << endl;
}

int main(){
    int t;   cin >> t;
    while (t--) run();
}


// Input:
// 2
// 1010
// 10000101001
// Output:
// Yes
// Yes