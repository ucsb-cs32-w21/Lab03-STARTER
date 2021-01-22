#ifndef DEMOG_H
#define DEMOG_H

#include <string>
#include<iostream>

using namespace std;

/*
  class to represent county demographic data
  from CORGIS
*/
class demogData {
  public:
    demogData(string inN, string inS, double in65, double in18,
        double in5, double inBA, double inHS) :
            name(inN), state(inS), popOver65(in65), popUnder18(in18),
            popUnder5(in5), bachelorDegreeUp(inBA), highSchoolUp(inHS) {
    }
    /* leaving for testing framework - imperfect */
    demogData(string inN, string inS, double in65, double in18,
        double in5) :
            name(inN), state(inS), popOver65(in65), popUnder18(in18),
            popUnder5(in5), bachelorDegreeUp(0), highSchoolUp(0) {
    }

    string getName() { return name; }
    string getState() { return state; }
    double getpopOver65() { return popOver65; }
    double getpopUnder18() { return popUnder18; }
    double getpopUnder5() { return popUnder5; }
    double getBAup() { return bachelorDegreeUp; }
    double getHSup() { return highSchoolUp; }

   friend std::ostream& operator<<(std::ostream &out, const demogData &DD);

private:
    const string name;
    const string state;
    const double popOver65;
    const double popUnder18;
    const double popUnder5;
    const double bachelorDegreeUp;
    const double highSchoolUp;
};
#endif
