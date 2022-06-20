/*
   Program name:
   Programmer:  Alex Pulikkottil
   Date:
   Version:
   Description: virtual functions
*/

#include <iostream>
#include <string>

class Student {
private:
  int id{};
  std::string name;

public:
  virtual void species() { std::cout << "I am human\n"; }
  virtual void type() { std::cout << "I am a student\n"; }
};

class Undergraduate : public Student

{

private:
  std::string status;
  int accessLevel{};

public:
  void species(){std::cout << "I am ";};
  void access(int accessLevel) {
    std::cout << "access level is: " << accessLevel << '\n';
  };
  void studentStatus() { std::cout << "I am an undergrad\n"; };
};

int main()

{
  Undergraduate sam;

  sam.species();
  sam.access(2);
  sam.studentStatus();
}