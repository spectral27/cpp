#include "Processor.h"

const std::string& Processor::getId() const {
	return id;
}

void Processor::setId(const std::string &id) {
	this->id = id;
}
