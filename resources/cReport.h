//
// Created by eduar on 28-Nov-19.
//

#ifndef KARUSAMPI_CREPORT_H
#define KARUSAMPI_CREPORT_H


#include "cPatient.h"

class cReport {
    cPatient* pPatient;
public:
    explicit cReport(cPatient* pP): pPatient(pP) {}
};


#endif //KARUSAMPI_CREPORT_H
