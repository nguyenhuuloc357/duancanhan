Bạn được cung cấp một bảng hình chữ nhật có kích thước M × N hình vuông đơn vị. Ngoài ra, bạn được cung cấp một số lượng không giới hạn các mảnh domino tiêu chuẩn kích thước 2 × 1.

Bạn được phép xoay các mảnh domino. Bạn được yêu cầu đặt càng nhiều domino càng tốt trên bảng để đáp ứng các điều kiện sau:

Mỗi domino hoàn toàn bao gồm hai hình vuông đơn vị.
Không có hai domino trùng nhau.
Mỗi domino nằm hoàn toàn bên trong bảng. Nó được phép chạm vào các cạnh của bảng.
Tìm số lượng domino tối đa thỏa mãn điều kiện trên.

Gợi ý : Tính xem mỗi cột cần đặt bao nhiêu thanh domino (đặt dọc) => nhân với số cột là ra số thanh domino. Trong trường hợp số hàng của HCN là số chẵn thì số domino trên 1 cột sẽ là m / 2, còn trong trường hợp hàng lẻ thì bạn tính số domino của HCN (m - 1) * n trước rồi xét hàng cuối cùng (đặt ngang)

CÓ FILE TỰ GIẢI BẰNG TAY,MỌI NGƯỜI TỰ XEM FILE CHO HIỂU NHÉ

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
int n,m;
scanf("%d %d",&n,&m);//hàng cột
if(n%2==0){
printf("%lld",1ll*n/2*m);
}
else{
printf("%lld",1ll*n/2*m+m/2);
}
return 0;
}






