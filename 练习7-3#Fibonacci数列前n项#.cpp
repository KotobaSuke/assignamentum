#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

int main(){
    int pr = 1, sc = 1, fn; // pr和sc分别是连续两项的前后项，fn是最大项数
    cin >> fn; // 输入最大项数
    cout << "1         " << (fn - 1 ? "1         " : "");
      /* Fibonacci数列的前2项为特例，所以预先输出，需要注意，如果最大项数为1，只需要输出"1         ",这一句等价于
            if(fn == 1) cout << "1         ";
            else cout << "1         1         ";
            （注意空格数量）*/
    for(int trm = 3; trm <= fn; trm++){ // trm是当前项数，前面2项已经例外对待，现在是第三项，所以trm初始值定为3
        pr = (sc += pr) - pr;
        
        /* 这一句不太容易理解，若要简单地说，可以另外声明连续三项的第三项为tr，则这个过程可以视为
          将前面两项相加，放进第三项，tr = pr + sc;
          让第一项变成第二项，pr = sc;
          让第二项变成第三项，sc = tr;
          */
          
        cout << left << setw(10) << sc << (trm % 4 ? "" : "\n");
         // 使用left使之左对齐，(trm % 4 ? "" : "\n")表示「对trm取除以4的余数，若为非0（即当前项数不是4的倍数），返回""（空字符串），若为0（即当前项数为4的倍数），返回换行符"\n"」
    }
    return 0;
}
