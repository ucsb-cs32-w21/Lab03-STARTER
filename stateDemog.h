#ifndef STATE_H
#define STATE_H

#include <memory>
#include <string>
#include <iostream>
#include "demogData.h"

/*
  class to represent state data - fairly redundent at this point but will use
  inheritence next
*/
class stateDemog {
  public:
    stateDemog(string inS) :
            state(inS),
            numCounties(0),popOver65(0), popUnder18(0),
            popUnder5(0), bachelorDegreeUp(0), highSchoolUp(0) {
    }

  string getState() const { return state; }
  double getpopOver65() const { return popOver65/numCounties; }
  double getpopUnder18() const { return popUnder18/numCounties; }
  double getpopUnder5() const { return popUnder5/numCounties; }
  double getBAup() const { return bachelorDegreeUp/numCounties; }
  double getHSup() const { return highSchoolUp/numCounties; }
  int getNumC() const { return numCounties; }

  //note this stores a running total until averageOut - lots of ways to do this
  void addCountytoState(shared_ptr<demogData>  CI);

  friend std::ostream& operator<<(std::ostream &out, const stateDemog &SD);

private:

    const string state;
    double popOver65;
    double popUnder18;
    double popUnder5;
    double bachelorDegreeUp;
    double highSchoolUp;
    int numCounties;
};
#endif
