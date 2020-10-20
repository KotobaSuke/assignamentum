#include<iostream>
using namespace std;

int main(){
    int imp;
    cin >> imp;
    cout << ((imp % 2 == 0) && (imp % 3 == 0)) << endl; // 均可整除
    cout << ((imp % 2 == 0) || (imp % 3 == 0)) << endl; // 至少一个可整除
    cout << ((imp % 2 == 0) != (imp % 3 == 0)); // 只有一个可整除
    return 0;
}

// 欢迎扫描repos里的二维码赞助我
