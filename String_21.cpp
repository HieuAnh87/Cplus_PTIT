#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

void run(){
    string s;  cin >> s;
    int sum=0;
    string s1="";
    for(int i=0; i<s.size(); i++){
        if(s[i]>='0' && s[i]<='9')  sum += (s[i]-'0');
        else s1+=s[i];  
    }
    sort(s1.begin(), s1.end());
    cout<<s1<<sum;
    cout<<endl;
}

int main(){
    int t; cin >> t;
    while(t--) run();
    return 0;

}


// Input:
// 2
// AC2BEW3
// ACCBA10D2EW30

// Output:
// ABCEW5
// AABCCDEW6