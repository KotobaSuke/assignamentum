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
    if(opera == 'm') cout << fixed << setprecision(2) << int(100 * (0.95 * valor * summa + 0.005)) / 100.0;
    // 因为要四舍五入保留两位小数，只用fixed和setprecision(2)会产生浮点精度问题，见篇末注释【*】
    else cout << fixed << setprecision(2) << int(100 * (0.97 * valor * summa + 0.005)) / 100.0;
    return 0;
    
    /*
    对浮点变量varF保留N位小数四舍五入的通用方法
      取varF1 = varF + pow(10, -N) / 2 【如果保留3位，就取varF + 0.0005】
      取varF2 = varF1 * pow(10, N) 【如果保留3位，就取varF1 * 1000】
      向下取整得varF3 = int(varF2)
      取varF4 = varF3 / pow(10, N) 【如果保留3位，就取varF3 / 1000.0，注意分母要写成浮点形式】
        即为所求
    */
    
    /*压缩版
      int summa, genus;
      char opera;
      cin >> summa >> genus >> opera;
      cout << fixed << setprecision(2) << int(100 * ((opera == 'm' ? 0.95 : 0.97) * (genus == 90 ? 6.95 : (genus == 93) ? 7.44 : 7.93) * summa + 0.005)) / 100.0;
      return 0;
    */
}

// 【*】cout << fixed << setprecision(2) << 1.335; 运行会输出 1.33 而不是正常的四舍五入结果 1.34

//欢迎扫描repo里的二维码赞助我
