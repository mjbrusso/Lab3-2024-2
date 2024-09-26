#ifndef DOG_HPP
#define DOG_HPP

#include "pet.hpp"

namespace lab3 {
class dog : public pet {
 public:
  dog(const std::string& name) : pet(name) {}

  void speak() const;
};
}  // namespace lab3
#endif
