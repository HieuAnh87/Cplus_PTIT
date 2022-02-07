#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string a,b,x="";
	getline(cin,a);
	cin>>b;
	vector <string> c;
	for(int i=0;i<a.size();i++){
		if(a[i]==' '){
			c.push_back(x);
			x="";
		}
		else{
			x=x+a[i];
		}
	}
	c.push_back(x);
	for(int i=0;i<c.size();i++){
		if(c[i]!=b) cout<<c[i]<<" ";
	}
}


// Viết chương trình cho phép nhập vào một chuỗi và từ cần loại bỏ khỏi chuỗi. Thực hiện loại bỏ từ và in ra kết quả
// Trong đó:
// INPUT
// - Hàng thứ nhất là chuỗi ban đầu
// - Hàng tiếp theo là từ cần loại bỏ
// OUTPUT
// - Chuỗi kết quả
// Input
// Toi Yeu PTIT
// Toi
// Output
// Yeu PTIT