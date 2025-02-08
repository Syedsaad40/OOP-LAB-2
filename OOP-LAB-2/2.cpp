#include<iostream>
using namespace std;

void* add(void* a, int value) {
    int* arr = (int*)a;
    for (int i = 0; i < 5; i++) {
        arr[i] += value;
    }
    return a;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int* ptr = (int*)add((void*)arr, 2);
    
    for (int i = 0; i < 5; i++) {
        cout << ptr[i] << " ";
    }
    
    return 0;
}
