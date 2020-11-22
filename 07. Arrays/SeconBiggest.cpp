#include <iostream>

int maxElem(int arr[], int n) {
    int max = arr[0];

    for (int i = 1; i < n; ++i) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    return max;
}


int sndMax(int arr[], int n) {
    int max, sndMax;

    if (arr[0] < arr[1]) {
        max = arr[1];
        sndMax = arr[0];
    } else {
        max = arr[0];
        sndMax = arr[1];
    }

    // [01,2,2,-1]
    for (int i = 2; i < n; ++i) {
        if (max < arr[i]) {
            sndMax = max;
            max = arr[i];

        }
        
        if (sndMax < arr[i] && arr[i] != max) {
            sndMax = arr[i];
        }
    }
    return sndMax;
}

void enterNumbers(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }
}

int main() {
    const int SIZE = 100;
    int arr[SIZE];
    int n = 0;

    std::cout << "Enter array size" << std::endl;
    std::cin >> n;
    
    std::cout << "Enter array numbers" << std::endl;
    enterNumbers(arr, n);


    std::cout << "Max elem is: " << maxElem(arr, n) << std::endl;
    
    std::cout << "Second max elem is: " << sndMax(arr, n) << std::endl;

    return 0;
}
