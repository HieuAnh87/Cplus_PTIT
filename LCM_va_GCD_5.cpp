#include<iostream>
#include<cmath>

using namespace std;
long long a, x, y;

long long GCD(long long a, long long b)
{
    if(a==0||b==0) return a+b;
    while(a*b != 0){
        if(a>b)  a%=b;
        else     b%=a;
    }
    return a+b;
}

void Run()
{
    cin >> a >> x >> y;
    for(int i=1; i<=GCD(x, y); i++)
    {
        cout<<a;
    }
    cout<<'\n';
}

int main()
{
    int t;
    cin>>t;
    while(t--) Run();
    return 0;
}
