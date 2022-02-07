#include<bits/stdc++.h>
using namespace std;
vector<string> xau;
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
    string s;
    getline(cin, s);
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]>='A'&&s[i]<='Z') s[i]+=('a'-'A');
    }
    //cout<<s<<'\n';
    xau=bd(s);
    cout<<xau[xau.size()-1];
    for(int i=0; i<xau.size()-1; i++) cout<<xau[i][0];
    cout<<"@ptit.edu.vn";
}
int main()
{
    int T=1;
    //cin>>T;
    while(T--) Run();
    return 0;
}

// Địa chỉ email của cán bộ PTIT được cấp theo nguyên tắc ghép tên với chữ cái đầu tiên của họ và tên đệm. Viết chương trình cho phép tạo các địa chỉ email theo tên cán bộ
// Input
// Chỉ có một xâu ký tự họ tên độ dài không quá 100. 
// Output
// Ghi ra địa chỉ email theo mẫu trong ví dụ. 

// Input
// Nguyen vAn nAM
// Output
// namnv@ptit.edu.vn