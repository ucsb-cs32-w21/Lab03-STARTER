#ifndef RATING_H
#define RATING_H

#include <string>
#include <iostream>

using namespace std;

/* 
A class to represent a rating system that uses both words and numbers
(see CORGIS hospital data for an example)
Rating.Overall  Integer     Overall rating between 1 and 5 stars, with 5 stars being the highest rating; -1 represents no rating.
Rating.Mortality    String  Above, Same, Below, or Unknown comparison to national hospital mortality
Rating.Safety   String  Above, Same, Below, or Unknown comparison to national hospital safety 
*/
class rating {
  public:
    rating(double inRating)  {
        //TODO implement
    }
    rating(string inRating) {
        //TODO implement
    }

    const string getRating() const;
    double getRatingNum() const;

    friend std::ostream& operator<<(std::ostream &out, const rating &r) {
        //TODO implement
        return out;
    }

    rating& operator/=(const double Sc) {
        //TODO implement
    }

    /* implement other operators for example, maybe... */
    rating& operator/(const int Sc) {
        //TODO implement
    }

    rating& operator+=(const rating r) {
        //TODO implement
    }
    
    bool operator < (const rating& r) {
        //TODO implement
    }
    
private:
            //TODO implement
};
#endif
