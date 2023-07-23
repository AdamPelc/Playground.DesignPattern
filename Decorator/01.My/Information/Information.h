#pragma once
#include <string>

namespace Information {
  class Information {
  public:
    virtual ~Information() = default;
    [[nodiscard]] virtual auto Get() const -> std::string = 0;
  };
}
