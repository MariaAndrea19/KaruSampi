//
// Created by eduar on 28-Nov-19.
//

#ifndef KARUSAMPI_CPATIENT_H
#define KARUSAMPI_CPATIENT_H

#include "../types.h"
#include "cDisease.h"
class cPatient {
private:
    text_t name;
    gender_t gender;
    age_t age;
    kilogram_t mass;
    meter_t height;
    mmhg_t systolicPressure;
    mmhg_t diastolicPressure;
    bpm_t heartRate;
    imc_t imc;
    cDisease disease;
public:
    cPatient(text_t &n, gender_t &g, age_t &a, kilogram_t &m, meter_t &h, mmhg_t &sP, mmhg_t &dP, bpm_t &hR):
    name(n), age(a), gender(g), mass(m), height(m), systolicPressure(sP), diastolicPressure(dP), heartRate(hR), imc(m / h * h){}

};


#endif //KARUSAMPI_CPATIENT_H
