#pragma once

#include <vector>
#include <memory>

using namespace std;

#include <mojosero/Eksteraj/simplesignal.hpp>
#include <mojosero/Eksteraj/bitmask_operators.hpp>

#include <mojosero/Objekto.hpp>
#include <mojosero/Fenestro.hpp>

namespace Mojosero {
class Motoro: public Objekto {
public:
	enum class REGXIMO {
		NENIA       = 0x0,
		PLUREKRANA  = 0x1,
		TUTEKRANA   = 0x2
	};
	Motoro();
	virtual ~Motoro();


	bool initigxu(REGXIMO regximo);
	bool faru();
private:
	bool a_finata = false;
	vector<shared_ptr<Fenestro>> a_fenestroj;
};
}

template<>
struct enable_bitmask_operators<Mojosero::Motoro::REGXIMO>{
	static const bool enable=true;
};
