/*Saya Legi Kuswandi mengerjakan LP4 dalam mata kuliah DPBO
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang 
telah dispesifikasikan. Aamiin.*/

#include "Car.cpp"        // Memasukkan definisi kelas Car
#include "Garage.cpp"     // Memasukkan definisi kelas Garage
#include "Motor.cpp"      // Memasukkan definisi kelas Motor
#include "ParkingLot.cpp" // Memasukkan definisi kelas ParkingLot

#include <bits/stdc++.h> // Termasuk header ini, mungkin tidak perlu karena terlalu umum, bisa gunakan header yang spesifik

using namespace std;     // Penggunaan namespace std

int main() {             // Fungsi utama program

    // Mendefinisikan beberapa objek Motor
    Motor motor1("Matic", "4", "F 6789 BCA", "Honda Beat 150", "2021", "Biru");
    Motor motor2("Manual", "15", "F 7189 BCB", "Suzuki Thunder 125", "2007", "Biru");
    Motor motor3("Matic", "3", "F 9080 BKA", "Yamaha Mio 125", "2022", "Hijau");
    Motor motor4("Manual", "10", "F 6089 JKA", "Yamaha R1M", "2021", "Hitam");
    Motor motor5("Manual", "11", "F 4085 KKA", "Honda CBR 1000rr", "2020", "Oren");

    // Mendefinisikan beberapa objek Garage
    Garage garasiAsep("Garasi Asep", "50 m^2");
    Garage garasiLegi("Garasi Legi", "75 m^2");

    // Menambahkan motor-motor ke dalam garasi-garasi
    garasiAsep.addMotor(motor1);
    garasiAsep.addMotor(motor2);
    garasiLegi.addMotor(motor3);
    garasiLegi.addMotor(motor4);
    garasiLegi.addMotor(motor5);

    // Mendefinisikan beberapa objek Car
    Car car1("4", "4", "F 6063 ZKA", "Suzuki Alphard", "2021", "Merah");
    Car car2("2", "2", "F 7072 JKA", "Honda CRV", "2022", "Hitam");
    Car car3("4", "5", "F 1011 HKA", "Toyota Supra", "2010", "Kuning");
    Car car4("2", "7", "F 5037 BKA", "Daihatsu Ayla", "2023", "Merah");
    Car car5("4", "4", "F 8081 LKA", "Fuso", "2013", "Hitam");

    // Menambahkan mobil-mobil ke dalam garasi-garasi
    garasiAsep.addMobil(car1);
    garasiAsep.addMobil(car2);
    garasiAsep.addMobil(car3);
    garasiLegi.addMobil(car4);
    garasiLegi.addMobil(car5);

    // Mendefinisikan vector daftar_garasi dan menyimpan objek garasiAsep dan garasiLegi di dalamnya
    vector<Garage> daftar_garasi;
    daftar_garasi.push_back(garasiAsep);
    daftar_garasi.push_back(garasiLegi);

    // Menampilkan informasi tentang garasi-garasi beserta kendaraan-kendaraan di dalamnya
    cout << "============Garasi Gaul=============" << endl;
    for (Garage garasi : daftar_garasi) {
        cout << "=================================================" << endl;
        cout << "Nama Garasi: " << garasi.getNamaGarasi() << endl;
        cout << "Luas Garasi: " << garasi.getLuasGarasi() << endl;
        cout << "=================================================" << endl;
        cout << "Daftar Kendaraan di " << garasi.getNamaGarasi() << endl;
        cout << "=================================================" << endl;
        cout << "============Motor=============" << endl;
        for (Motor motor : garasi.getMotor()) {
            // Menampilkan informasi tentang setiap motor di dalam garasi
            cout << "Jenis Motor     : " << motor.getJenis_motor() << endl;
            cout << "Kapasitas Tanki : " << motor.getKapasitas_tanki() << endl;
            cout << "Merk            : " << motor.getMerk() << endl;
            cout << "Plat Nomor      : " << motor.getPlatnomor() << endl;
            cout << "Tahun Produksi  : " << motor.getTahun_produksi() << endl;
            cout << "Warna           : " << motor.getwarna() << endl << endl;
        }
        cout << "============Mobil=============" << endl;
        for (Car mobil : garasi.getMobil()) {
            // Menampilkan informasi tentang setiap mobil di dalam garasi
            cout << "Jumlah Kursi    : " << mobil.getJumlahkursi() << endl;
            cout << "Jumlah pintu    : " << mobil.getJumlah_pintu() << endl;
            cout << "Merk            : " << mobil.getMerk() << endl;
            cout << "Plat Nomor      : " << mobil.getPlatnomor() << endl;
            cout << "Tahun Produksi  : " << mobil.getTahun_produksi() << endl;
            cout << "Warna           : " << mobil.getwarna() << endl << endl;
        }
    }

    // Menampilkan informasi tentang Parking Lot
    cout << "============Parking Lot Gaul=============" << endl;

    // Mendefinisikan beberapa objek Motor dan Car untuk dimasukkan ke dalam Parking Lot
    Motor motor6("Manual", "15", "F 7189 BCB", "Suzuki Thunder 125", "2007", "Biru");
    Car car6("2", "2", "F 7072 JKA", "Honda CRV", "2022", "Hitam");
    Motor motor7("Matic", "3", "F 9080 BKA", "Yamaha Mio 125", "2022", "Hijau");
    Car car7("4", "5", "F 1011 HKA", "Toyota Supra", "2010", "Kuning");
    Motor motor8("Manual", "10", "F 6089 JKA", "Yamaha R1M", "2021", "Hitam");
    Car car8("2", "7", "F 5037 BKA", "Daihatsu Ayla", "2023", "Merah");

    // Mendefinisikan objek ParkingLot
    ParkingLot pklUjang;
    pklUjang.setKapasitas("20");

    // Menambahkan kendaraan-kendaraan ke dalam Parking Lot
    pklUjang.addMobil(car6);
    pklUjang.addMobil(car7);
    pklUjang.addMobil(car8);
    pklUjang.addMotor(motor6);
    pklUjang.addMotor(motor7);
    pklUjang.addMotor(motor8);

    // Mendefinisikan vector parking dan menyimpan objek ParkingLot di dalamnya
    vector<ParkingLot> parking;
    parking.push_back(pklUjang);

    // Mendefinisikan beberapa objek Motor, Car, dan ParkingLot untuk dimasukkan ke dalam Parking Lot lainnya
    Motor motor9("Manual", "10", "F 6089 JKA", "Yamaha R1M", "2021", "Hitam");
    Motor motor10("Manual", "11", "F 4085 KKA", "Honda CBR 1000rr", "2020", "Oren");
    Car car9("4", "4", "F 6063 ZKA", "Suzuki Alphard", "2021", "Merah");
    Car car10("2", "2", "F 7072 JKA", "Honda CRV", "2022", "Hitam");
    ParkingLot pklUjing;
    pklUjing.setKapasitas("10");

    // Menambahkan kendaraan-kendaraan ke dalam Parking Lot lainnya
    pklUjing.addMobil(car9);
    pklUjing.addMobil(car10);
    pklUjing.addMotor(motor9);
    pklUjing.addMotor(motor10);

    // Menambahkan objek ParkingLot lainnya ke dalam vector parking
    parking.push_back(pklUjing);

    // Menampilkan informasi tentang Parking Lot
    for (ParkingLot parkingL : parking) {
        int i = 0;
        for (Motor motor : parkingL.getMotor()) {
            i++;
        }
        for (Car mobil : parkingL.getMobil()) {
            i++;
        }
        // Mengatur jumlah kendaraan saat ini di dalam Parking Lot
        if(i == 0){
            pklUjang.setJumlahKendaraan(i);
        }else{
            pklUjing.setJumlahKendaraan(i);
        }
        // Menampilkan informasi tentang Parking Lot
        cout << "=================================================" << endl;
        cout << "Kapasitas                 : " << parkingL.getKapasitas() << endl;
        cout << "Jumlah Kendaraan Saat Ini : " << parkingL.getJumlahKendaraan() << endl;
        cout << "=================================================" << endl;
    }
    
    return 0;
}
