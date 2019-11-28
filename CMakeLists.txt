cmake_minimum_required(VERSION 3.15)
project(KaruSampi)

set(CMAKE_CXX_STANDARD 14)

add_executable(KaruSampi main.cpp types.h resources/cSymptom.cpp resources/cSymptom.h resources/cDisease.cpp resources/cDisease.h resources/cPatient.cpp resources/cPatient.h resources/cReport.cpp resources/cReport.h resources/cDoctor.cpp resources/cDoctor.h resources/cMedicine.cpp resources/cMedicine.h diagnosticAlgoritm.h diagnosticAlgoritm.cpp)