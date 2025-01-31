#include<iostream>
using namespace std;
int main() {
    int* arr = new int[5];  
    int size = 5;
    int count = 0;
    for (int i = 0; count < 10; i++) {
        arr[count] = 1;  
        count++;
        if (count == size) {
            size *= 2;
            int* temp = new int[size];  
            for (int j = 0; j < count; j++) {
                temp[j] = arr[j]; 
                cout<<temp[j];
            }
            cout<<endl;
            delete[] arr;  
            arr = temp;  
        }
    }
    cout << "Array size: " << size << endl;
    delete[] arr;  
    return 0;
}