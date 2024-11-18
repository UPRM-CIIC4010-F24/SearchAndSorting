#include <iostream>
#include <vector>
#include <string>

using namespace std; 
// Class definition
class Person {
public:
    string name;
    int age;

    // Constructor
    Person(const string& name, int age) : name(name), age(age) {}

    // Display function
    void display() const {
        cout << "Name: " << name << ", Age: " << age << "\n";
    }
};

// Linear search function for Person objects
int linearSearch(const vector<Person>& people, const string& targetName) {
    for (size_t i = 0; i < people.size(); ++i) {
        if (people[i].name == targetName) { // Comparing based on name
            return i; // Return index if found
        }
    }
    return -1; // Not found
}

int main() {
    // Create a list of Person objects
    vector<Person> people = {
        Person("Alice", 25),
        Person("Bob", 30),
        Person("Charlie", 35),
        Person("Diana", 28)
    };

    // Target name to search
    string targetName = "Charlie";

    // Perform linear search
    int result = linearSearch(people, targetName);

    if (result != -1) {
        cout << "Person found at index " << result << ":\n";
        people[result].display();
    } else {
        cout << "Person with name '" << targetName << "' not found.\n";
    }

    return 0;
}
