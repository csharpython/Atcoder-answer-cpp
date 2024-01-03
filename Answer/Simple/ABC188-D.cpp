#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,p,ans=0,cpd=0,day=0;
    cin>>n>>p;
    vector<long long> a(n);
    vector<long long> b(n);
    vector<long long> c(n);
    vector<pair<long long,long long>> d(n*2+1);
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i]>>c[i];
        a[i]--;
        d[2*i]=make_pair(a[i],c[i]);
        d[2*i+1]=make_pair(b[i],-c[i]);
    }
    d[2*n]=make_pair(2e+9,0);
    sort(d.begin(),d.end());
    for(int i=0;i<n*2+1;i++){
        if(day!=d[i].first){
            ans+=min(cpd,p)*(d[i].first-day);
            day=d[i].first;
        }
        cpd+=d[i].second;
    }
    cout<<ans;
}
/*
atcoder.jp/contests/abc188/submissions/48996284
公式解説っぽいやり方
*/