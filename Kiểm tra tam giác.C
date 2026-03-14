Cho 3 cạnh a, b, c của một tam giác, nếu tam giác đã cho là tam giác đều thì in ra 1, tam giác cân thì in ra 2, tam giác vuông thì in ra 3, tam giác thường in ra 4, trường hợp tam giác nhập vào không hợp lệ thì in ra "INVALID"

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
long long a,b,c;
scanf("%lld %lld %lld",&a,&b,&c);
if(a>0&&b>0&&c>0&&(a+b>c&&a+c>b&&b+c>a)){//a,b,c phải là số dương thì phải lớn hơn 0
if(a==b&&b==c){//tam giác đều
printf("1");
}
else if(a==b&&a==c&&b==c){//tam giác cân
printf("2");
}
else if(a*a==b*b+c*c||b*b==a*a+c*c||c*c==a*a+b*b){//
printf("3");
}
else{//tam giác thường
printf("4");
}
}
else{
printf("INVALID\n");
}
return 0;
}
