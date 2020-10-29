#include<iostream>
#include<iomanip>
using namespace std;

bool enPrimus(long long exm); // 声明函数原型，为了使代码结构更清晰此处定义一个判断是否为质数的函数，若为质数返回true，否则返回false

int main(){
    long long lat; // 数值的范围
    cin >> lat;
    int quant = 0; // 输出了多少个数字
    for(long long index = 2; index <= lat; index++){
        if(enPrimus(index)){ 
        // if(enPrimus(index))是if(enPrimus(index) == true)的简写
        // 将循环的变量index代入函数enPrimus()进行判断，如果为真，执行以下语句
        
            cout << setw(6) << index; // 调整格式后输出质数
            quant++; // 输出的数量+1
            if(!(quant % 10))   cout << endl; // 若输出的数字数量为10的倍数，则换行
        }
    }
    return 0;
}

bool enPrimus(long long exm){ // 函数对代入的参数exm进行判断
    for(long fact = 2; fact * fact <= exm; fact++){ // 从2开始取除数fact，每次加一，直到除数大于被除数的平方根【见下注释】时结束循环
        if(!(exm % fact)) return false;
          // if(!(exm % fact))是if(exm % fact == 0)的简写，即若两数整除，说明此时除数是被除数的因数，即不为质数
    }
    return true; // 循环后如果都没有找到因数，则为质数
    
    【注】：对于任一个数字x，只需要判断小于其平方根的正整数，因为大于其平方根的正整数如果是因数必然有另一个因数与之相乘得数字x本身
}
