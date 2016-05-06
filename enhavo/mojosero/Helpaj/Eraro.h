#pragma once

#include <exception>
#include <string>

class Eraro: public std::exception {
public:
	Eraro(const std::string&);
	virtual ~Eraro() throw();
	virtual const char* what() const throw();

private:
	std::string msg;
};
