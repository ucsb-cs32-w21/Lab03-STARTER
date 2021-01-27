#include "dataAQ.h"
#include "parse.h"
#include <iostream>
#include "tddFuncs.h"
using namespace std;

int main() {


cout << "Testing hospital sort..." << endl;

	dataAQ theAnswers;

    //read in a csv file and create a vector of objects representing each counties data
    std::vector<shared_ptr<demogData>> theData = read_csv(
            "county_demographics.csv", DEMOG);

    //Would like to add test to query between the two (may need to specify more) 

    //read in a csv file and create a vector of objects representing hospital data
    std::vector<shared_ptr<hospitalData>> theHospitalData = read_csvHospital(
            "hospitals.csv", HOSPITAL);

    theAnswers.createStateHospData(theHospitalData);

    std::vector<stateHosp*> hospHighToLow;
    theAnswers.sortStateHospRatingHighLow(hospHighToLow);

    std::vector<stateDemog*> povertyLevelLowToHigh;
    theAnswers.sortStateDemogPovLevelLowHigh(povertyLevelLowToHigh);

  // Test case #1
  string topHosp[] {"WI", "SD", "UT", "HI", "ID"};
  for (int i=0; i < 5; i++) {
  	ASSERT_EQUALS(topHosp[i], hospHighToLow.at(i)->getState());
  }

  return 0;
}
