#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int summa, genus; // 油量，油种
    char opera; // 服务种类
    cin >> summa >> genus >> opera;
    double valor; // 单价
    switch(genus){
        case 90: valor = 6.95; break;
        case 93: valor = 7.44; break;
        case 97: valor = 7.93; break;
    }
    if(opera == 'm') cout << fixed << setprecision(2) << (0.95 * valor * summa + 0.005);
    else cout << fixed << setprecision(2) << (0.97 * valor * summa + 0.005);
    return 0;
    
    
    /*压缩版
      int summa, genus;
      char opera;
      cin >> summa >> genus >> opera;
      cout << fixed << setprecision(2) << ((opera == 'm' ? 0.95 : 0.97) * (genus == 90 ? 6.95 : (genus == 93) ? 7.44 : 7.93) * summa + 0.005);
      return 0;
    */
}
//欢迎扫描repo里的二维码赞助我
