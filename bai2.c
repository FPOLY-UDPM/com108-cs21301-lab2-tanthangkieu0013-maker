/******************************************************************************
 * Họ và tên: [Kiều Tân Thắng]
 * MSSV:      [PS47908]
 * Lớp:       [COM108-CS21301]
 *****************************************************************************/

// BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HCN 
// Input: Nhập vào từ bàn phím chiều dài và chiều rộng 
// Output: Hiển thị ra màn hình chu vi và diện tích của hình chữ nhật

#include <stdio.h>

int main(){
    float dai, rong;
    printf("Nhập chiều dài: ");
    scanf("%f", &dai);
    printf("Nhập chiều rộng: ");
    scanf("%f", &rong);
    printf("Chu vi hình chữ nhật là: %.2f\n", 2 * (dai + rong));
    printf("Diện tích hình chữ nhật là: %.2f\n", dai * rong);
    return 0;

    // Nhập dữ liệu


    // Xử lý, tính toán

    // Hiển thị kết quả


}