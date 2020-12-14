#include <iostream>

using namespace std;

void resize(int *arr[], int size, int new_size) {
    int *arr1 = new int[new_size];

    for (int i = 0; i < size; ++i) {
        arr1[i] = (*arr)[i];
    }

    delete[] *arr;
    *arr = arr1;
}

int main() {
    int *arr = new int[3];
    arr[0] = 1;
    arr[1] = 23;
    arr[2] = 50;

    resize(&arr, 3, 5);

    for (int i = 0; i < 5; ++i) {
        cout << arr[i] << " ";
    }

    return 0;
}
