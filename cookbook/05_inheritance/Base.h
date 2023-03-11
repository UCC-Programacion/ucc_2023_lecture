#pragma once

namespace cookbook {

class Base {
public:
  Base();
  virtual ~Base();

  void method();
  virtual void virtual_method();
};

} // namespace cookbook
