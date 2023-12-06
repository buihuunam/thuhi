//tìm số lớn nhất trong 4 số
#include <iostream>
using namespace std;
//giả sử a là số lớn nhất trong 3 số
int max(int a, int b, int c){
    if(a>b&&a>c){
        return a;
    }
    else if(b>c){
        return b;
    }
    else{
        return c;
    }
}
int main(){
    int a,b,c;
    cout << "nhap a: ";
    cin >> a;
    cout << "nhap b: ";
    cin >> b;
    cout << "nhap c: ";
    cin >> c;
    cout << "gia tri lon nhat trong 3 so la: " << max(a,b,c) << endl;
    return 0;
}