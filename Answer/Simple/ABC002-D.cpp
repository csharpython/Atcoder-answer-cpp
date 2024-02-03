#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,tomoa,tomob,max=1,count;
    cin >> n >> m;
    vector<int> team(n);
    vector<vector<bool>> siriai(n, vector<bool>(n));
    for(int i=0;i<m;i++){
        cin >> tomoa >> tomob;
        siriai[tomoa-1][tomob-1]=true;
    }
    for(int bit=0;bit<(1<<n);bit++){
        count=0;
        for(int i=0;i<n;i++){
            if(bit&(1<<i)){
                team[count]=i;
                count++;
            }
        }
        for(int i=0;i<count;i++){
            for(int j=i+1;j<count;j++){
                if(!siriai[team[i]][team[j]])goto bad;
            }
        }
        if(count>max)max=count;
        bad:{}
    }
    cout << max << endl;
}
//atcoder.jp/contests/abc002/submissions/49951460
//Bit全探索