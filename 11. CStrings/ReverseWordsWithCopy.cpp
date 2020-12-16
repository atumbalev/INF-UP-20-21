#include <iostream>
#include <cstring>

using namespace std;

char *reverse_words(char *str) {
    int len = strlen(str);
    char *rev = new char[len + 1];
    int i = 0, j = 0;

    while (i < len) {
        if (str[i + 1] == ' ' || str[i + 1] == '\0') {
            int k = i;
            while (j <= i) {
                rev[j] = str[k];
                j++;
                k--;
            }
            rev[j] = str[i + 1];
            j++;
            i++;
        }
        ++i;
    }

    return rev;
}

int main() {
    char sentence[100]{"Turn that frown upside down :("};
    char *result = reverse_words(sentence); // nruT taht nworf edispu nwod (:

    cout << result << endl;

    delete[] result;

    return 0;
}
