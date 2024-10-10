# Payroll Class

This project implements a `Payroll` class in C++ that represents an employee's payroll information. The class includes attributes for the hours worked, hourly rate, gross pay, tax deduction, and net pay. It also provides methods for inputting data, calculating payroll, and displaying the results.

## Class Breakdown

### Class Name: Payroll

#### Attributes (Private Members):

- `double hoursWorked`: The number of hours the employee worked.
- `double hourlyRate`: The employee’s hourly wage.
- `double grossPay`: The total earnings before tax (calculated as `hoursWorked * hourlyRate`).
- `double taxDeduction`: The amount of tax deducted, calculated as 15% of gross pay.
- `double netPay`: The take-home pay after tax is deducted (calculated as `grossPay - taxDeduction`).

#### Methods (Public Members):

- **Input Data:**
  - `void inputData()`: This method prompts the user to input the number of hours worked and the hourly rate.
  
- **Calculate Payroll:**
  - `void calculatePay()`: This method calculates the gross pay, tax deduction, and net pay based on the provided input.
  
- **Display Results:**
  - `void displayPay()`: This method outputs the calculated gross pay, tax deduction, and net pay to the user.



