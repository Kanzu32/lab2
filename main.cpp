#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    cout << "Enter A and B: ";
    int a, b;
    cin >> a >> b;
    cout << "A + B = " << a + b << '\n'
     << "A - B = " << a - b << '\n'
     << "A * B = " << a * b << '\n'
     << "A / B = " << a / b << '\n'
     << "MIN: " << min(min(min(a + b, a - b), a * b), a / b)
     << "MAX: " << max(max(max(a + b, a - b), a * b), a / b);
}