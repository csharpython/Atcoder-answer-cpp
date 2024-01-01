#include <bits/stdc++.h>
using namespace std;
int main(void){
    int deg,diw;
    array<string, 17> a={"N","NNE","NE","ENE","E","ESE","SE","SSE","S","SSW","SW","WSW","W","WNW","NW","NNW","N"};
    array<int, 12> b={15,93,201,327,477,645,831,1029,1245,1467,1707,1959};
    cin >> deg >> diw;
    if(diw<15){
        cout << "C 0\n";
    }else{
        for(int i=0;i<17;i++){
            if(112.5+225*i>deg){
                cout << a[i] << " ";
                break;
            }
        }
        for(int i=0;i<12;i++){
            if(b.at(i)>diw){
                cout << i << endl;
                return 0;
            }
        }
        cout << "12\n";
    }
}
/*
atcoder.jp/contests/abc001/submissions/31704301
*/