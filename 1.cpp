#include<bits/stdc++.h>
using namespace std;
vector<string> xau1, xau2;
vector<string> bd(string a)
{
    vector<string> xau;
    string s="";
    for(int i=0; i<a.length(); i++)
    {
        if(a[i]==' ') 
        {
            if(s.length()>0) xau.push_back(s);
            s="";
        }
        else s=s+a[i];
    }
    if(s.length()>0) xau.push_back(s);
    return xau;
}
void Run()
{
    string a, b;
    getline(cin, a);
    cin>>b;
    xau1=bd(a);
    for(int i=0; i<xau1.size(); i++)
    {
        if(xau1[i]!=b) cout<<xau1[i]<<' ';
    }

}
int main()
{
    int T=1;
    //cin>>T;
    while(T--) Run();
    return 0;
}