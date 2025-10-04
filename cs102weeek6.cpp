#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main() {

//problem1
    /*
    double num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    double result = num1 * num2;
    cout << "Product of " << num1 << " and " << num2 << " is: " << result << endl;
    */

//problem2
    /*
    double v1, v2, t;
    cout << "Enter initial velocity (v1): ";
    cin >> v1;
    cout << "Enter final velocity (v2): ";
    cin >> v2;
    cout << "Enter time (t): ";
    cin >> t;
    if (t == 0) {
        cout << "Error: Time cannot be zero!" << endl;
    } else {
        double acceleration = (v2 - v1) / t;
        cout << "Linear acceleration: " << acceleration << endl;
    }
    */

//problem3
    /*
    double radius;
    cout << "Enter radius of the circle: ";
    cin >> radius;
    double circumference = 2 * 3.14159 * radius;
    double area = 3.14159 * radius * radius;
    cout << "Circle with radius " << radius << ":" << endl;
    cout << "Circumference: " << circumference << endl;
    cout << "Area: " << area << endl;
    */

//problem4
    /*
    double radius, a, b;
    cout << "=== Circle ===" << endl;
    cout << "Enter radius of the circle: ";
    cin >> radius;
    double circumference = 2 * 3.14159 * radius;
    double area = 3.14159 * radius * radius;
    cout << "Circle with radius " << radius << ":" << endl;
    cout << "Circumference: " << circumference << endl;
    cout << "Area: " << area << endl;

    cout << "\n=== Rectangle ===" << endl;
    cout << "Enter side a: ";
    cin >> a;
    cout << "Enter side b: ";
    cin >> b;
    double perimeter = 2 * (a + b);
    double rectArea = a * b;
    cout << "Rectangle with sides " << a << " and " << b << ":" << endl;
    cout << "Perimeter: " << perimeter << endl;
    cout << "Area: " << rectArea << endl;
    */

//problem5
    /*
    int num1, num2;
    cout << "Enter first integer: ";
    cin >> num1;
    cout << "Enter second integer: ";
    cin >> num2;
    cout << "Before swap: num1 = " << num1 << ", num2 = " << num2 << endl;
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    cout << "After swap: num1 = " << num1 << ", num2 = " << num2 << endl;
    */

//problem6
    /*
    int n;
    cout << "Enter a number to find factorial: ";
    cin >> n;
    if (n < 0) {
        cout << "Error: Factorial is not defined for negative numbers!" << endl;
    } else {
        long long result = 1;
        for (int i = 1; i <= n; i++) {
            result *= i;
        }
        cout << "Factorial of " << n << " is: " << result << endl;
    }
    */

//problem7
    /*
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    int a = (num1 < 0) ? -num1 : num1;
    int b = (num2 < 0) ? -num2 : num2;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    cout << "GCD of " << num1 << " and " << num2 << " is: " << a << endl;
    */

//problem8
    /*
    int num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    int maxNum = num1;
    if (num2 > maxNum) maxNum = num2;
    if (num3 > maxNum) maxNum = num3;
    int minNum = num1;
    if (num2 < minNum) minNum = num2;
    if (num3 < minNum) minNum = num3;
    cout << "Maximum: " << maxNum << endl;
    cout << "Minimum: " << minNum << endl;
    */

//problem9
    /*
    double num1, num2;
    int choice;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "\nChoose operation:" << endl;
    cout << "1. Sum" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Product" << endl;
    cout << "4. Division" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;
    switch (choice) {
        case 1: cout << "Sum: " << num1 + num2 << endl; break;
        case 2: cout << "Subtract: " << num1 - num2 << endl; break;
        case 3: cout << "Product: " << num1 * num2 << endl; break;
        case 4:
            if (num2 == 0) {
                cout << "Error: Division by zero!" << endl;
            } else {
                cout << "Division: " << num1 / num2 << endl;
            }
            break;
        default: cout << "Invalid choice!" << endl;
    }
    */

//problem10
    /*
    cout << "First 75 triangular numbers:" << endl;
    cout << "5 numbers per line:" << endl;
    for (int i = 1; i <= 75; i++) {
        int triangular = i * (i + 1) / 2;
        cout << setw(6) << triangular;
        if (i % 5 == 0) {
            cout << endl;
        }
    }
    */

//problem11
    /*
    int number;
    cout << "Enter an integer: ";
    cin >> number;
    if (number < 0) number = -number;
    vector<int> evenDigits;
    int temp = number;
    while (temp > 0) {
        int digit = temp % 10;
        if (digit % 2 == 0) {
            evenDigits.push_back(digit);
        }
        temp /= 10;
    }
    if (evenDigits.empty()) {
        cout << "No even digits found." << endl;
    } else {
        cout << "Even digits: ";
        for (int i = evenDigits.size() - 1; i >= 0; i--) {
            cout << evenDigits[i] << " ";
        }
        cout << endl;
    }
    */

//problem12
    /*
    int number;
    cout << "Enter an integer: ";
    cin >> number;
    int temp = number;
    if (temp < 0) temp = -temp;
    int sum = 0;
    while (temp > 0) {
        int digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }
    cout << "Sum of cubes of digits: " << sum << endl;
    if (sum == number) {
        cout << number << " is an Armstrong number." << endl;
    } else {
        cout << number << " is not an Armstrong number." << endl;
    }
    */

//problem13
    /*
    cout << "Year\tDays in February" << endl;
    cout << "----\t----------------" << endl;
    for (int year = 1985; year <= 2003; year++) {
        int days;
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            days = 29;
        } else {
            days = 28;
        }
        cout << year << "\t" << days << endl;
    }
    */

//problem14
    /*
    double investmentAmount, annualInterestRate;
    cout << "Enter investment amount: ";
    cin >> investmentAmount;
    cout << "Enter annual interest rate (e.g., 9 for 9%): ";
    cin >> annualInterestRate;
    double monthlyInterestRate = annualInterestRate / 100.0 / 12.0;
    cout << "\nYear\tFuture Value" << endl;
    cout << "----\t------------" << endl;
    for (int year = 1; year <= 30; year++) {
        double futureValue = investmentAmount * pow(1 + monthlyInterestRate, year * 12);
        cout << year << "\t" << fixed << setprecision(2) << futureValue << endl;
    }
    */

//problem15
    /*
    cout << "ASCII values of characters from 'a' to 'm' (6 per line):" << endl;
    int count = 0;
    for (char ch = 'a'; ch <= 'm'; ch++) {
        cout << setw(4) << (int)ch;
        count++;
        if (count % 6 == 0) {
            cout << endl;
        } else {
            cout << " ";
        }
    }
    if (count % 6 != 0) {
        cout << endl;
    }
    */

//problem16
    /*
    int n;
    cout << "Enter n for n-by-n matrix: ";
    cin >> n;
    srand(time(0));
    cout << "\n" << n << "-by-" << n << " matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int element = rand() % 1001;
            cout << setw(4) << element << " ";
        }
        cout << endl;
    }
    */

//problem17
    /*
    cout << "First 50 even palindrome numbers:" << endl;
    cout << "5 numbers per line:" << endl;
    int count = 0;
    int num = 1;
    while (count < 50) {
        int original = num;
        int reversed = 0;
        int temp = num;
        while (temp > 0) {
            reversed = reversed * 10 + temp % 10;
            temp /= 10;
        }
        if (num % 2 == 0 && original == reversed) {
            cout << setw(6) << num;
            count++;
            if (count % 5 == 0) {
                cout << endl;
            }
        }
        num++;
    }
    */

//problem18
    /*
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    double PI = 3.14159;
    double E = 2.7182;

    double sumA = 0;
    for (int i = 1; i <= n; i++) {
        sumA += (-2.0 * i) / (PI * PI - i);
    }
    double seriesA = n / (2 * PI) + 3 + sumA;

    double sumB = 0;
    for (int i = 1; i <= n; i++) {
        sumB += -8.0 / (2 * PI + i);
    }
    double seriesB = n / (2 * PI + 1) + 4.0 / (2 * PI + 2) + sumB;

    double sumC = 0;
    for (int i = 1; i <= n; i++) {
        sumC += n / (PI * PI * i * E);
    }
    double seriesC = sumC;

    double sumD = 0;
    for (int i = 1; i <= n; i++) {
        sumD += n / (2 * i * PI / pow(E, i));
    }
    double seriesD = sumD;

    cout << "Series A: " << seriesA << endl;
    cout << "Series B: " << seriesB << endl;
    cout << "Series C: " << seriesC << endl;
    cout << "Series D: " << seriesD << endl;
    */

//problem19
    /*
    double a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    if (a > b) {
        double temp = a;
        a = b;
        b = temp;
    }
    if (b > c) {
        double temp = b;
        b = c;
        c = temp;
    }
    if (a > b) {
        double temp = a;
        a = b;
        b = temp;
    }
    cout << "Numbers in increasing order: " << a << " " << b << " " << c << endl;
    */

//problem20
    /*
    long millis;
    cout << "Enter milliseconds: ";
    cin >> millis;
    long totalSeconds = millis / 1000;
    long hours = totalSeconds / 3600;
    long minutes = (totalSeconds % 3600) / 60;
    long seconds = totalSeconds % 60;
    cout << "Time: " << hours << ":" << minutes << ":" << seconds << endl;
    */

//problem21
    /*
    time_t now = time(0);
    tm* ltm = localtime(&now);
    const char* months[] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };
    cout << "Current date and time is ";
    cout << months[ltm->tm_mon] << " " << ltm->tm_mday << ", ";
    cout << 1900 + ltm->tm_year << " ";
    cout << setfill('0') << setw(2) << ltm->tm_hour << ":";
    cout << setfill('0') << setw(2) << ltm->tm_min << ":";
    cout << setfill('0') << setw(2) << ltm->tm_sec << endl;
    */

//problem22
    /*
    int n;
    double side;
    cout << "Enter the number of sides: ";
    cin >> n;
    cout << "Enter the side: ";
    cin >> side;
    double PI = 3.14159;
    double polygonArea = (n * side * side) / (4 * tan(PI / n));
    cout << "The area of the polygon is " << fixed << setprecision(4) << polygonArea << endl;
    */


return 0;
}