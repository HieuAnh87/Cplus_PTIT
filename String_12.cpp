#include<bits/stdc++.h>
using namespace std;
inline int tonum(char c){
	return c-'0';
}
int solve(string s){
	set<char> se;
	for(char x:s){
		se.insert(x);
	}
	int cnt=se.size();
	int fre[256]={0};
	int dem=0;
	int start=0,ans=INT_MAX;
	for(int i=0;i<s.length();i++){
		fre[s[i]]++;
		if(fre[s[i]]==1)
		dem++;
		if(dem==cnt){
			while(fre[s[start]]>1){
				fre[s[start]]--;
				start++;
			}
			ans=min(ans,i-start+1);
		}
	}
	return ans;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		cout<<solve(s)<<endl;
	}
}

// Cho xâu ký tự S. Nhiệm vụ của bạn là hãy tìm độ dài xâu con nhỏ nhất của S chứa đầy đủ các ký tự của S mỗi ký tự ít nhất một lần. Ví dụ với xâu S=”aabcbcdbca” ta có xâu con nhỏ nhất là “dbca”.

// Input:

// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test là một xâu ký tự S được viết trên một dòng.
// T, S thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ Length(S)≤105.
// Output:

// Đưa ra kết quả mỗi test theo từng dòng.
// Input:
// 2
// aabcbcdbca
// aaab
// Output:
// 4
// 2