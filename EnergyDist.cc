... include header files ...

using namespace std;

EnergyDist::EnergyDist() {
}


EnergyDist::~EnergyDist() {
}


// function to be called at execution start
... {

  // create energy distributions for different total energy ranges
  ...
  return;

}


// function to be called at execution end
... {

  ... open ROOT file ...

  // fill distributions with mean and rms energies

  // number of points
  ...

  // loop over distributions
  ...
  for ( ... ) {
    // get Bragg curve informations:
    // mean and rms energies and energy loss graph
    ...
    // compute results
    ...
    // get mean and rms energies
    ...
    // loop over points
    for ( ... ) {
      // set center and error values in the graph
      // by using SetBinContent and SetBinError, bin count starts from 1
      ...
    }
    // save distribution
    ...
  }

  ... close ROOT file ...

  return;

}


// function to be called for each event
... {
  // loop over energy distributions and pass event to each of them
  ...
  return;
}


  // create objects for a Bragg curve
void EnergyDist::bCreate( int id, float min, float max ) {

  // create energy distribution for events with total energy in given range

  // create name for TH1F object as "hMeaX" with X given by id
  ...

  // bin number equal to point number
  ...

  // create TH1F and statistic objects and store their pointers
  ...

  return;

}

