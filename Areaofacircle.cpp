# include <iostream>

using namespace std;

int main(){
    const double pi = 3.14159;
    double radius, area;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    area = pi * radius * radius;
    cout << "Area = " << area << endl;

    return 0;
}