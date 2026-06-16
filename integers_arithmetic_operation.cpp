# include <iostream>

using namespace std;

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    cout << "sum: " << a + b << endl;
    cout << "difference: " << a - b << endl;
    cout << "product: " << a*b << endl;
    if (b != 0) {
        cout << "quotient: " << a/b << endl;
        cout << "remainder: " << a%b << endl;
    } else {
        cout << "cannot divide by zero" << endl;
    }
    return 0;
}