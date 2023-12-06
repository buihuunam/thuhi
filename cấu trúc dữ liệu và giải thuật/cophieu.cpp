//viết chương trình hiển thị số tiền lãi joe kiếm được sau khi bán cổ phiếu
//khoản hoa hồng joe phải trả cho môi giới
#include<iostream>
using namespace std;
int main(){
    const int SO_PHIEU = 1000;
    double gia_mua_vao = 45.5;
    double gia_ban_ra = 56.9;
    const double PHAN_HOA_HONG = 0.02;
    double tien_phai_tra = gia_mua_vao * SO_PHIEU;
    double tien_thu_duoc = gia_ban_ra * SO_PHIEU;
    double phi_moi_gioi_mua_vao = tien_phai_tra * PHAN_HOA_HONG;
    double phi_moi_gioi_ban_ra = tien_thu_duoc * PHAN_HOA_HONG;
    double tien_lai = gia_ban_ra - gia_mua_vao;
    double khoan_hoa_hong = phi_moi_gioi_ban_ra + phi_moi_gioi_mua_vao;
    cout << tien_phai_tra << endl;
    cout << tien_thu_duoc << endl;
    cout << phi_moi_gioi_mua_vao << endl;
    cout << phi_moi_gioi_ban_ra << endl;
    cout << tien_lai << endl;
    cout << khoan_hoa_hong << endl;
    return 0;
}