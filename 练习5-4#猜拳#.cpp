#include<iostream>
#include<string>
using namespace std;

int main(){
    int fic; // 间隔回合数
    cin >> fic;
    string act; // 招式
    int cum = 0; // 当前回合数
    while(cin >> act){
        cum++; // 回合数+1
        if(act == "End")    exit(0);  // 若为"End"则强制结束程序，使用函数exit(0);
        // 注意只有string类型才能用==判断相等，char[]以及char *类型要用strcmp()
        
        // 若不为"End" ↓
        else    cout << (cum % (fic + 1) ? (act == "ChuiZi" ? "Bu" : (act == "Bu" ? "JianDao" : "ChuiZi")) : act) << endl;
        
        /* 结构图：
        
            每fic局需要平局一次，平局的回合数为fic + 1, 2 * (fic + 1), ..., n * (fic + 1)
            
            所以：
              cum是不是(fic + 1)的倍数 ?
              ┣━ YES: 平局，返回输入的招式
              ┗━ NO:  是"ChuiZi" ?
                 ┣━ YES: 返回"Bu"
                 ┗━ NO:  是"Bu"?
                    ┣━ YES: 返回"JianDao"
                    ┗━ NO: 返回"ChuiZi"
                    
            这个结构改写为[if — else if — else]语句或者[switch — case]语句会更直观
        
        */
    }
    return 0;
}
