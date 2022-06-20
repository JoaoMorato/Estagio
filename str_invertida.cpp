#include <iostream>

#define ull unsigned long long


int main() {
    std::string str;
    printf("Insira uma string: ");
    std::cin >> str;
    for(size_t i = 0; i<str.length()/2; i++){
        char aux = str[i];
        str[i] = str[str.length() - 1 - i];
        str[str.length() - 1 - i] = aux;
    }
    std::cout << str << '\n';
    return 0;
}