#include <iostream>
using namespace std;

struct Data {
    int id;
    string name;
};

int main() {
    int n;
    cin >> n;
    Data arr[100];
    for (int i = 0; i < n; i++) {
        cin >> arr[i].id >> arr[i].name;
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i].id > arr[j].id) {
                Data temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i].id << " " << arr[i].name << endl;
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i].name > arr[j].name) {
                Data temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i].id << " " << arr[i].name << endl;
    }
    return 0;
}