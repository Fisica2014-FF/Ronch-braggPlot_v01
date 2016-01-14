#ifndef EnergyDist_h
#define EnergyDist_h

... include header files ...

class EnergyDist: public AnalysisSteering {

 public:

  EnergyDist();
  virtual ~EnergyDist();

  // function to be called at execution start
  ...
  // function to be called at execution end
  ...
  // function to be called for each event
  ...

 private:

  // Bragg curve information
  struct ... {
    ...  // mean and rms energies
    ...  // energy loss graph
  };

  // set of Bragg curves for different total energies
  ...

  // create objects for a Bragg curve
  void bCreate( int id, float min, float max );

  EnergyDist           ( const EnergyDist& x );
  EnergyDist& operator=( const EnergyDist& x );

};

#endif

