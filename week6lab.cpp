#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main(){
const double PI = 3.14159;
const double E = 2.7182;

double product(double num1, double num2) {
    return num1 * num2;
}

void problem1() {
    cout << "\n=== PROBLEM 1: Product of Two Numbers ===" << endl;
    double num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    double result = product(num1, num2);
    cout << "Product of " << num1 << " and " << num2 << " is: " << result << endl;
}


// PROBLEM 2: Linear acceleration function

double linearAcceleration(double v1, double v2, double t) {
    if (t == 0) {
        cout << "Error: Time cannot be zero!" << endl;
        return 0;
    }
    return (v2 - v1) / t;
}

void problem2() {
    cout << "\n=== PROBLEM 2: Linear Acceleration ===" << endl;
    double v1, v2, t;

    cout << "Enter initial velocity (v1): ";
    cin >> v1;

    cout << "Enter final velocity (v2): ";
    cin >> v2;

    cout << "Enter time (t): ";
    cin >> t;

    double acceleration = linearAcceleration(v1, v2, t);
    cout << "Linear acceleration: " << acceleration << endl;
}


// PROBLEM 3: Circle circumference and area function

void fun(double radius) {
    double circumference = 2 * PI * radius;
    double area = PI * radius * radius;

    cout << "Circle with radius " << radius << ":" << endl;
    cout << "Circumference: " << circumference << endl;
    cout << "Area: " << area << endl;
}

void problem3() {
    cout << "\n=== PROBLEM 3: Circle Functions ===" << endl;
    double radius;

    cout << "Enter radius of the circle: ";
    cin >> radius;

    fun(radius);
}

// PROBLEM 4: Overloaded function for rectangle

void fun(double a, double b) {
    double perimeter = 2 * (a + b);
    double area = a * b;

    cout << "Rectangle with sides " << a << " and " << b << ":" << endl;
    cout << "Perimeter: " << perimeter << endl;
    cout << "Area: " << area << endl;
}

void problem4() {
    cout << "\n=== PROBLEM 4: Overloaded Functions ===" << endl;
    double radius, a, b;

    cout << "=== Circle ===" << endl;
    cout << "Enter radius of the circle: ";
    cin >> radius;
    fun(radius);

    cout << "\n=== Rectangle ===" << endl;
    cout << "Enter side a: ";
    cin >> a;
    cout << "Enter side b: ";
    cin >> b;
    fun(a, b);
}


// PROBLEM 5: Swap integers without third variable (pass by reference)

void swap(int &a, int &b) {
    a = a + b;
    b = a - b;
    a = a - b;
}

void problem5() {
    cout << "\n=== PROBLEM 5: Swap Function ===" << endl;
    int num1, num2;

    cout << "Enter first integer: ";
    cin >> num1;

    cout << "Enter second integer: ";
    cin >> num2;

    cout << "Before swap: num1 = " << num1 << ", num2 = " << num2 << endl;

    swap(num1, num2);

    cout << "After swap: num1 = " << num1 << ", num2 = " << num2 << endl;
}


// PROBLEM 6: Factorial function with default parameter

long long Factorial(int n = 1) {
    if (n < 0) {
        cout << "Error: Factorial is not defined for negative numbers!" << endl;
        return -1;
    }

    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

void problem6() {
    cout << "\n=== PROBLEM 6: Factorial Function ===" << endl;
    int n;

    cout << "Enter a number to find factorial (or press Enter for default n=1): ";

    if (cin.peek() == '\n') {
        cin.ignore();
        cout << "Using default parameter (n=1)" << endl;
        cout << "Factorial of 1 is: " << Factorial() << endl;
    } else {
        cin >> n;
        cout << "Factorial of " << n << " is: " << Factorial(n) << endl;
    }
}


// PROBLEM 7: GCD function

int gcd(int num1, int num2) {
    num1 = (num1 < 0) ? -num1 : num1;
    num2 = (num2 < 0) ? -num2 : num2;

    while (num2 != 0) {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    return num1;
}

void problem7() {
    cout << "\n=== PROBLEM 7: GCD Function ===" << endl;
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    int result = gcd(num1, num2);
    cout << "GCD of " << num1 << " and " << num2 << " is: " << result << endl;
}


// PROBLEM 8: Max and min functions for three numbers
int maximum(int a, int b, int c) {
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    return max;
}

int minimum(int a, int b, int c) {
    int min = a;
    if (b < min) min = b;
    if (c < min) min = c;
    return min;
}

void problem8() {
    cout << "\n=== PROBLEM 8: Max and Min Functions ===" << endl;
    int num1, num2, num3;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    int maxNum = maximum(num1, num2, num3);
    int minNum = minimum(num1, num2, num3);

    cout << "Maximum: " << maxNum << endl;
    cout << "Minimum: " << minNum << endl;
}


// PROBLEM 9: Simple calculator functions
double sum(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double product(double a, double b) {
    return a * b;
}

double division(double a, double b) {
    if (b == 0) {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
    return a / b;
}

void problem9() {
    cout << "\n=== PROBLEM 9: Simple Calculator ===" << endl;
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
        case 1:
            cout << "Sum: " << sum(num1, num2) << endl;
            break;
        case 2:
            cout << "Subtract: " << subtract(num1, num2) << endl;
            break;
        case 3:
            cout << "Product: " << product(num1, num2) << endl;
            break;
        case 4:
            cout << "Division: " << division(num1, num2) << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }
}


// PROBLEM 10: Triangular numbers function
int getTriangularNumber(int n) {
    return n * (n + 1) / 2;
}

void problem10() {
    cout << "\n=== PROBLEM 10: Triangular Numbers ===" << endl;
    cout << "First 75 triangular numbers:" << endl;
    cout << "5 numbers per line:" << endl;

    for (int i = 1; i <= 75; i++) {
        cout << setw(6) << getTriangularNumber(i);

        if (i % 5 == 0) {
            cout << endl;
        }
    }
}

// PROBLEM 11: Display even digits function

void displayEven(int number) {
    if (number < 0) {
        number = -number;
    }

    vector<int> evenDigits;

    while (number > 0) {
        int digit = number % 10;
        if (digit % 2 == 0) {
            evenDigits.push_back(digit);
        }
        number /= 10;
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
}

void problem11() {
    cout << "\n=== PROBLEM 11: Display Even Digits ===" << endl;
    int number;

    cout << "Enter an integer: ";
    cin >> number;

    displayEven(number);
}


// PROBLEM 12: Armstrong number functions

int cubeOfDigits(int number) {
    int sum = 0;

    if (number < 0) {
        number = -number;
    }

    while (number > 0) {
        int digit = number % 10;
        sum += digit * digit * digit;
        number /= 10;
    }

    return sum;
}

void isArmstrong(int sum, int number) {
    if (sum == number) {
        cout << number << " is an Armstrong number." << endl;
    } else {
        cout << number << " is not an Armstrong number." << endl;
    }
}

void problem12() {
    cout << "\n=== PROBLEM 12: Armstrong Numbers ===" << endl;
    int number;

    cout << "Enter an integer: ";
    cin >> number;

    int sumOfCubes = cubeOfDigits(number);
    cout << "Sum of cubes of digits: " << sumOfCubes << endl;

    isArmstrong(sumOfCubes, number);
}


// PROBLEM 13: Days in February function
int numberOfDaysInFebruary(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 29;
    } else {
        return 28;
    }
}

void problem13() {
    cout << "\n=== PROBLEM 13: Days in February ===" << endl;
    cout << "Year\tDays in February" << endl;
    cout << "----\t----------------" << endl;

    for (int year = 1985; year <= 2003; year++) {
        cout << year << "\t" << numberOfDaysInFebruary(year) << endl;
    }
}

// PROBLEM 14: Future investment value function

double futureInvestmentValue(double investmentAmount, double monthlyInterestRate, int years) {
    return investmentAmount * pow(1 + monthlyInterestRate, years * 12);
}

void problem14() {
    cout << "\n=== PROBLEM 14: Future Investment Value ===" << endl;
    double investmentAmount, annualInterestRate;

    cout << "Enter investment amount: ";
    cin >> investmentAmount;

    cout << "Enter annual interest rate (e.g., 9 for 9%): ";
    cin >> annualInterestRate;

    double monthlyInterestRate = annualInterestRate / 100.0 / 12.0;

    cout << "\nYear\tFuture Value" << endl;
    cout << "----\t------------" << endl;

    for (int year = 1; year <= 30; year++) {
        double futureValue = futureInvestmentValue(investmentAmount, monthlyInterestRate, year);
        cout << year << "\t" << fixed << setprecision(2) << futureValue << endl;
    }
}


// PROBLEM 15: ASCII values function
void printASCII(char ch1, char ch2, int numberPerLine) {
    int count = 0;

    for (char ch = ch1; ch <= ch2; ch++) {
        cout << setw(4) << (int)ch;
        count++;

        if (count % numberPerLine == 0) {
            cout << endl;
        } else {
            cout << " ";
        }
    }

    if (count % numberPerLine != 0) {
        cout << endl;
    }
}

void problem15() {
    cout << "\n=== PROBLEM 15: ASCII Values ===" << endl;
    cout << "ASCII values of characters from 'a' to 'm' (6 per line):" << endl;
    printASCII('a', 'm', 6);
}


// PROBLEM 16: Display matrix function
void printMatrix(int n) {
    srand(time(0));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int element = rand() % 1001;
            cout << setw(4) << element << " ";
        }
        cout << endl;
    }
}

void problem16() {
    cout << "\n=== PROBLEM 16: Display Matrix ===" << endl;
    int n;

    cout << "Enter n for n-by-n matrix: ";
    cin >> n;

    cout << "\n" << n << "-by-" << n << " matrix:" << endl;
    printMatrix(n);
}


// PROBLEM 17: Even palindrome numbers

bool isPalindrome(int num) {
    int original = num;
    int reversed = 0;

    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }

    return original == reversed;
}

bool isEven(int num) {
    return num % 2 == 0;
}

void problem17() {
    cout << "\n=== PROBLEM 17: Even Palindrome Numbers ===" << endl;
    cout << "First 50 even palindrome numbers:" << endl;
    cout << "5 numbers per line:" << endl;

    int count = 0;
    int num = 1;

    while (count < 50) {
        if (isEven(num) && isPalindrome(num)) {
            cout << setw(6) << num;
            count++;

            if (count % 5 == 0) {
                cout << endl;
            }
        }
        num++;
    }
}


// PROBLEM 18: Series calculation functions

double seriesA(int n) {
    double sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += (-2.0 * i) / (PI * PI - i);
    }
    return n / (2 * PI) + 3 + sum;
}

double seriesB(int n) {
    double sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += -8.0 / (2 * PI + i);
    }
    return n / (2 * PI + 1) + 4.0 / (2 * PI + 2) + sum;
}

double seriesC(int n) {
    double sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += n / (PI * PI * i * E);
    }
    return sum;
}

double seriesD(int n) {
    double sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += n / (2 * i * PI / pow(E, i));
    }
    return sum;
}

void problem18() {
    cout << "\n=== PROBLEM 18: Series Calculations ===" << endl;
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    cout << "Series A: " << seriesA(n) << endl;
    cout << "Series B: " << seriesB(n) << endl;
    cout << "Series C: " << seriesC(n) << endl;
    cout << "Series D: " << seriesD(n) << endl;
}


// PROBLEM 19: Sort three numbers function
void displaySortedNumber(double a, double b, double c) {
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
}

void problem19() {
    cout << "\n=== PROBLEM 19: Sort Three Numbers ===" << endl;
    cout << "Test with given values:" << endl;
    displaySortedNumber(10.0, 20.1, 40.2);

    double a, b, c;
    cout << "\nEnter three numbers: ";
    cin >> a >> b >> c;

    displaySortedNumber(a, b, c);
}

// PROBLEM 20: Convert milliseconds function

string convertMillis(long millis) {
    long totalSeconds = millis / 1000;

    long hours = totalSeconds / 3600;
    long minutes = (totalSeconds % 3600) / 60;
    long seconds = totalSeconds % 60;

    stringstream ss;
    ss << hours << ":" << minutes << ":" << seconds;

    return ss.str();
}

void problem20() {
    cout << "\n=== PROBLEM 20: Convert Milliseconds ===" << endl;
    long millis;

    cout << "Enter milliseconds: ";
    cin >> millis;

    string result = convertMillis(millis);
    cout << "Time: " << result << endl;
}


void problem21() {
    cout << "\n=== PROBLEM 21: Current Date and Time ===" << endl;
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
}


// PROBLEM 22: Regular polygon area function

double area(int n, double side) {
    return (n * side * side) / (4 * tan(PI / n));
}

void problem22() {
    cout << "\n=== PROBLEM 22: Regular Polygon Area ===" << endl;
    int n;
    double side;

    cout << "Enter the number of sides: ";
    cin >> n;

    cout << "Enter the side: ";
    cin >> side;

    double polygonArea = area(n, side);
    cout << "The area of the polygon is " << fixed << setprecision(4) << polygonArea << endl;
}


// PROBLEM 23: Craps game

int rollDie() {
    return rand() % 6 + 1;
}

int rollTwoDice() {
    int die1 = rollDie();
    int die2 = rollDie();
    int sum = die1 + die2;

    cout << "You rolled " << die1 << "+" << die2 << "=" << sum << endl;
    return sum;
}

void playCraps() {
    int firstRoll = rollTwoDice();

    if (firstRoll == 7 || firstRoll == 11) {
        cout << "You win" << endl;
        return;
    }

    if (firstRoll == 2 || firstRoll == 3 || firstRoll == 12) {
        cout << "You lose" << endl;
        return;
    }

    cout << "Point is " << firstRoll << endl;

    while (true) {
        int currentRoll = rollTwoDice();

        if (currentRoll == firstRoll) {
            cout << "You win" << endl;
            break;
        } else if (currentRoll == 7) {
            cout << "You lose" << endl;
            break;
        }
    }
}

void problem23() {
    cout << "\n=== PROBLEM 23: Craps Game ===" << endl;
    srand(time(0));

    char playAgain;

    do {
        cout << "\n=== CRAPS GAME ===" << endl;
        playCraps();

        cout << "\nPlay again? (y/n): ";
        cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');
}
// PROBLEM 24: Emirp numbers
bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int reverseNumber(int n) {
    int reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return reversed;
}

bool isEmirp(int n) {
    if (!isPrime(n)) return false;
    if (n == reverseNumber(n)) return false;

    int reversed = reverseNumber(n);
    return isPrime(reversed);
}

void problem24() {
    cout << "\n=== PROBLEM 24: Emirp Numbers ===" << endl;
    cout << "First 100 emirp numbers:" << endl;
    cout << "10 numbers per line:" << endl;

    int count = 0;
    int num = 2;

    while (count < 100) {
        if (isEmirp(num)) {
            cout << setw(6) << num;
            count++;

            if (count % 10 == 0) {
                cout << endl;
            }
        }
        num++;
    }
}


// PROBLEM 25: Additive prime numbers
int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

void problem25() {
    cout << "\n=== PROBLEM 25: Additive Prime Numbers ===" << endl;
    cout << "First 25 additive prime numbers:" << endl;
    cout << setw(15) << "Prime Number" << setw(15) << "Sum of digits" << endl;
    cout << setw(15) << "------------" << setw(15) << "------------" << endl;

    int count = 0;
    int num = 2;

    while (count < 25) {
        if (isPrime(num)) {
            int digitSum = sumOfDigits(num);
            if (isPrime(digitSum)) {
                cout << setw(15) << num << setw(15) << digitSum << endl;
                count++;
            }
        }
        num++;
    }
}


// PROBLEM 26: Binary to octal function

int bin2Octal(int binary) {
    int decimal = 0;
    int power = 0;

    while (binary > 0) {
        int digit = binary % 10;
        if (digit != 0 && digit != 1) {
            cout << "Error: Invalid binary number!" << endl;
            return -1;
        }
        decimal += digit * pow(2, power);
        binary /= 10;
        power++;
    }

    int octal = 0;
    power = 0;

    while (decimal > 0) {
        octal += (decimal % 8) * pow(10, power);
        decimal /= 8;
        power++;
    }

    return octal;
}

void problem26() {
    cout << "\n=== PROBLEM 26: Binary to Octal ===" << endl;
    string binaryStr;
    int binary;

    cout << "Enter a binary number: ";
    cin >> binaryStr;

    binary = stoi(binaryStr);

    int octal = bin2Octal(binary);

    if (octal != -1) {
        cout << "Binary " << binaryStr << " in octal is: " << octal << endl;
    }
}

// MAIN FUNCTION - Menu System

int main() {
    int choice;

    cout << "===========================================" << endl;
    cout << "        WEEK 6 LAB - FUNCTIONS" << endl;
    cout << "===========================================" << endl;

    do {
        cout << "\nSelect a problem to run (1-26, 0 to exit):" << endl;
        cout << "1.  Product of Two Numbers" << endl;
        cout << "2.  Linear Acceleration" << endl;
        cout << "3.  Circle Functions" << endl;
        cout << "4.  Overloaded Functions" << endl;
        cout << "5.  Swap Function" << endl;
        cout << "6.  Factorial Function" << endl;
        cout << "7.  GCD Function" << endl;
        cout << "8.  Max and Min Functions" << endl;
        cout << "9.  Simple Calculator" << endl;
        cout << "10. Triangular Numbers" << endl;
        cout << "11. Display Even Digits" << endl;
        cout << "12. Armstrong Numbers" << endl;
        cout << "13. Days in February" << endl;
        cout << "14. Future Investment Value" << endl;
        cout << "15. ASCII Values" << endl;
        cout << "16. Display Matrix" << endl;
        cout << "17. Even Palindrome Numbers" << endl;
        cout << "18. Series Calculations" << endl;
        cout << "19. Sort Three Numbers" << endl;
        cout << "20. Convert Milliseconds" << endl;
        cout << "21. Current Date and Time" << endl;
        cout << "22. Regular Polygon Area" << endl;
        cout << "23. Craps Game" << endl;
        cout << "24. Emirp Numbers" << endl;
        cout << "25. Additive Prime Numbers" << endl;
        cout << "26. Binary to Octal" << endl;
        cout << "0.  Exit" << endl;
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: problem1(); break;
            case 2: problem2(); break;
            case 3: problem3(); break;
            case 4: problem4(); break;
            case 5: problem5(); break;
            case 6: problem6(); break;
            case 7: problem7(); break;
            case 8: problem8(); break;
            case 9: problem9(); break;
            case 10: problem10(); break;
            case 11: problem11(); break;
            case 12: problem12(); break;
            case 13: problem13(); break;
            case 14: problem14(); break;
            case 15: problem15(); break;
            case 16: problem16(); break;
            case 17: problem17(); break;
            case 18: problem18(); break;
            case 19: problem19(); break;
            case 20: problem20(); break;
            case 21: problem21(); break;
            case 22: problem22(); break;
            case 23: problem23(); break;
            case 24: problem24(); break;
            case 25: problem25(); break;
            case 26: problem26(); break;
            case 0:
                cout << "Thank you for using Week 6 Lab program!" << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }

        if (choice != 0) {
            cout << "\nPress Enter to continue...";
            cin.ignore();
            cin.get();
        }

    } while (choice != 0);

    return 0;
}