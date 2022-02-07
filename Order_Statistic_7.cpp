#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n, k, x;
vector<ll> a, l;
void Run()
{
    cin>>n>>k;
    n++;
    a.clear();
    a.resize(n);
    l.clear();
    l.resize(n);
    for(int i=1; i<n; i++) cin>>a[i];
    stack<ll> st;
    for(int i=1; i<n; i++)
    {
        while(!st.empty()&&a[i]>=a[st.top()]) st.pop();
        l[i]=st.empty()?0:st.top();
        st.push(i);
    }
    for(int i=k; i<n; i++)
    {
        if(i-l[i]>=k) cout<<a[i]<<' ';
        else
        {
            x=l[i];
            while(l[x]>i-k)
            {
                x=l[x];
            }
            cout<<a[x]<<' ';
        }
    }
    cout<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}