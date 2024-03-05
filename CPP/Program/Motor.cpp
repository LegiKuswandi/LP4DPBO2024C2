/*Saya Legi Kuswandi mengerjakan LP4 dalam mata kuliah DPBO
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang 
telah dispesifikasikan. Aamiin.*/

// Menggunakan pragma once agar header file hanya di-include satu kali
#pragma once
#include <iostream>
#include <string>
#include "Vehicle.cpp"

// Deklarasi namespace
using namespace std;

class Motor : public Vehicle
{
private:
    string jenis_motor;
    string kapasitas_tanki;
public:
    // Constructor
    Motor()
    {

    }

    // Constructor : Overloading
    Motor(string jenis_motor, string platnomor, string merk, string tahun_produksi, string warna) : Vehicle(platnomor, merk, tahun_produksi, warna){
        this->jenis_motor = jenis_motor;
        kapasitas_tanki = "";
    }

    Motor(string jenis_motor, string kapasitas_tanki, string platnomor, string merk, string tahun_produksi, string warna) : Vehicle(platnomor, merk, tahun_produksi, warna){
        this->jenis_motor = jenis_motor;
        this->kapasitas_tanki = kapasitas_tanki;
    }

    // Method setter untuk set nilai setiap atribut pada kelas Motor
    void setJenis_motor(string jenis_motor){
        this->jenis_motor = jenis_motor;
    }

    // Method getter untuk mendapatkan nilai setiap atribut pada kelas Motor
    string getJenis_motor(){
        return jenis_motor;
    }

    // Method setter untuk set nilai setiap atribut pada kelas Motor
    void setKapasitas_tanki(string kapasitas_tanki){
        this->kapasitas_tanki = kapasitas_tanki;
    }

    // Method getter untuk mendapatkan nilai setiap atribut pada kelas Motor
    string getKapasitas_tanki(){
        return kapasitas_tanki;
    }
    
    // Destructor
    ~Motor()
    {

    }
};