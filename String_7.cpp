#include<bits/stdc++.h>
using namespace std;
inline int tonum(char c){
	return c-'0';
}
string bigsum(string s1,string s2){
	if(s1.length()<s2.length())
	swap(s1,s2);
	int len1=s1.length();
	int len2=s2.length();
	int c=0;
	string res="";
	for(int i=0;i<len2;i++){
		int x=tonum(s1[len1-i-1])+tonum(s2[len2-i-1])+c;
		res=char(x%10+'0')+res;
		c=x/10;
	}
	for(int i=len2;i<len1;i++){
		int x=tonum(s1[len1-i-1])+c;
		res=char(x%10+'0')+res;
		c=x/10;
	}
	if(c){
		res="1"+res;
	}
	return res;
}
bool solve(string s,int start,int len1,int len2){
	string s1=s.substr(start,len1);
	string s2=s.substr(start+len1,len2);
	string s3=bigsum(s1,s2);
	int len3=s3.length();
	if(len3>s.length()-start-len1-len2){
		return false;
	}
	if(s3==s.substr(start+len1+len2,len3)){
		if(start+len1+len2+len3==s.length())
		return true;
		return solve(s,start+len1,len2,len3);
	}
	return false;
}
bool check(string s){
	int len=s.length();
	for(int i=1;i<len;i++){
		for(int j=1;j<len-i;j++){
			if(solve(s,0,i,j))
			return true;
		}
	}
	return false;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		if(check(s)){
			cout<<"Yes"<<endl;
		}else{
			cout<<"No"<<endl;
		}
	}
}

// Cho xâu ký tự S bao gồm các chữ số. Xâu S được gọi là Sum String nếu tồn tại một số tự nhiên k>2 sao cho ta có thể chia xâu S thành k xâu con khác nhau S =(S1, S2, ..Sk) sao cho các số được tạo bởi các xâu con thỏa mãn điều kiện  Si=Si-1 + Si-2 (i=3, 4, .., k). Ví dụ xâu S =”123415538” là một Sum String vì tồn tại số k = 3 để phân tích xâu S thành 3 xâu con S = (“123”, “415”,”538”) thỏa mãn 123 + 414 = 538. Tương tự như vậy xâu S=”12345” không phải là một Sum String.
// Hãy kiểm tra xem S có phải là xâu Sum String hay không?
// Input:
// Dòng đầu tiên đưa vào số lượng test T.
// Những dòng kế tiếp đưa vào các test. Mỗi test là một xâu ký tự số S.
// T và S thỏa mãn ràng buộc 1≤T≤100, 3≤length(S)≤105.
// Output:
// Đưa ra kết quả mỗi test theo từng dòng.
// Input:
// 3

// 123415538

// 12345

// 1122335588143

// Output:
// Yes
// No
// Yes