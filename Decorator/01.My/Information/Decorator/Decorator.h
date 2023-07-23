#pragma once

#include "Information/Information.h"
#include <memory>

namespace Information::Decorator {
  class Decorator : public Information {
  public:
    ~Decorator() override = default;
    explicit Decorator(std::shared_ptr<Information> information);
    [[nodiscard]] auto Get() const -> std::string override;
  private:
    std::shared_ptr<Information> mInformation;
  };
}
