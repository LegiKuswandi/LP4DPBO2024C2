/*Saya Legi Kuswandi mengerjakan LP4 dalam mata kuliah DPBO
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang 
telah dispesifikasikan. Aamiin.*/

#pragma once

#include "Car.cpp"
#include "Motor.cpp"
#include "Vehicle.cpp"
#include <string>
#include <vector>
using namespace std;

class Garage {
  private:
    string nama_garasi;
    string luas_garasi;
    vector<Car> mobil;
    vector<Motor> motor;

  public:
    //   Constructor
    Garage() {
    }

    Garage(string nama_garasi, string luas_garasi) {
        this->nama_garasi = nama_garasi;
        this->luas_garasi = luas_garasi;
    }

    Garage(string nama_garasi, string luas_garasi, Motor motor, Car mobil) {
        this->nama_garasi = nama_garasi;
        this->luas_garasi = luas_garasi;
        this->motor.push_back(motor);
        this->mobil.push_back(mobil);
    }

    // Getter and Setter
    void addMobil(Car mobil) {
        this->mobil.push_back(mobil);
    }
    vector<Car> getMobil() {
        return this->mobil;
    }

    void addMotor(Motor motor) {
        this->motor.push_back(motor);
    }

    vector<Motor> getMotor() {
        return this->motor;
    }

    string getNamaGarasi() {
        return nama_garasi;
    }

    void setNamaGarasi(string nama_garasi) {
        this->nama_garasi = nama_garasi;
    }

    string getLuasGarasi() {
        return luas_garasi;
    }

    void setLuasGarasi(string luas_garasi) {
        this->luas_garasi = luas_garasi;
    }

    // Destructor
    ~Garage() {
    }
};