#include "Processor.h"

int Processor::getId() const {
	return id;
}

void Processor::setId(const int& id) {
	this->id = id;
}

std::string Processor::getModel() const {
	return model;
}

void Processor::setModel(const std::string& model) {
	this->model = model;
}
