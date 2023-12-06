//viết chương trình tìm số lớn
#include<iostream>
using namespace std;
int main(){
    float a,b;
    cout << "nhap a: ";
    cin >> a;
    cout << "nhap b: ";
    cin >> b;
    if(a>b){
        cout << "a>b";
    }
    else if(a < b){
        cout << "a<b";
    }
    else{
        cout << "a=b";
    }
    return 0;
}