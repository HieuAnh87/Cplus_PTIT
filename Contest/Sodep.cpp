#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
string dep(string a){
	int n=a.size();
	for(int i=0;i<=(n+1)/2;i++){
		if(a[i]!=a[n-i-1]||(a[i]-'0')%2==1) return "NO";
	}
	return "YES";
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		string a;
		cin>>a;
		cout<<dep(a)<<endl;
	}
}


// //  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
// #include <bits/stdc++.h>
// const long long mod = 1e9 + 7;
// #define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
// #define reset(a) memset(a,0,sizeof(a))
// #define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// using namespace std;
// string reversible_test(string s){
//     int l = 0, r = s.length() - 1;
//     while(l < r){
//         if ((int)(s[l] - 48) % 2 != 0 || (int)(s[r] - 48) % 2 != 0)
//             return "NO";
//         if(s[l] != s[r])
//             return "NO";
//         l++, r--;
//     }
//     return "YES";
// }
// int main(){
//     fastIO;
//     int t;
//     cin >> t;
//     while(t--){
//         string s;
//         cin >> s;
//         cout << reversible_test(s) << endl;
//     }
// }