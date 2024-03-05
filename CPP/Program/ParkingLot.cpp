/*Saya Legi Kuswandi mengerjakan LP4 dalam mata kuliah DPBO
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang 
telah dispesifikasikan. Aamiin.*/

#pragma once

#include "Car.cpp"
#include "Motor.cpp"
#include <iostream>
#include <vector>
using namespace std;

class ParkingLot {
private:
    string kapasitas;
    int jumlah_kendaraan_saat_ini;
    vector<Motor> motor;
    vector<Car> mobil;

public:
    // Constructor
    ParkingLot() {}


    ParkingLot(string kapasitas, int jumlah_kendaraan_saat_ini, Motor motor, Car mobil) {
        this->kapasitas = kapasitas;
        this->jumlah_kendaraan_saat_ini = jumlah_kendaraan_saat_ini;
        this->motor.push_back(motor);
        this->mobil.push_back(mobil);
    }

    // Getter and Setter
    string getKapasitas() {
        return kapasitas;
    }

    void setKapasitas(string kapasitas) {
        this->kapasitas = kapasitas;
    }

    int getJumlahKendaraan() { // Getter untuk jumlah kendaraan saat ini
        return jumlah_kendaraan_saat_ini;
    }

    void setJumlahKendaraan(int jumlah) { // Setter untuk jumlah kendaraan saat ini
        this->jumlah_kendaraan_saat_ini = jumlah;
    }

    void addMotor(Motor motor) {
        this->motor.push_back(motor);
        jumlah_kendaraan_saat_ini++; // Tambah jumlah kendaraan saat menambah motor
    }

    vector<Motor> getMotor() {
        return this->motor;
    }

    void addMobil(Car mobil) {
        this->mobil.push_back(mobil);
        jumlah_kendaraan_saat_ini++; // Tambah jumlah kendaraan saat menambah mobil
    }

    vector<Car> getMobil() {
        return this->mobil;
    }

    // Destructor
    ~ParkingLot() {}
};
