#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
void solve(){
	long long n,a;
	cin>>n>>a;
	string s="";
	while(a){
		int r=a%10;
		if(r==4){
			s+="223";
		}
		else if(r==6){
			s+="35";
		}
		else if(r==8){
			s+="2227";
		}
		else if(r==9){
			s+="3327";
		}
		else if(r!=1&&r!=0){
			s+=char(r+'0');
		}
		a/=10;
	}
	sort(s.begin(),s.end(),greater<char>());
	cout<<s<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}


// Axe chơi một trò chơi với Lina.
// Họ định nghĩa hàm F(x) với số x nguyên dương là tích giai thừa các chữ số của x.

// Ví dụ F(135)  = 1! * 3! * 5! = 720.

// Đầu tiên, họ chọn một số a có n chữ số và có ít nhất một chữ số lớn hơn 1, có thể có chữ số không ở đầu. Sau đó họ tìm một số nguyên dương x lớn nhất thỏa mãn:

// X không chứa chữ số 0 hoặc 1
// F(x) = F(a)
// Hãy giúp Axe và Lina tìm ra được số đó.

// Input
// Dòng đầu tiên chứa số bộ test T (T < 100).

// Mỗi test gồm một dòng chứa số n và số a (1 <= n <= 15).

// Output
// In ra kết quả mỗi test trên một dòng là số lớn nhất tìm được.

// Example
// Input: 
// 1
// 4 1234

// Output:
// 33222