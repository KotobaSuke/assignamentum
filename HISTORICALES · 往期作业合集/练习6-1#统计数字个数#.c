int CountDigit(int number, int digit){
    if(!number) return (digit ? 0 : 1); // 0是特例另外考虑，if(!number)即if(number == 0)，若digit为0则返回1（有一个'0'），若为其他则返回0，可以简写为return (digit ? 0 : 1);
    int calc = 0; // 用于计数的变量
    if(number < 0) number = -number;  // 若number是负的，先取相反数
    while(number){ // while(number)即while(number != 0)
        if(number % 10 == digit) calc++; // 求除以10的余数，即最后一位，若等于digit，计数变量calc加一
        number /= 10; // 让number（整）除以10，这个过程相当于去掉最后一位，当只剩一位时，number / 10 == 0，结束循环
    }
    return calc; // 返回统计到的数量
}
