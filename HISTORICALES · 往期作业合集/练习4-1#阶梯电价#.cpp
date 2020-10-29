#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int elec; // 用电量
    cin >> elec;
    if (elec < 0) cout << "Invalid Value!" << endl;
    else if (elec > 0 && elec <= 50) cout << "cost = " << fixed << setprecision(2) << (0.53 * elec) << endl; // 注意输出格式的空格
    else cout << "cost = " << fixed << setprecision(2) << (26.5 + 0.58 * (elec - 50)) << endl;
    return 0;
}
//欢迎扫描repo里的二维码赞助我
