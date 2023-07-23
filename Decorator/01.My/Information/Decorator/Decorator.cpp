#include "Decorator.h"

#include <utility>

namespace Information::Decorator {
  Decorator::Decorator(std::shared_ptr<Information> information) : mInformation{std::move(information)} {}

  auto Decorator::Get() const -> std::string {
    return mInformation->Get();
  }
}
