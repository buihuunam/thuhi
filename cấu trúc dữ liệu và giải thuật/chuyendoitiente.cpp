//viết chuong trình chuyển đổi tiền tệ
#include <iostream>
using namespace std;
int main(){
    const double YEN_PER_DOLLAR = 98.93;
    const double EUROS_PER_DOLLAR = 0.74;
    double dollar;
    cout << "nhap so tien can quy doi: ";
    cin >> dollar;
    double yen = dollar * YEN_PER_DOLLAR;
    double euros = dollar * EUROS_PER_DOLLAR;
    cout << "gia tri sau khi doi sang yen la: " << yen << endl;
    cout << "gia tri sau khi doi sang euros la: " << euros << endl;
    return 0;
}