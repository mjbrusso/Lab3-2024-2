#ifndef CAT_HPP
#define CAT_HPP

#include "pet.hpp"

namespace lab3 {
class cat : public pet {
 public:
  cat(const std::string& name) : pet(name) {}

  void speak() const override;
};
}  // namespace lab3
#endif
