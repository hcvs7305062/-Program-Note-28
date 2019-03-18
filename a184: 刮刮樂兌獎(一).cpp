#include <iostream>
using namespace std;

int main(){

int X,Y,Z;      宣告 X,Y,Z

cin>>X;         輸入X

Y=X/10;         將X/10代入Y

Z=X%10;         將X/10的餘數代入Z

if(Z==2||Z==5||Z==8) cout<<"200";         當 Z等於2 或 Z等於5 或 Z等於8時   輸出 200

else if(Y%2==1) cout<<"100";              否則  當Y/2的餘數等於1時   輸出 100

else if(Y==Z) cout<<"50";                 否則  當Y等於Z時    輸出 50

else cout<<"0";               否則  輸出 0

}
