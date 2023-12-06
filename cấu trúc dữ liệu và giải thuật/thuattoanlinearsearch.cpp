//viết thuật toán tìm kiếm
#include<iostream>
using namespace std;
//hàm viết thuật toán tìm kiếm
int linearsearch(int arr[], int n, int x){
    for(int i = 0; i < n; i++){
        if(arr[i] == x){
            return i;
        }
    }
    return -1;
}
//Hàm để trả về giá trị đã nhập có thuộc trong mảng ko
int main(){
    int arr[] = {1,2,5,54,66,21};
    int x;
    cout << "nhap x=" << endl;
    cin >> x;
    //
    int n = sizeof(arr)/ sizeof(arr[0]);
    int ketqua = linearsearch(arr,n,x);
    //nếu số đã nhập ko nằm trong mảng thì sẽ trả về
    if(ketqua == -1){
        cout << "gia tri khong nam trong mang";
    }
    // còn lại là phần tử trong mảng
    else{
        cout << "gia tri nam trong mang";
    }
   return 0; 
}