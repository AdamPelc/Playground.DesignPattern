#pragma once
#include "Information/Decorator/Decorator.h"

namespace Information::Decorator
{
  class Quotes : public Decorator {
  public:
    ~Quotes() override = default;
    explicit Quotes(std::shared_ptr<Information> information);
    [[nodiscard]] auto Get() const -> std::string override;
  };
}
