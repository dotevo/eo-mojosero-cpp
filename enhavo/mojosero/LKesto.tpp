#pragma once

#include <mojosero/Objekto.hpp>

namespace Mojosero {

template <typename T>
class LKesto: public Objekto {
private:
	T a_x;
	T a_y;
	T a_largxo;
	T a_alto;

public:
	LKesto() {}

	LKesto(T x, T y, T largxo, T alto) :
		a_x(x), a_y(y), a_largxo(largxo), a_alto(alto) {
	}

	T akiriX() const { return a_x; }
	T akiriY() const { return a_y; }
	T akiriLargxo() const { return a_largxo; }
	T akiriAlto() const { return a_alto; }
};
}
