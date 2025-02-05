#include<iostream>
#include<string>
using namespace std;

struct Employee {
    int employee_id;
    string employee_name;
    int salary;
};

struct Organisation {
    string organisation_name;
    string organisation_num;
    struct Employee emp;
};

int main() {
    int size;
    cout << "Enter the size of the structure: ";
    cin >> size;
    cin.ignore();

    Organisation org[size];

    for (int i = 0; i < size; i++) {
        cout << "Enter organisation name: ";
        getline(cin, org[i].organisation_name);
        cout << "Enter organisation number: ";
        getline(cin, org[i].organisation_num);
        cout << "Enter employee ID: ";
        cin >> org[i].emp.employee_id;
        cin.ignore();
        cout << "Enter employee name: ";
        getline(cin, org[i].emp.employee_name);
        cout << "Enter employee salary: ";
        cin >> org[i].emp.salary;
        cin.ignore();
    }

    cout << "The size of the structure organisation is: " << size << endl;
    for (int i = 0; i < size; i++) {
        cout << "Organisation Name: " << org[i].organisation_name << endl;
        cout << "Organisation Number: " << org[i].organisation_num << endl;
        cout << "Employee ID: " << org[i].emp.employee_id << endl;
        cout << "Employee Name: " << org[i].emp.employee_name << endl;
        cout << "Employee Salary: " << org[i].emp.salary << endl;
    }

    return 0;
}