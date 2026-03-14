nhập vào 2 số nguyên, in ra tổng, hiệu, tích, thương(lấy độ chính xác với 4 chữ số) của 2 số đó.
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
int a,b;
scanf("%d%d",&a,&b);
int tong=a+b;
int hieu=a-b;
long long tich=1ll*a*b;
printf("%d\n%d\n%lld\n",tong,hieu,tich);
if(b==0)
printf("INVALID");
else{
double thuong=(double)a/b;
printf("%.4lf\n",thuong);
}
return 0;
}
