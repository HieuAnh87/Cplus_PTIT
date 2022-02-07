#include<iostream>
#include<cmath>
using namespace std;

void run(){
    string s;  cin >> s;
    int sum=0;
    for(int i=0; i<s.size();i++){
        int res=0;   // tạo biến đếm theo từng i là số
        if(s[i]>='0' && s[i] <= '9'){
            res = res*10 + (s[i]-'0');
            i++;
            while(s[i]>='0' && s[i] <= '9'){
                res = res*10 + (s[i]-'0');
                i++;
            }
        }
        sum += res;
    }
    cout << sum << endl;
}

int main(){
    int t;   cin >> t;
    while (t--) run();

}


// Input:
// 4
// 1abc23
// geeks4geeks
// 1abc2x30yz67
// 123abc
// Output:
// 24
// 4
// 100
// 123