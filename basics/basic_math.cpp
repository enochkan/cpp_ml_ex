#include<iostream>
using namespace std;

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

int main(int argc, const char** argv) {
    int a; int b;
    cout << "enter two numbers, separated by space: ";
    cin >> a >> b;
    cout << "add result: " << add(a,b) << endl;
    cout << "subtract result: " << subtract(a,b) << endl;
    cout << "multiplication result: " << multiply(a,b) << endl;
    cout << "division result: " << divide(a,b) << endl;
    return 0;
}

int add(int a, int b) {
    return a+b;
}

int subtract(int a, int b) {
    return a-b;
}

int multiply(int a, int b) {
    return a*b;
}

int divide(int a, int b) {
    return a/b;
}