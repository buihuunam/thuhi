#include<iostream>
using namespace std;
class martin{
    public:
    int tong(int a, int b){
        cout << "kieu int" << endl;
        return a+b;
    }
    float tong(float c, float d){
        cout << "kieu float" << endl;
        return c+d;
    }
};
int main(){
    martin cal;
    int a = 1, b = 2;
    float c = 3.5, d = 4.33;
    cout << "a + b = " << cal.tong(a, b) << endl;//thể hiện tính đa hình 
    cout << "c + d = " << cal.tong(c, d) << endl;
    return 0;
}