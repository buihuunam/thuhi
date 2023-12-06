//viết hàm tìm giá trị lớn nhất trong mảng
#include<iostream>
using namespace std;
//function prototype
void nhapmang();
int giatrilonnhat();
void nhapmang(int arr[]){
    for(int i = 0; i<10; i++){
        cout << "phan tu thu " << i << "la: ";
        cin >> arr[i];
    }
}
int giatrilonnhat(int arr[]){
    int largest;
    for (int i = 0; i< 10; i++){
        if(largest < arr[i]){
            largest = arr[i];
        }
    }
    return largest;
}
int main(){
    int arr[10];
    nhapmang(arr);
    int max = giatrilonnhat(arr);
    cout << "gia tri lon nhat la: " << max << endl;
    return 0;
}