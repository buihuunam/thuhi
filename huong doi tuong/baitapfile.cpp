#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream file;
    file.open("vdfile.txt");
    //xuat ra cac gia tri trong file
    int a[10];
    int n;
    file >> n;
    cout << "gia tri cua n la: " << n << endl;
    for(int i = 0; i <= n; i++){
        file >> a[i];
    }
    for(int i = 0; i <= n; i++){
        cout << "gia tri thu " << i+1 << "la " << a[i] << endl;
    }
    file.close();
    system("pause");
    return 0;
}