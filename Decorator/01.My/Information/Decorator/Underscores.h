#pragma once

#include "Decorator.h"

namespace Information::Decorator
{
  class Underscores : public Decorator {
  public:
    ~Underscores() override = default;
    explicit Underscores(std::shared_ptr<Information> information);
    [[nodiscard]] auto Get() const -> std::string override;
  };
}
