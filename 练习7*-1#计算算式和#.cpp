#include <iostream>
using namespace std;

int potn(int bs, int exp){ // 取幂
    int prod = 1;
    for(int i = 1; i <= exp; i++)
        prod *= bs;
    return prod;
}

int fun(int k, int n){    
    int summa = 0; // 求和
    for(int i = 1; i <= n; i++)
        summa += potn(i, k); // 将幂依次加起来
    return summa;
}

int main(){    
    int k, n;
    cin >> k >> n;
    cout << fun(k, n) << endl;
    return 0;
}
