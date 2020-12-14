#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int number(char *str) {
    int result = 0;
    int i = 0;

    while (str[i] >= '0' && str[i] <= '9') {
        result = result * 10 + str[i] - '0';
        i++;
    }

    return result;
}

char *run_length_decode(char *buffer, char *str) {
    int len = strlen(str);
    int j = 0;
    
    for (int i = 0; i < len;) {
        int num = 0;
        if (str[i] >= '0' && str[i] <= '9') {
            num = number(str + i);
        } else {
            buffer[j] = str[i];
           j++;
        }
        if (num > 0) {
            for (int k = 0; k < num - 1; ++k) {
                buffer[j] = buffer[j - 1];
                j++;
            }
            
            i += log10(num)+1;
        } else {
            i++;
        }
    }

    return buffer;
}

int main() {
    char buffer[100]{};
    std::cout << run_length_decode(buffer, "a2b10c"); // abbcccccccccc
    
    return 0;
}
