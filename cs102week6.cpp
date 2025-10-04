#include <iostream>
#include <cmath>
#include <string>

using namespace std;
int main() {

//problem1
    /*
    int x;
    cin >> x;
    if (x >= 0){cout << "positive";}
    else {cout << "negative";}
    */
//problem2
    /*
    int x;
    cin >> x;
    if (x%2 == 0) {
        cout << "The number is even";
    } else {
        cout << "The number is odd";
    }
    */
//problem3
    /*
    double a, b, c;
    cin >> a >> b >> c;
    if (a>b && a>c) {
        cout << a << " is the largest";
    } else if (b>a && b>c) {
        cout << b << " is the largest";
    } else {
        cout << c << " is the largest";
    }
    */
//problem4
    /*
    int m, n;
    cin >> m >> n;
    if (m%n==0) {
        cout << m << " is divisible by " << n;
    } else {
        cout << m << " is not divisible by " << n;
    }
    */
//problem5
    /*
    int year;
    cin >> year;
    if (year%400==0) {
        cout << year << " is a leap year";
    } else {
        cout << year << " is not a leap year";
    }
    */
//problem6
    /*
    double a, b, c, disc, x1, x2;
    cin >> a >> b >> c;
    disc = b*b - 4*a*c;
    x1 = (-b + sqrt(disc))/(2*a);
    x2 = (-b - sqrt(disc))/(2*a);
    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;
    */
//problem7
    /*
    int t1, t2, t3;
    cin >> t1 >> t2 >> t3;
    if (t1+t2>=t3 && t2+t3>=t1 && t1+t3>=t2) {
        cout << "The triangle is valid";
    } else {
        cout << "The triangle is not valid";
    }
    */
//problem8
    /*
    char ch;
    cin >> ch;
    if (ch>='a' && ch<='z') {
        cout << "Lowercase alphabet";
    } else if (ch>='A' && ch<='Z') {
        cout << "Uppercase alphabet";
    } else {
        cout << "It is not an alphabet";
    }
    */
//problem9
    /*
    double speed;
    cin >> speed;
    if (speed<20) {
        cout << "too slow";
    } else if (speed>80) {
        cout << "too fast";
    } else {
        cout << "just right";
    }
    */
//problem10
    /*
    double x1, y1, dist;
    cin >> x1 >> y1;
    dist = sqrt(x1*x1+y1*y1);
    if (dist <= 10) {
        cout << "Point (" << x1 << "," << y1 << ") is in circle";
    } else {
        cout << "Point (" << x1 << "," << y1 << ") is not in circle";
    }
    */
//problem11
    /*
    double w1, p1, w2, p2 ,r1, r2;
    cout << "Enter weight and price for package 1: ";
    cin >> w1 >> p1;
    cout << "Enter weight and price for package 2: ";
    cin >> w2 >> p2;
    r1 = p1/w1;
    r2 = p2/w2;
    if (r1>r2) {
        cout << "Package 2 has a better price";
    } else if (r1<r2) {
        cout << "Package 1 has a better price";
    } else if (r1==r2) {
        cout << "Package 1 and package 2 has the same price";
    } else {
        cout << "Input the numbers only!";
    }
    */
//problem12
    /*
    cout << "Enter a three-digit integer: ";
    int p;
    cin >> p;
    if (p/100 == p%10) {
        cout << p << " is a palindrome";
    } else {
        cout << p << " is not a palindrome";
    }
    */
//problem13
    /*
    char ch;
    cout << "Enter the traffic light signal: ";
    cin >> ch;
    if (ch == 'g') {
        cout << "Go!" << endl;
    } else if (ch == 'y') {
        cout << "Get ready!" << endl;
    } else if (ch == 'r') {
        cout << "Stop" << endl;
    } else {
        cout << "Input only" << " g or y or t";
    }
    */
//problem14
    /*
    int number;
    cin >> number;
    if (number == 1) {
        cout << "Monday";
    } else if (number == 2) {
        cout << "Tuesday";
    } else if (number == 3) {
        cout << "Wednesday";
    } else if (number == 4) {
        cout << "Thursday";
    } else if (number == 5) {
        cout << "Friday";
    } else if (number == 6) {
        cout << "Saturday";
    } else if (number == 7) {
        cout << "Sunday";
    } else {
        cout << "There is no such weekday";
    }
    */
//problem15
    /*
    int d1, d2;
    string days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    cout << "Enter today's day (0=Sunday, 1=Monday, ..., 6=Saturday): ";
    cin >> d1;
    cout << "Enter the number of days elapsed since today: ";
    cin >> d2;
    int futd = (d1 + d2) % 7;
    cout << "Today is " << days[d1] << " and the future day is " << days[futd];
    */
//problem16
    int day1, day2;
    cout << "Enter today's day: ";
    cin >> day1;
    cout << "Enter the number of days elapsed since today: ";
    cin >> day2;
    int ftday = (day1 + day2)%7;
    cout << "Today is ";
    switch (day1) {
        case 0: cout << "Sunday"; break;
        case 1: cout << "Monday"; break;
        case 2: cout << "Tuesday"; break;
        case 3: cout << "Wednesday"; break;
        case 4: cout << "Thursday"; break;
        case 5: cout << "Friday"; break;
        case 6: cout << "Saturday"; break;
    }
    cout << " and the future day is ";
    switch (ftday) {
        case 0: cout << "Sunday"; break;
        case 1: cout << "Monday"; break;
        case 2: cout << "Tuesday"; break;
        case 3: cout << "Wednesday"; break;
        case 4: cout << "Thursday"; break;
        case 5: cout << "Friday"; break;
        case 6: cout << "Saturday"; break;
    }




//problem16





return 0;
}