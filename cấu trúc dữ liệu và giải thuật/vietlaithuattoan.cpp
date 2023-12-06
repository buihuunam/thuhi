//viết lại thuật toán
#include<iostream>
using namespace std;
//function prototype
int timkiem();
//thuật toán tìm kiếm
int timkiem(int arr[], int n, int x){
    for(int i = 0; i < n; i++){
        if(arr[i] == x){
            return i;// trả về vị trí nếu giá trị x được tìm thấy
        }
    }
    return -1;
}
int main(){
    int arr[] = {1,3,5,7,9};
    int x;
    cout << "nhap gia tri can tim: ";
    cin >> x;
    int n = sizeof(arr) / sizeof(arr[0]);// trả về số phần tử trong mảng
    int vitri = timkiem(arr,n,x);
    cout << "vi tri cua gia tri da nhap la: " << vitri << endl;
    return 0;
}