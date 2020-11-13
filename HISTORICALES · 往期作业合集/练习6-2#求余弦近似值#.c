double funcos(double e, double x){
    double cosV = 0; // 要求的余弦值
    double trm = e; // 每项的绝对值
    for(int ind = 0; trm >= e; ind += 2){ // 指数和被阶乘数每项逐次加2，并且要保证每项绝对值大于等于精确度e（trm >= e）
        double fctrl = 1; // 阶乘结果存在这里
        for(int indF = 1; indF <= ind; indF++)
            fctrl *= indF; // 用循环来计算阶乘
        trm = pow(x, ind) / fctrl; // 计算每项的绝对值
        cosV += (ind % 4 ? -1 : 1) * trm; // 加起来，(ind % 4 ? -1 : 1)表示「若指数是4的倍数，返回1（即正项），否则返回-1（即负项）」
    }
    return cosV;
}
