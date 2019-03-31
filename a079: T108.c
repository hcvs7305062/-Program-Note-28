#include <stdio.h>
#include <stdlib.h>

int main () 
{
double a, b, c, d, e, f;
printf("請輸入第一個浮點數: ");
scanf("%lf", &a);                        //把%f改成%lf
printf("請輸入第二個浮點數: ");
scanf("%lf", &b);                        //把%f改成%lf
printf("請輸入第三個浮點數: ");
scanf("%lf", &c);                        //把%f改成%lf
printf("請輸入第四個浮點數: ");
scanf("%lf", &d);                        //把%f改成%lf
printf("請輸入第五個浮點數: ");
scanf("%lf", &e);                         //把%f改成%lf
printf("請輸入第六個浮點數: ");
scanf("%lf", &f);                         //把%f改成%lf 

printf("\n向右靠齊\n");
printf("%10.2f %10.2f %10.2f\n", a, b, c);    //把("%10f %10f %10f\n", a, b, c)改成("%10.2f %10.2f %10.2f\n", a, b, c)
printf("%10.2f %10.2f %10.2f\n", d, e, f);    //把("%10f %10f %10f\n", d, e, f)改成("%10.2f %10.2f %10.2f\n", d, e, f)

printf("\n\n向左靠齊\n");
printf("%-10.2f %-10.2f %-10.2f\n", a, b, c);    //把("%-10f %-10f %-10f\n", a, b, c)改成("%-10.2f %-10.2f %-10.2f\n", a, b, c)
printf("%-10.2f %-10.2f %-10.2f\n", d, e, f);    //把("%-10f %-10f %-10f\n", d, e, f)改成("%-10.2f %-10.2f %-10.2f\n", d, e, f)

return 0;
}
