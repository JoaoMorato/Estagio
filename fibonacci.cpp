#include <iostream>

#define ull unsigned long long

void Fibonacci(ull n1, ull n2, ull stop){
    if(n2 > stop){
        printf("\nNumero nao pertence.\n");
        return;
    }
    if(n2 == stop){
        printf("\nNumero pertence.\n");
        return;
    }
    Fibonacci(n2, n2 + n1, stop);
}

int main() {
    ull num;
    printf("Insira um numero: ");
    std::cin >> num;
    Fibonacci(0,1,num);
    return 0;
}