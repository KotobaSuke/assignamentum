#include<iostream>

using namespace std;

int main(){
    int imp; // 输入的数字
    cin >> imp;
    while(imp){   // while(imp)即while(imp != 0)
        cout << imp % 10; // 取imp除以10的余数，即最后一位，并且立刻输出
        imp /= 10; // 让imp（整）除以10，相当于去掉imp最后一位，当imp还剩最后一位，这个操作使之变成0，与while(imp)矛盾，循环结束
    }
    return 0;
    
    // 本题的范围是正整数，若题目还包括0的话，0得例外考虑
}
