#include "Quotes.h"

#include <utility>

namespace Information::Decorator
{
  Quotes::Quotes(std::shared_ptr<Information> information) : Decorator(std::move(information)) {}

  auto Quotes::Get() const -> std::string {
    return "\"" + Decorator::Get() + "\"";
  }
}
