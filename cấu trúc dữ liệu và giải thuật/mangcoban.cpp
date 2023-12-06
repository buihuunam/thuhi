//tìm giá trị lớn nhất trong 10 số trong mảng đã nhập
#include <iostream>
using namespace std;
int main(){
    int arr[10];
    for (int i = 0; i < 10; i++){
        cout << "nhap phan tu thu " << i << ": ";
        cin >> arr[i];
    }
    int largest;
    for (int i = 0; i < 10; i++){
        if(largest < arr[i]){
            largest = arr[i];
        }
    }
    cout << "gia tri lon nhat trong mang la: " << largest << endl;
    return 0;
}