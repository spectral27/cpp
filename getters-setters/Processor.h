#ifndef PROCESSOR_H
#define PROCESSOR_H

#include <string>

class Processor {
private:
	int id;
	std::string model;

public:
	int getId() const;
	void setId(const int& id);
	std::string getModel() const;
	void setModel(const std::string& model);
};

#endif
