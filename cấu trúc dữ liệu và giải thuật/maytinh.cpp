//viết chương trình tạo ra máy tính đơn giản
#include<iostream>
using namespace std;
//hàm thủ tục(function prototype)
double cong(double a, double b);
double tru(double a, double b);
double nhan(double a, double b );
double chia(double a, double b);
//hàm tính tổng
double cong(double a, double b){
    return a + b;
}
//hàm tính hiệu
double tru(double a, double b){
    return a - b;
}
//hàm tính tích
double nhan(double a, double b ){
    return a * b;
}
//hàm tính thương
double chia(double a, double b){
    return a / b;
}
//hàm lấy dư
int du(int a, int b);
int main(){
    double a,b,c;
    cout << "nhap a: ";
    cin >> a;
    cout << "nhap b: ";
    cin >> b;
    cout << "ban hay chon phep tinh: " << endl;
    cout <<"1. Phep cong." << endl;
    cout <<"2. Phep tru." << endl;
    cout <<"3. Phep nhan." << endl;
    cout <<"4. Phep chia." << endl;
    cout <<"5. Phep lay du." << endl;
    int choice;
    cin >> choice;
    if(choice == 1){
        c = cong(a,b);
        cout << "ket qua: " << c << endl;
    }
    else if(choice == 2){
        c = tru(a,b);
        cout << "ket qua: " << c << endl;
    }
    else if(choice == 3){
        c = nhan(a,b);
        cout << "ket qua: " << c << endl;
    }
    else if(choice == 4){
        c = chia(a,b);
        cout << "ket qua: " << c << endl;
    }
    else if(choice == 5){
        c = static_cast<int>(a) % static_cast<int>(b);
        cout << "ket qua: " << c << endl;
    }
    else{
        cout << "error!" << endl;
    }
    return 0;
}