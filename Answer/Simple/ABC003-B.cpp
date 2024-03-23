#include <bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    array<char,7> c={'a','t','c','o','d','e','r'};
    cin >> a >> b;
    for(int i=0;i<a.size();i++){
        if(a.at(i)!=b.at(i)){
            if(a.at(i)=='@'){
                for(int j=0;j<7;j++){
                    if(b.at(i)==c.at(j)){
                        goto fore;
                    }
                }
            }else if(b.at(i)=='@'){
                for(int j=0;j<7;j++){
                    if(a.at(i)==c.at(j)){
                        goto fore;
                    }
                }
            }
            cout << "You will lose\n";
            return 0;
        }
        fore:
        a;
    }
    cout << "You can win\n";
}
//atcoder.jp/contests/abc003/submissions/32078495