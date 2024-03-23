#import<iostream>
#define A std::cout<<
main(int a){std::cin>>a;if(a<1e3)A"0"<<a/100;else A(a>5e3?a>3e4?a>7e4?89:a/5e3+74:a/1e3+50:a/100);A"\n";}
/*
145 bytes (Excluded comment)
atcoder.jp/contests/abc001/submissions/49811275
*/