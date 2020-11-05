#include<iostream>

int main(){
    std::cout << getchar() + getchar() + getchar() + getchar() - 192;
      // getchar()获取输入流中下一个字符（的编码），0的编码是0x0030，即十进制的48，因此减去48*4=192即为各位之和
    return 0;
}
