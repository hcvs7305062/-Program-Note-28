int main () 
{
     int a, b, c;
     printf("請輸入變數a的值: ");
     scanf("%d", &a);
     printf("請輸入變數b的值: ");
     scanf("%d", &b); 
     printf("請輸入變數c的值: ");
     scanf("%d", &c);

     printf("%d\n", 60<=a  && a<100?1:0);     //把|| a<100改成a<100?1:0
     printf("%f\n", (b+1)/10.);           //把b++/10. 改成(b+1)/10.
     printf("%d\n", a>c?a:c);             //把ac:a改成a:c
     return 0;
}
