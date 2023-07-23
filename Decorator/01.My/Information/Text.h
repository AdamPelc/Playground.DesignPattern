#pragma once
#include "Information.h"
#include <string_view>

namespace Information {
  class Text : public Information {
  public:
    ~Text() override = default;
    explicit Text(std::string_view content);
    [[nodiscard]] auto Get() const -> std::string override;
  private:
    std::string mContent;
  };
}
