#include<iostream>

using namespace std;

bool enPrim(long long exm); // 声明函数

int lin; // 行数

int main(){
    long long exm; // 待检测数值
    cin >> lin; // 输入要判断的行数
    while(cin >> exm && lin) cout << (enPrim(exm) ? "Yes" : "No") << endl;
      // while(cin >> exm && lin) 意为循环输入数值到exm，并且满足条件lin >= 0（可以简写为lin），即（待接收的）行数不为0
      /* (enPrim(exm) ? "Yes" : "No") 即
          if(enPrim(exm) == true) return "Yes";
          else return "No";
          将数值exm代入函数enPrim()判断，取得其返回值  */
    return 0;
}

bool enPrimus(long long exm){ // 判断质数的函数
    lin--; // 每接收一次，（待接收的）行数减一
    if(exm == 1) return false; // 1为特例，若不加这一个判断，1会被误认为质数
    else{
        for(long fact = 2; fact * fact <= exm; fact++) if(!(exm % fact)) return false; 
          // 取变量fact递增检测是否为exm的因数，若取到其因数，则说明不是质数，返回false
        return true;
    }
}
