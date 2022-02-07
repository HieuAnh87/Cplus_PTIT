#include<iostream>
#include<cmath>
using namespace std;

void run(){
    string s;  cin >> s;
    int sum=0;
    for(int i=0; i<s.size(); i++){
        int res=0;
        if (s[i] <= '9' && s[i] >= '0'){
                res = res * 10 + (s[i]-'0');
                i++;
                while (s[i] <= '9' && s[i] >= '0'){
                    res = res * 10 + (s[i]-'0');
                    i++;
                }
        }
        if(sum<res) swap(sum,res);
    }
    cout << sum << endl;
}

int main(){
    int t;  cin >> t;
    while(t--) run();

}


// Input:
// 3
// 100klh564abc365bg
// abvhd9sdnkjdfs
// abchsd0sdhs

// Output:
// 564
// 9
// 0