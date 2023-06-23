#include "Element.h"

Element::Element() = default;

Element::Element(std::string id) {
    this->id = id;
}

std::string Element::getId() {
    return this->id;
}

void Element::setId(std::string id) {
    this->id = id;
}

std::string Element::toJsonString() {
    nlohmann["id"] = this->id;
    return nlohmann.dump(2);
}
