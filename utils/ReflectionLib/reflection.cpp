#include "reflection.h"

#include <iostream>
#include <string>
#include <unordered_map>

namespace SONNIE {

std::unordered_map<std::string, Factory_Base*>& name_to_factory() {
  static auto result = new std::unordered_map<std::string, Factory_Base*>();
  return *result;
}

void* GET_INSTANCE_BY_NAME(std::string name) {
  if (name_to_factory().count(name) == 1) {
    return name_to_factory().at(name)->Instance();
  } else {
    return nullptr;
  }
}

}  // namespace SONNIE
