#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define FastIO ios_base::sync_with_stdio(0)
#define IN cin.tie(0)
#define OUT cout.tie(0)
#define CIG cin.ignore()
#define pb push_back
#define pa pair<int,int>
#define f first
#define s second
#define FOR(i,n,m) for(int i=n;i<=m;i++)
#define FORD(i,n,m) for(int i=m;i>=n;i--)
#define reset(A) memset(A,0,sizeof(A))
#define FILEIN freopen("inputDTL.txt","r",stdin)
#define FILEOUT freopen("outputDTL.txt","w",stdout)

long long const mod=1e9+7;
int const MAX=1e5+5;

string Solution(string s, int n){
	int i=0;
	string kq;
	int temp=s[i]-'0';
	while(temp<n){
		temp=temp*10 + (s[++i] - '0');
	}
	while(s.size() > i){
		kq+=(temp/n) + '0';
		temp=(temp%n)*10 + (s[i++]-'0');
	}
	if(kq.length() == 0) return "0";
	return kq;
}

/**********main function**********/

int main(){
    FastIO; IN; OUT;

    int test;
    cin >> test;
    while(test--){
		string s;
		int n;
		cin >> s >> n;
		cout << Solution(s,n) << endl;
    }
    return 0;
}


// Cho hai số rất lớn X và Y được biểu diễn như hai xâu ký tự. Nhiệm vụ của bạn là tìm X / Y?

// Input:

// Dòng đầu tiên đưa vào số lượng test T.
// Những dòng kế tiếp đưa vào các bộ test. Mỗi test gồm hai dòng: dòng thứ nhất đưa xâu X; dòng tiếp theo đưa vào xâu Y.
// T, X, Y  thỏa mãn ràng buộc : 1≤T≤100; 0≤length(X), length(Y)≤103.
// Output:

// Đưa ra số kết quả mỗi test theo từng dòng.
// Input:
// 1
// 8  4
// Output:

// 2