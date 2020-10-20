#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main(){
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2; // 注意输入的顺序
    double resultum = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
    // 求幂的符号不能用「^」，这是按位异或符号
    // 求幂用数学函数pow(a1, a2)（请见课本附录），需要使用头文件<math.h>或<cmath>
    // 求平方可以直接使用相应数字乘两次的作法
    cout << fixed << setprecision(2) << resultum;
    return 0;
}
// 欢迎扫描repos里的二维码赞助我
