#include <iostream>
using namespace std;

class Student {
private:
    string rollNumber; // private: cannot be accessed directly outside the class
public:
    string name; // public: can be accessed directly

    // Public function to set private data
    void setRollNumber(string r) {
        rollNumber = r;
    }

    // Public function to get private data
    string getRollNumber() {
        return rollNumber;
    }
};

int main() {
    Student s1;

    // Accessing public member directly
    s1.name = "DEEPTHI";
    cout << "Name: " << s1.name << endl;

    // Accessing private member via public member functions
    s1.setRollNumber("24B11DS074");
    cout << "Roll Number: " << s1.getRollNumber() << endl;

    return 0;
}
