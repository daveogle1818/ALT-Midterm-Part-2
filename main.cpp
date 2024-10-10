#include <iostream>
#include "Payroll.h"  // Include the Payroll class header file
using namespace std;

int main() {
    // Create multiple Payroll objects for different employees
    Payroll employee1, employee2, employee3;

    // Hardcoded data for Employee 1
    employee1 = Payroll(); // Reset employee object
    cout << "Employee 1 (Auto-generated data):" << endl;
    employee1.inputData(40, 25);  // 40 hours worked, $25 per hour
    employee1.calculatePay();
    employee1.displayPay();

    // Hardcoded data for Employee 2
    employee2 = Payroll();
    cout << "\nEmployee 2 (Auto-generated data):" << endl;
    employee2.inputData(35, 20);  // 35 hours worked, $20 per hour
    employee2.calculatePay();
    employee2.displayPay();

    // Hardcoded data for Employee 3
    employee3 = Payroll();
    cout << "\nEmployee 3 (Auto-generated data):" << endl;
    employee3.inputData(45, 30);  // 45 hours worked, $30 per hour
    employee3.calculatePay();
    employee3.displayPay();

    return 0;
}
