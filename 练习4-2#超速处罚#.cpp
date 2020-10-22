#include<iostream>
#include<math.h>

using namespace std;

int main(){
    unsigned int veloc, lim; // veloc：车速； lim：限速
    cin >> veloc >> lim;
    int exc100 = int(0.5 + 100 * (veloc - lim) / double(lim)); // 车速超出限速的百分比，单位为1% （即超速15%时，exc100为15）
    if(veloc * 10 >= lim * 15) // 见篇末注释
        cout << "Exceed " << exc100 << "%. License Revoked" << endl;
    else if(veloc * 10 < lim * 15 && veloc * 10 >= lim * 11) // 见篇末注释
        cout << "Exceed " << exc100 <<"%. Ticket 200" << endl;
    else
        cout << "OK" << endl;
    return 0;
}

// 因为超速比例是四舍五入的，所以不能用于判断超速级别
// 比如反例，超速49.9%时，要输出"Exceed 50%"，但是不能算作「吊销驾照」级别
// 因此此处直接用车速和限速比较，veloc >= lim * 1.5时为「吊销驾照」级别（「罚款」级别同理），但是1.5不是整数，用浮点数运算容易出现精度误差，因此此处通分后作判断
