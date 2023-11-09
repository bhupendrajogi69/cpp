#include <iostream>
#include <string>

using namespace std;

class Person {
public:
    // Constructor
    Person(string n, int a) {
        name = n;
        age = a;
    }

    // Member function to display information
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

private:
    // Attributes
    string name;
    int age;
};

int main() {
    // Creating an object of the Person class and calling the constructor
    Person person1("Bhupendra Jogi", 25);

    // Calling the member function to display information
    cout << "Person 1 Information:" << endl;
    person1.displayInfo();

 return 0;
}