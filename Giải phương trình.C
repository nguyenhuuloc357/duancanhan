Cho 3 số a, b, n. Nhiệm vụ của bạn là xác định xem phương trình ax + by = n có tồn tại cặp nghiệm (x, y) nguyên không âm hay không?

Gợi ý : Duyệt x từ 0 tới n / a => Kiểm tra xem n - a * x có chia hết cho b hay không, nếu có là sẽ tồn tại cặp nghiệm nguyên x, y không âm.
Input 
5 3 14
Output 
YES
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
typedef long long ll;
typedef float f;
typedef double d;
int main(){
int a,b,n;
scanf("%d%d%d",&a,&b,&n);
for(int i=0;i<=n/a;i++){
int r=n-a*i;
if(r%b==0){
printf("YES\n");
return 0;
}
}
printf("NO\n");
return 0;
}
