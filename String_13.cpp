#include<bits/stdc++.h>
using namespace std;
int solve(string s,int k){
	int ans=0;
	int n=s.length();
	int fre[256];
	for(int i=0;i<n;i++){
		memset(fre,0,sizeof(fre));
		int cnt=0;
		for(int j=i;j<n;j++){
			if(fre[s[j]]==0){
				cnt++;
			}
			fre[s[j]]++;
			if(cnt==k){
				ans++;
			}
			else if(cnt>k){
				break;
			}
		}
	}
	return ans;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		int k;
		cin>>s>>k;
		cout<<solve(s,k)<<endl;
	}
}


// Cho xâu ký tự S và số k. Nhiệm vụ của bạn là đếm số xâu con của S có đúng k ký tự khác nhau. Các xâu con không nhất thiết phải khác nhau. Ví dụ với xâu S=”abc” và k = 2, ta có kết quả là 2 bao gồm các xâu con: “ab”, “bc”.
// Input:
// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test là một xâu ký tự S và số k được viết trên một dòng.
// T, S thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ k ≤26;1≤ Length(S)≤103.
// Output:
// Đưa ra kết quả mỗi test theo từng dòng.
// Input:
// 2
// abc  2
// aba  2
// Output:
// 2
// 3