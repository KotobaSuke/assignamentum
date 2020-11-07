// 本答案为另类（但是简单的）解法

#include<iostream>
#include<string>
#include<bitset> // bitset类型所需的头文件
using namespace std;

int main(){
    string imp;
    cin >> imp;
    bitset<32> bs (imp); // bitset是一种只能储存0和1的类型，<>内是其长度，bs类似于一般的变量名，(imp)表示将字符串转化为bitset类型
    cout << bs.to_ullong(); 
      // bs.to_ullong()表示将bitset类型的bs转换为对应的十进制超长整型
    return 0;
}
