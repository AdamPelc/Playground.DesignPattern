#include "Underscores.h"

#include <utility>


namespace Information::Decorator {
Underscores::Underscores(std::shared_ptr<Information> information) : Decorator(std::move(information)) {}

auto Underscores::Get() const -> std::string {
  return "_" + Decorator::Get() + "_";
}
}
