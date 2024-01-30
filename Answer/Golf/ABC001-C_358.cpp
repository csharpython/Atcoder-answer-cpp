#import<bits/stdc++.h>
using namespace std;main(){int g,w,i;array<string,17>a={"N","NNE","NE","ENE","E","ESE","SE","SSE","S","SSW","SW","WSW","W","WNW","NW","NNW","N"};array<int,13>b={15,93,201,327,477,645,831,1029,1245,1467,1707,1959,99999};cin>>g>>w;if(w<15)cout<<"C 0\n";else{cout<<a[ceil(g/225.0-0.5)]<<" ";for(i=0;;i++)if(b[i]>w){cout<<i<<"\n";break;}}}
/*
358 bytes(Excluded comment)
atcoder.jp/contests/abc001/submissions/49815451
*/