#pragma once

#include <mojosero/Eksteraj/simplesignal.h>

namespace Mojosero{
class Motoro{
public:
	Motoro();
	virtual ~Motoro();

	bool initigxu();
	bool faru();
private:
	bool a_finata = false;
};
}
