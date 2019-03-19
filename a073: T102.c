#include <stdio.h>
#include <stdlib.h>

int main()
{ 
     float a, b,total;         //將double改成float(浮點數)   宣告total
     printf("請輸入兩個浮點數:");      
     scanf("%f %f", &a, &b);     //將%d %d改成 %f %f  a改成%a b改成%b
     total = a+b;
     printf("total=%f", total);
     return 0;
}
