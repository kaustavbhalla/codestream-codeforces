#include <iostream>
using namespace std;

class Animal {
private:
  int ID;

public:
  std::string name = "ABC";
};

class Dog : public Animal {
public:
  void say() { cout << name; }
};

int main() {
  Dog a = Dog();
  a.say();
}
