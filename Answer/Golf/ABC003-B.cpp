#import<bits/stdc++.h>
int i,j;using namespace std;main(){string a,b,c="atcoder@";cin>>a>>b;for(;i<a.size();i++){if(a[i]!=b[i]){if(a[i]==64){for(j=0;j<8;j++)if(b[i]==c[j])goto Z;}if(b[i]==64)for(j=0;j<8;j++)if(a[i]==c[j])goto Z;cout<<"You will lose\n";exit(0);}Z:;}cout<<"You can win\n";}
/*
	288 bytes
	atcoder.jp/contests/abc003/submissions/51535220
*/