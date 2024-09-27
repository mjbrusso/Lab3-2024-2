#ifndef PET_HPP  // include guard

#define PET_HPP

#include <iostream>
#include <string>

namespace lab3 {
class pet {
 protected:
  std::string m_name;

 public:
  // constructor
  pet(const std::string &name) : m_name{name} {
    // std::cout << m_name << " was born!\n";
  }

  // destructor
  virtual ~pet() { 
    //  std::cout << m_name << " died 😭\n"; 
  }

  void set_name(const std::string &name) { m_name = name; }

  std::string name() const { return m_name; }

  virtual void speak() const = 0; 
};
}  // namespace lab3
#endif