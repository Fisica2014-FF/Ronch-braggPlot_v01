//============================================================================
// Name        : bP_01_main.cpp
// Author      : Francesco Forcher
// Version     : 1.1
// Description : Modify Mean_v04 and produce graphs of energy loss
//============================================================================


#include <iostream>
#include <memory>
#include <vector>
using namespace std;



// PROGETTO PENSATO PER SALVARE TUTTE LE VARIE OPZIONI POSSIBILI
int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	std::unique_ptr<double> p(new double(4));
	std::vector<double> v = {1,2,3};


	cout << *p;
	cout << v[1];
	return 0;
}

