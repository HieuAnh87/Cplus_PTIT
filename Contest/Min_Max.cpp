#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int m,s;
	cin>>m>>s;
	string a="",b="";
	if(m==1&&s==0) cout<<0<<" "<<0;
	else if(s==0||s>9*m) cout<<-1<<" "<<-1;
	else{
		a.insert(0,s/9,'9');
		b.insert(0,s/9,'9');
		s%=9;
		if(s>0){
			a.insert(0,1,(char)(s+'0'));
			b.push_back((char)(s+'0'));
		}
		a.insert(0,m-a.size(),'0');
		b.insert(b.size(),m-b.size(),'0');
		if(a[0]=='0'){
			a[0]='1';
			int p=1;
			while(a[p]=='0'){
				p++;
				if(p==a.size()) break;
			}
			a[p]--;
		}
		cout<<a<<" "<<b;
	}
}

// Cho số tự nhiên m và số nguyên s không âm. Nhiệm vụ của bạn là tìm số bé nhất và lớn nhất có m chữ số và tổng chữ số bằng s.

// Input
// Dòng đầu gồm 2 số m và s (1 ≤ m ≤ 100, 0 ≤ s ≤ 900).

// Output
// In ra kết quả của bài toán.

// Số đầu tiên là số bé nhất, số thứ hai là số lớn nhất. Nếu không có đáp án in ra “-1 -1”.

// Example
// Input:
// 2 15

// Output:
// 69 96