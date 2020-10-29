#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double eps; // 精确度
    cin >> eps;
    double summa = 4.0; // 该项用来存总和，4.0是第一项的四倍
    for(int ind = 3; int(1000000 / (double)(ind - 2)) >= int(1000000 * eps); ind += 2)
      // 从第二项开始算，乘1000000是将浮点数化为整数防止精度误差，注意计算除法时要将运算元转化为浮点数
      // 每项绝对值的分母差为2，所以每一步ind += 2
      // 注意当项的绝对值小于精确度时，该项仍然要算入，因此判定的时候使用1 / (ind - 2)
        summa += (4 * ((ind + 1) % 4 ? 1 : -1) / (double)ind);
        // 可以发现当某一项绝对值的分母为4的倍数-1时，项为负，因此使用((ind + 1) % 4 ? 1 : -1)
        // 相当于说 if((ind + 1) % 4 == 1) 成立时返回1，否则返回-1，与后面部分相乘即可改变正负
        // 别忘了* 4
    cout << "Pi = " << fixed << setprecision(4) << summa;
    return 0;
}
