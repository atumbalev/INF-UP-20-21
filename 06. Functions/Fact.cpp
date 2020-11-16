#include <iostream>

/*
Да се напише функция която по дадено n пресмята n!. n! = n*(n - 1)*(n - 2)*...*3*2*1.
Сигнатура на функцията:

long long fact(int n)
*/

long long fact(int n) {
    long long fact = 1;

    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }

    return fact;
}

int main() {
    int n;
    std::cin >> n;

    std::cout << fact(n) << std::endl;

    return 0;
}
