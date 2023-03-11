#pragma once

#include "Base.h"

namespace cookbook {

class Derived : public Base {
public:
  Derived();
  ~Derived();

  void method();
  void virtual_method() override;

  void base_method();
};

} // namespace cookbook
