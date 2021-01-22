
#include "dataAQ.h"
#include "parse.h"
#include <iostream>
#include "tddFuncs.h"
using namespace std;

int main() {
  cout << "Testing state data aggregation query..." << endl;

	dataAQ theAnswers;

    //read in a csv file and create a vector of objects representing each counties data
    /*std::vector<shared_ptr<demogData>> theData = read_csv(
            "county_demographics.csv", DEMOG);*/

    //Would like to add test to query between the two (may need to specify more) 

    //read in a csv file and create a vector of objects representing hospital data
    std::vector<shared_ptr<hospitalData>> theHospitalData = read_csvHospital(
            "hospitals.csv", HOSPITAL);

    //theAnswers.createStateDemogData(theData);
    theAnswers.createStateHospData(theHospitalData);

    string highHosp = theAnswers.HighHospRating();
  	ASSERT_EQUALS("WI",highHosp);

  	string highReadmit = theAnswers.HighReadmitHospRating();
  	ASSERT_EQUALS("ID", highReadmit);

  return 0;
}
