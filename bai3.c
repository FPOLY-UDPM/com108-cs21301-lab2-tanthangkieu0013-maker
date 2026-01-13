/******************************************************************************
 * Họ và tên: [Kiều Tân Thắng]
 * MSSV:      [PS47908]
 * Lớp:       [COM108-CS21301]
 *****************************************************************************/

// BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HÌNH TRÒN 
// Input: Nhập vào bán kính của đường tròn 
// Output: Hiển thị ra màn hình chu vi và diện tích của hình tròn

#include <stdio.h>

int main(){
    int pi = 3.14;
    float r;
    printf("Nhập bán kính: ");
    scanf("%f", &r);
    printf("Chu vi hình tròn là: %.2f\n", 2 * pi * r);
    printf("Diện tích hình tròn là: %.2f\n", pi * (r * r));
    return 0;

    // Nhập dữ liệu


    // Xử lý, tính toán

    // Hiển thị kết quả


}