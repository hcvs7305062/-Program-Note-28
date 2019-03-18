#include <iostream>

using namespace std;

int main()
{
int N;      //宣告N
cin>>N;     //輸入N
  if(N%4!=0)    //當 N/4的餘數不等於零
cout<<"NO";      //則輸出 NO
if(N%4==0&&N%100!=0)     //當 N/4的餘數等於0 和 N/100的餘數不等於0
cout<<"YES";     //則輸出 YES
if(N%100==0&&N%400!=0)   //當 N/100的餘數等於0 和 N/400的餘數不等於0
cout<<"NO";      //則輸出 NO
if(N%400==0)     //當 N/400的餘數等於0
cout<<"YES";      //則輸出 YES
}
