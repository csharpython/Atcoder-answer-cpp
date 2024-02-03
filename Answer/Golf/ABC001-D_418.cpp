#include <bits/stdc++.h>
using namespace std;int n,s,e,f,i,j;string c(int x){return((x>9)?"":"0")+to_string(x);}int main(){string a;vector<bool> z(290);cin>>n;for(;i<n;i++){cin>>a;for(j=stoi(a.substr(0,2))*12+stoi(a.substr(2,2))/5;j<ceil(stoi(a.substr(5,2))*12+stoi(a.substr(7,2))/5.0);j++)z[j]=1;}for(i=0;i<290;i++){if(z[i]*!f){cout<<c(i/12)<<c((i*5)%60)<<"-";f=1;}if(f*!z[i]){cout<<c(i/12)<<c((i*5)%60)<<endl;f=0;}}}
/*
418 Bytes (Excluded comment)
atcoder.jp/contests/abc001/submissions/49920904
*/