/*
   Program name:
   Programmer:  Alex Pulikkottil
   Date:
   Version:
   Description: virtual functions, abstract class, friend functions
*/

#include <iostream>
#include <string>

class Student {

  friend class Undergraduate;
  friend class Graduate;

private:
  int m_id{};
  std::string m_name;

public:
  virtual void species() {}
  virtual void type() {}
};

class Undergraduate : public Student {
private:
  std::string m_status;
  int m_accessLevel{};

public:
  void species() { std::cout << "I am \n"; }
  void naaame(std::string n) { m_name = n; }
  void who() { std::cout << m_name << '\n'; }
};

class Graduate : public Student {
private:
  int m_accssLevel{};

public:
  void species() { std::cout << "I am a graduate\n"; }
  void naaame(std::string n) { m_name = n; }
  void who() { std::cout << m_name << '\n'; }
};

void fun(Student s) { std::cout << "I am a student\n"; }

int main() {
  Undergraduate sam;
  Graduate jim;
  jim.naaame("Jimmy");
  sam.naaame("Sammy");
  sam.who();
  jim.who();
  fun(sam);
  fun(jim);
}