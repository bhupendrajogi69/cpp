#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double radius;

    // Prompt the user to enter the radius of the circle
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    // Calculate the perimeter and area of the circle
    double perimeter = 2 * M_PI * radius;
    double area = M_PI * pow(radius, 2);

    // Calculate the volume of the sphere with the same radius
    double volume = (4.0 / 3.0) * M_PI * pow(radius, 3);

    // Display the results
    cout << "Perimeter of the circle: " << perimeter << endl;
    cout << "Area of the circle: " << area << endl;
    cout << "Volume of the sphere with the same radius: " << volume << endl;

    return 0;
}
