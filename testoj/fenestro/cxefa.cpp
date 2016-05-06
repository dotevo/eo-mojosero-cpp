#include <iostream>
#include <mojosero/Motoro.h>

using namespace std;

int main()
{
	Mojosero::Motoro motoro{Mojosero::Motoro::GParametro::FULLSCREEN |
					Mojosero::Motoro::GParametro::MULTISCREEN};
	motoro.faru();
	return 0;
}

