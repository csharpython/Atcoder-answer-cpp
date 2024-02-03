#include <bits/stdc++.h>
using namespace std;
int main(){
    double a,b,c,d,e,f;
    cin >> a >> b >> c >> d >> e >> f;
    cout << fixed<<setprecision(10)<< fabs((c-a)*(f-b)-(d-b)*(e-a))/2.0;
}
//atcoder.jp/contests/abc002/submissions/31744616