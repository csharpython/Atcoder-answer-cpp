#import<bits/stdc++.h>
int n,x,y,f,i,j;
using namespace std;string A(int x){return (x>9)?to_string(x):"0"+to_string(x);}main(){string a;vector<int>c(290);vector<int>z(290,1);cin>>n;for(i=0;i<n;i++){cin>>a;x=stoi(a.substr(0,2))*12+stoi(a.substr(2,2))/5;y=(stoi(a.substr(5,2))*60+stoi(a.substr(7,2))+4)/5;for(j=x;j<=y;j++){c[j]=1;if(j!=y)z[j]=0;}}for(i=0;i<290;i++){if(c[i]*!f){cout<<A(i/12)<<A((i*5)%60)<<"-";f=1;}if(z[i]*f){cout<<A(i/12)<<A((i*5)%60)<<"\n";f=0;}}}
/*
464 Bytes (Excluded comment)
atcoder.jp/contests/abc001/submissions/49815667
*/