#include <iostream>

using namespace std;

int main()
{
int H,M,n;     //宣告 H,M,n
cin>>H>>M;     //輸入 H,M
n = H*60+M;     //H乘60+M帶入n
if( n>=870 && n<=1010)       //當 n大於等於870 和 n小於等於1010

cout <<"YES";         //輸出 YES
else                  //否則
cout <<"NO";          //輸出 NO
}
