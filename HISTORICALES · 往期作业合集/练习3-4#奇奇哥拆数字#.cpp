#include<iostream>
#include<iomanip>
#include<math.h>
#include<string>
using namespace std;

int main(){
    
                //方法一   数学方法
    
    int imp;
    cin >> imp;
    cout << (imp / 1000) << " "; // 因为输入恒定为六位，因此取出前三位只需除以1000后向下取整
    cout << setw(3) << setfill('0') << (imp - 1000 * (imp / 1000));
    // 用前三位对应的整千数，与原数字作差可以得到后三位，但是后三位可能以0开头（如114005），因此要额外填充字符'0'
    // setfill(char)函数和setw()配合使用，当输出的字符串长度不够时，用相应的字符char填充（本例为'0'）
    
                //方法二   字符串法
    
    int imp_1;
    cin >> imp_1;
    cout << to_string(imp_1).insert(3, ' ');
    
    // to_string(imp_1) 表示将数值变量imp_1转换为字符串形式，这个函数需要头文件<string>
        // 如 string str = to_string(2.0)，会得到字符串str = "2.0"
    
    // 在字符串后使用.insert(int, char)，表示在第int个（本例为3）字符后面插入相应的字符char（本例为空格）
        // 如 string ln = "ABCDEFG"，操作ln.insert(3, 'X')表示在第三个字符（'C'）后插入字符'X'，即得到"ABCXDEFG"
    
                //方法三   另类做法（不推荐）
    
    for(int index = -3; index <= 3; index++) putchar(index ? getchar() : ' '); // 只需要一行
  
    return 0;
}
// 欢迎扫描repo里的二维码赞助我
