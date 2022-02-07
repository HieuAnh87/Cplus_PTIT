#include<bits/stdc++.h>
using namespace std;
string s1,s2;
string slove(){
	int len1=s1.length(),len2=s2.length();
	if(len1==0 || len2==0) return "0";
	vector<int>v(len1+len2,0);
	int dem1=0,dem2=0;
	for(int i=len1-1;i>=0;i--){
		int n1=s1[i]-'0';
		int ans=0;
		dem2=0;
		for(int j=len2-1;j>=0;j--){
			int n2=s2[j]-'0';
			int sum=n1*n2 + v[dem1+dem2] + ans;
			ans=sum/10;
			v[dem1+dem2]=sum%10;
			dem2++;
		}
		if(ans>0){
			v[dem1+dem2]+=ans;
		}
		dem1++;
	}
	int i=v.size()-1;
	while(i>=0 && v[i]==0) i--;
	if(i==-1) return "0";
	string s="";
	while(i>=0) s+=std::to_string(v[i--]);
	return s;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>s1>>s2;
		cout<<slove()<<endl;
	}
}


// Cho hai số rất lớn X và Y được biểu diễn như hai xâu ký tự. Nhiệm vụ của bạn là tìm X × Y?

// Input:

// Dòng đầu tiên đưa vào số lượng test T.
// Những dòng kế tiếp đưa vào các bộ test. Mỗi test gồm hai dòng: dòng thứ nhất đưa xâu X; dòng tiếp theo đưa vào xâu Y.
// T, X, Y  thỏa mãn ràng buộc : 1≤T≤100; 0≤length(X), length(Y)≤103.
// Output:

// Đưa ra số kết quả mỗi test theo từng dòng.
// Input:
// 1
// 2  3
// Output:

// 6