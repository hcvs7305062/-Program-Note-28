#include <iostream>
using namespace std; 
int main（）
{ 
int N，A = 0，l; //宣告N，A = 0，l 
cin >> N; //輸入N.

while（N！= 0）//迴圈：當N不等於零時，執行{}內動作
{

L = N％10; //將N / 10的餘數代入l 
N = N / 10; //將N / 10帶入N 
A = A + 1; //將A + 1帶入A.

} 
cout << A; //輸出A 
}
