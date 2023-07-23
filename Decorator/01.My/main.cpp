#include "Information/Text.h"
#include "Information/Decorator/Quotes.h"
#include "Information/Decorator/Underscores.h"
#include <iostream>
#include <memory>

auto main() -> int {
  const std::shared_ptr<Information::Information> information{std::make_shared<Information::Text>("Some raw text")};
  auto informationWithQuotes = std::make_shared<Information::Decorator::Quotes>(information);
  auto informationWithQuotesAndUnderscores = std::make_shared<Information::Decorator::Underscores>(informationWithQuotes);
  std::cout << informationWithQuotesAndUnderscores->Get() << "\n";
  
  return 0;
}
