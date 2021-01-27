#include "stateDemog.h"
#include "demogData.h"
#include <sstream>
#include <string>
#include <assert.h>

 //note this stores a running total until averageOut 
//just adds the current county info to the running total
void stateDemog::addCountytoState(shared_ptr<demogData> CI) {
}

/* print state data - as average of all the county data */
std::ostream& operator<<(std::ostream &out, const stateDemog&SD) {

}
