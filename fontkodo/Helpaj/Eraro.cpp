#include <mojosero/Helpaj/Eraro.h>

Eraro::Eraro(const std::string& m):
	exception(), msg(m) {
}

Eraro::~Eraro() throw() {
}

const char* Eraro::what() const throw() {
	return msg.c_str();
}
