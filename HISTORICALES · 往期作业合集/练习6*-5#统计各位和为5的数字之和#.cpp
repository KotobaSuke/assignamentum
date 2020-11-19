int is(int number){
    int summa = 0; // 各位之和
    while(number){ // 循环取数字最后一位并去掉，直到取完最后一位
        summa += (number % 10); // (number % 10)是数字的最后一位
        number /= 10; // 去掉数字最后一位
    }
    if(summa == 5) return 1;
    else return 0;
}

void count_sum(int a, int b){
    int quant = 0, numSum = 0; // 数量，数字之和
    for(int i = a; i <= b; i++)
        if(is(i)){
            quant ++;
            numSum += i;
        }
    printf("count = %d, sum = %d", quant, numSum); // 这里是c的函数，不能用cout
}
