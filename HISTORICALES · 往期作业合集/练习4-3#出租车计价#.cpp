#include<iostream>

using namespace std;

int main(){
    double dist, pret; // 里程，里程费用
    int tmp, oppr; // 时间，等待费用
    cin >> dist >> tmp;
    if(dist <= 3) pret = 10; // 起步范围内
    else if(dist <= 10) pret = 10 + 2 * (dist - 3); // 10 km内，这里的条件无需写上dist > 3，因为这里是前一步的else if分支，即前一个条件不成立为前提
    else pret = 10 + 14 + 3 * (dist - 10); // 超过10 km
    oppr = (tmp / 5) * 2; // 等待花费，每5 min花费2，因为tmp是整型，所以(tmp / 5)会自动向下取整
    cout << int(pret + 0.5) + oppr; // pret四舍五入后取整
    return 0;
    
    /* 压缩版
        double dist;
        int tmp;
        cin >> dist >> tmp;
        cout << int((dist <= 3 ? 10 : (dist <= 10 ? 10 + 2 * (dist - 3) : 24 + 3 * (dist - 10))) + 0.5) + (tmp / 5) * 2;
        return 0;
    /*
}
//欢迎扫描repo里的二维码赞助我
