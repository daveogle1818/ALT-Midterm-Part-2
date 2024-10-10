Z#ifndef PAYROLL_H
#define PAYROLL_H

class Payroll {
private:
    double hoursWorked;   
    double hourlyRate;    
    double grossPay;      
    double taxDeduction;  
    double netPay;        
    const double taxRate = 0.15;

public:
    // Overloaded inputData() method that accepts parameters for testing
    void inputData(double hours, double rate);

    void calculatePay();
    void displayPay();
};

#endif

