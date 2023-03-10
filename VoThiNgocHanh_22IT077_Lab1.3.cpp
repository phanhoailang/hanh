#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "GCD cua " << a << " va " << b << " la: " << gcd(a, b) << endl;
    cout << "LCM cua " << a << " va " << b << " la: " << lcm(a, b) << endl;
    return 0;
}

