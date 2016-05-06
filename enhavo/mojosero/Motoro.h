#pragma once

#include <mojosero/Eksteraj/bitmask_operators.h>
#include <mojosero/Eksteraj/simplesignal.h>

namespace Mojosero{

class Motoro{
public:
	enum class GParametro{
		NONE = 0,
		FULLSCREEN = 1,
		MULTISCREEN = 2,
	};

	Motoro(GParametro parametro);
	virtual ~Motoro();

	bool faru();
private:
	bool a_finata = false;
};

}

template<> struct enable_bitmask_operators<Mojosero::Motoro::GParametro>{
	static constexpr bool enable=true;
};
