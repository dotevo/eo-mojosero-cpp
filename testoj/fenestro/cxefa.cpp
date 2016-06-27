#include <iostream>
#include <mojosero/Motoro.hpp>

using namespace std;

int main() {
	Mojosero::Motoro motoro;
	motoro.initigxu(Mojosero::Motoro::REGXIMO::TUTEKRANA | Mojosero::Motoro::REGXIMO::PLUREKRANA);
	motoro.faru();
	return 0;
}

