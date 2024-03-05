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

class Car : public Vehicle
{
private:
    string jumlah_kursi;
    string jumlah_pintu;
public:
    // Constructor
    Car()
    {

    }

    // Constructor : Overloading
    Car(string jumlah_kursi, string platnomor, string merk, string tahun_produksi, string warna) : Vehicle(platnomor, merk, tahun_produksi, warna){
        this->jumlah_kursi = jumlah_kursi;
        jumlah_pintu = "";
    }

    Car(string jumlah_kursi, string jumlah_pintu, string platnomor, string merk, string tahun_produksi, string warna) : Vehicle(platnomor, merk, tahun_produksi, warna){
        this->jumlah_kursi = jumlah_kursi;
        this->jumlah_pintu = jumlah_pintu;
    }

    // Method setter untuk set nilai setiap atribut pada kelas Car
    void setJumlah_kursi(string jumlah_kursi){
        this->jumlah_kursi = jumlah_kursi;
    }

    // Method getter untuk mendapatkan nilai setiap atribut pada kelas Car
    string getJumlahkursi(){
        return jumlah_kursi;
    }

    // Method setter untuk set nilai setiap atribut pada kelas Car
    void setJumlah_pintu(string jumlah_pintu){
        this->jumlah_pintu = jumlah_pintu;
    }

    // Method getter untuk mendapatkan nilai setiap atribut pada kelas Car
    string getJumlah_pintu(){
        return jumlah_pintu;
    }
    
    // Destructor
    ~Car()
    {

    }
};