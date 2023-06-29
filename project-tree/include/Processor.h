#ifndef PROCESSOR_H
#define PROCESSOR_H

#include <string>

class Processor {
private:
	std::string id;

public:
	const std::string& getId() const;
	void setId(const std::string &id);
};

#endif
