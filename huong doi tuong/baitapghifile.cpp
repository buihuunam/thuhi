#include<iostream>
#include<fstream>
using namespace std;
int main(){
    //khai bien nhap file
    ofstream file("vdfile.txt");
    int a[10] = {1, 2, 2, 4, 5, 6, 7, 8, 9, 10};
    for(int i = 0; i <= 10; i++){
        file << "gia tri cua so thu " << i+1 << "la" << a[i] << endl;
    }
    file.close();
}