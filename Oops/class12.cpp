#include <iostream>
#include <string>
using namespace std;

class Animal {
public:
    int age;
    string name;

    // Default constructor
    Animal() {
        age = 0;
        name = "Unknown";
    }

    // Parameterized constructor
    Animal(int age, string name) {
        this->age = age;
        this->name = name;
    }

    // Destructor
    ~Animal() {
        cout << "Animal object destroyed" << endl;
    }
};

int main() {
    // Dynamically allocate memory for the Animal object
    Animal* dog = new Animal(5, "Buddy");  // Allocating on the heap

    // Accessing members using pointer dereferencing
    cout << "Dog's Name: " << dog->name << endl;  // Use '->' to access members
    cout << "Dog's Age: " << dog->age << endl;

    // Deallocate the memory when done
    delete dog;  // Free the dynamically allocated memory

    return 0;
}
