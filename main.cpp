#include <iostream>
#include <string>

using namespace std;

class Student {
private:
  // Private data members
  string name;
  int age;

public:
  // Public member functions to set and get data
  void setName(const string& newName) {
    name = newName;
  }

  string getName() const {
    return name;
  }

  void setAge(int newAge) {
    if (newAge >= 0) {
      age = newAge;
    } else {
      cout << "Age cannot be negative." << endl;
    }
  }

  int getAge() const {
    return age;
  }
};

int main() {
  // Create an instance of the Student class
  Student student;

  // Set data using public member functions
  student.setName("Omkar Tarawade");
  student.setAge(26);

  // Retrive and display data
  cout << "Student Name: " << student.getName() << endl;
  cout << "Student Age: " << student.getAge() << endl;

  student.setAge(-5);

  return 0;
}

