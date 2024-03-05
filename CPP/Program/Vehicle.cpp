/*Saya Legi Kuswandi mengerjakan LP4 dalam mata kuliah DPBO
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang 
telah dispesifikasikan. Aamiin.*/

// Menggunakan pragma once agar header file hanya di-include satu kali
#pragma once
// Memasukan library yang digunakan
#include <iostream>
#include <string>
// Deklarasi namespace
using namespace std;
class Vehicle {
private:
    string platnomor;
    string merk;
    string tahun_produksi;
    string warna;
public:
    // Constructor
    Vehicle()
    {

    }

    // Constructor : Overloading
    Vehicle(string platnomor){
        this->platnomor = platnomor;
        merk = "";
        tahun_produksi = "";
        warna = "";
    }
    // Constructor : Overloading
    Vehicle(string platnomor, string merk){
        this->platnomor = platnomor;
        this->merk = merk;
        tahun_produksi = "";
        warna = "";
    }
    // Constructor : Overloading
    Vehicle(string platnomor, string merk, string tahun_produksi){
        this->platnomor = platnomor;
        this->merk = merk;
        this->tahun_produksi = tahun_produksi;
        warna = "";
    }
    // Constructor : Overloading
    Vehicle(string platnomor, string merk, string tahun_produksi, string warna){
        this->platnomor = platnomor;
        this->merk = merk;
        this->tahun_produksi = tahun_produksi;
        this->warna = warna;
    }

    // Method setter untuk set nilai setiap atribut pada kelas Vehicle
    void setPlatnomor(string platnomor){
        this->platnomor = platnomor;
    }

    // Method getter untuk mendapatkan nilai setiap atribut pada kelas Vehicle
    string getPlatnomor(){
        return platnomor;
    }

    // Method setter untuk set nilai setiap atribut pada kelas Vehicle
    void setmerk(string merk){
        this->merk = merk;
    }

    // Method getter untuk mendapatkan nilai setiap atribut pada kelas Vehicle
    string getMerk(){
        return merk;
    }

    // Method setter untuk set nilai setiap atribut pada kelas Vehicle
    void setTahun_produksi(string tahun_produksi){
        this->tahun_produksi = tahun_produksi;
    }

    // Method getter untuk mendapatkan nilai setiap atribut pada kelas Vehicle
    string getTahun_produksi(){
        return tahun_produksi;
    }

    // Method setter untuk set nilai setiap atribut pada kelas Vehicle
    void setwarna(string warna){
        this->warna = warna;
    }

    // Method getter untuk mendapatkan nilai setiap atribut pada kelas Vehicle
    string getwarna(){
        return warna;
    }

    // Destructor
    ~Vehicle()
    {

    }
};
