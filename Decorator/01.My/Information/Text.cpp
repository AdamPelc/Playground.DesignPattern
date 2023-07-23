#include "Text.h"

namespace Information {

  Text::Text(const std::string_view content) : mContent{content} {}

  auto Text::Get() const -> std::string {
    return mContent;
  }
}
