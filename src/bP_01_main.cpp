//============================================================================
// Name        : bP_01_main.cpp
// Author      : Francesco Forcher
// Version     : 1.1
// Description : Modify Mean_v04 and produce graphs of energy loss
//============================================================================


#include <string>
#include <vector>

#include "dbg_macro.h"
#include "EnergyDist.h"
#include "Event.h"
#include "EventDump.h"
#include "EventReadFromFile.h"

int main(int argc, char* argv[]) {
	using namespace std;

	// create data source
	EventSource* es;
	DBG(std::string filename = "./bragg_events.txt";
		, std::string filename = argv[1];)
	es = new EventReadFromFile(filename);

	// create a list of analyzers
	vector<AnalysisSteering*> aList;

	// create object to dump event
	// and store into list of analyzers
	aList.push_back(new EventDump());

	// create object to compute mean and rms energies
	// and store into list of analyzers
	aList.push_back(new EnergyDist());

	// initialize all analyzers
	for (auto& as : aList) {
		as->beginJob();
	}

	// loop over events
	const Event* ev;
	while ((ev = es->get())) {
		for (auto& as : aList) {
			as->process(*ev);
		}
		delete ev;
	}

	// finalize all analyzers
	for (auto& as : aList) {
		as->endJob();
	}

	//Clear memory
	for (auto& as : aList) {
		delete as;
	}
	delete es;


	return 0;
}


