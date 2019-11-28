//
// Created by eduar on 28-Nov-19.
//


#include "diagnosticAlgorithm.h"

state_t answer() {
    string ans;
    do {
        cout << "\nRespuesta: ";
        cin >> ans;
        for (auto &c: ans) c = tolower(c);
        if (ans == "si" || ans == "1")
            return 1;
        else if (ans == "no" || ans == "0")
            return 0;
        else cout << "\nNo es una respuesta valida\n";
    } while (true);
}

void earlyAppearanceOfSneezing(cPatient &cP) {

}

void constantSneezing(cPatient &cP) {
    cout << "";
    state_t presence = answer();
    if (presence){
        cSymptom objCS("Constant Sneezing", presence);
        cP.disease.addSymptom(objCS);
    } else earlyAppearanceOfSneezing(cP);
}
