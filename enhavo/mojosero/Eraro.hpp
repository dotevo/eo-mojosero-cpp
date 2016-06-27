#pragma once

#include <exception>
#include <string>
#include <mojosero/Objekto.hpp>

namespace Mojosero {
class Eraro: public Objekto,
		public std::exception {
public:
	Eraro(const std::string&);
	virtual ~Eraro() throw();
	virtual const char* what() const throw();

private:
	std::string msg;
};

}
