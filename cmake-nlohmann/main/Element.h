#ifndef ELEMENT_H
#define ELEMENT_H

#include <string>
#include <nlohmann/json.hpp>

using Nlohmann = nlohmann::json;

class Element {
private:
    std::string id;
    Nlohmann nlohmann;

public:
    Element();
    Element(std::string id);

    std::string getId();
    void setId(std::string id);
    std::string toJsonString();
};

#endif
