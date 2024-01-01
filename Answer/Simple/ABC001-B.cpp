#include <iostream>
using namespace std;
int main(){
	int a;
	cin>>a;
	if(a<100) cout<<"00";
	else if(a<1000) cout<<"0"<<a/100;
	else if(a<5001) cout<<a/100;
	else if(a<30001)cout<<a/1000+50;
	else if(a<70001)cout<<a/5000+74;
	else cout<<89;
	cout<<endl;
}
/*
atcoder.jp/contests/abc001/submissions/31701194
一部改変
*/