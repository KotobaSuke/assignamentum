#include<iostream>
using namespace std;

int main(){
    int sA, sB, sC;
    cin >> sA >> sB >> sC;
    cout << (sA == sB ? 'C' : (sA == sC ? 'B' : 'A'));
      
      \* 结构：
          sA == sB ?
          ┣━━ YES:  sC为不同，故返回'C'
          ┗━━ NO:   sA == sC ?
              ┣━━ YES:  sC为不同，故返回'B'
              ┗━━ NO:   'C'和'B'均已排除，故返回'A'
      *\
    return 0;
}
