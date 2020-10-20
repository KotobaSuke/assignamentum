#include<iostream>
using namespace std;

int main(){
    long long aleph, beth;
    long long productus;
    while(cin >> aleph >> beth){
        cout << aleph + beth << " ";
        cout << aleph - beth << " ";
        productus = aleph * beth; // 由于两数相乘的最大结果会超过 int 的取值范围，因此应使用 long long 型放置两数的积
        cout << productus << " ";
        cout << aleph / beth << endl;
    }
    return 0;
}
// 欢迎扫描repo里的二维码赞助我
