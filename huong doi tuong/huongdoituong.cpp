#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
//tạo lớp
class SinhVien{
    //access modifier
    private:
    //thuộc tính
    string ngaysinh,cccd,ten;
    double diemthanhphan;
    //access modifier
    public:
    // SinhVien();//hàm khởi tạo(constructor)
    SinhVien(string,string,string,double);//nạp chồng hàm khởi tạo(constructor)
    //các phương thức (hành vi)
    void dihoc();
    void nhap();
    void xuat();
    void nghi();
};

//nạp chồng hàm 
SinhVien::SinhVien(string date, string id, string name, double point){
    cout << "ham khoi tao co tham so" << endl;
    this-> ngaysinh = date;//con trỏ this
    this -> cccd = id;
    this -> ten = name;
    this -> diemthanhphan = point;
}

//xây dựng(implemenation)
void SinhVien::dihoc(){
    cout << "viet" << endl;
    cout << "ngu" << endl;
}

void SinhVien::nghi(){
    cout << "di choi" << endl;
    cout << "an cut" << endl;
}

//tạo hàm nhập
void SinhVien::nhap(){
    cout << "ngay sinh" << endl;
    cin >> ngaysinh;
    cout << "nhap id" << endl;
    cin >> cccd;
    cout << "nhap ten" << endl;
    cin >> ten;
    cout << "nhap diem thanh phan" << endl;
    cin >> diemthanhphan;
}

void SinhVien::xuat(){
    cout << ngaysinh << endl;
    cout << cccd << endl;
    cout << ten << endl;
    cout << diemthanhphan << endl;
}

//hàm chính 
int main(){
    SinhVien x();//khi khai báo có tham số thì phải thêm tham số cho dù đã có 1 hàm ko chứa tham số
    x.nhap();
    x.xuat();
    x.nghi();
    x.dihoc();
    return 0;
}