#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;
long long n;
vector<long long> a;

void Run()
{
    cin>>n;
    a.clear();  //Để bỏ đi tất cả các phần tử của vector:
    for(int i=0; i<n; i++)
    {
        long long b;
        cin>>b;
        if(b!=0) a.push_back(b); // 
    }
    for(int i=0; i<a.size(); i++)
    {
        cout<<a[i]<<' ';
    }
    for(int i=0; i<n-a.size(); i++) cout<<"0"<<' ';
    cout<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}


// Input:
// 2

// 7

// 1  2 0  0  0  3  6

// 6
// 0  1  0  2  0  3
// Output:

// 1  2  3  6  0  0  0

// 1  2  3  0  0  0