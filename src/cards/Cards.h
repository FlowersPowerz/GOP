//
// Created by notty on 11/01/2018.
//

#ifndef GOP_CARDS_H
#define GOP_CARDS_H

#include <string>
#include <iostream>
#include <time.h>

using namespace std;

class Cards {

    private:
        string message;
    protected:
        int value;
    public:
        Cards();
        Cards(string message);
        void setMessage(string message);
        string getMessage();
        int getValue();
        void effetto();
};


#endif //GOP_CARDS_H