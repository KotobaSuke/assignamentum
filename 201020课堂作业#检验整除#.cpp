#include <iostream>

using namespace std;

int main() {
    int imp;
    cin >> imp;
    cout << ((imp % 2 == 0) && (imp % 3 == 0)) << '\n';  // 均可整除
    cout << ((imp % 2 == 0) || (imp % 3 == 0)) << '\n';  // 至少一个可整除
    cout << ((imp % 2 == 0) != (imp % 3 == 0));          // 只有一个可整除
}

// 欢迎扫描 repo 里的二维码赞助我
