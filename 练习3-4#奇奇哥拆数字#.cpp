#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
// 这里使用的是数学方法，还有将输入的数字转为字符串的做法，请自行查询资料（关键词「std::to_string」）

int main(){
    int importum;
    cin >> importum;
    cout << (importum / 1000) << " "; // 因为输入恒定为六位，因此取出前三位只需除以1000后向下取整
    cout << setw(3) << setfill('0') << (importum - 1000 * (importum / 1000));
    // 用前三位对应的整千数，与原数字作差可以得到后三位，但是后三位可能以0开头（如114005），因此要额外填充字符'0'
    // setfill(char)函数和setw()配合使用，当输出的字符串长度不够时，用相应的字符char填充（本例为'0'）
    return 0;
}
