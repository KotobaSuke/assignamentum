#include<iostream>
using namespace std;

int main(){
    int ann, men, di, summa = 0; // 年，月，日，第几日
    cin >> ann >> men >> di;
    int dM[12] = {31, (ann % 4 ? 28 : (ann % 100 ? 29 : (ann % 400 ? 28 : 29))), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
      // 利用数组储存每个月的日数，二月的日数使用?:运算符判断年份是否为闰年
    for(int ind = 0; ind < men - 1; ind++)    summa += dM[ind];
      // 利用for函数将输入的月份之前的各个月份日数加起来，注意n月对应的数组元素是dM[n-1]
      // 因此输入n月时，要加到n-1月，即加到dM[n-2]
    summa += di; // 再将本月的日数加上
    cout << summa;
    return 0;
}
