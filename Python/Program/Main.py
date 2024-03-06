# Saya Legi Kuswandi mengerjakan LP4 dalam mata kuliah DPBO
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang 
# telah dispesifikasikan. Aamiin.

from typing import List
from Car import Car
from Motor import Motor
from Garage import Garage
from ParkingLot import ParkingLot

# Fungsi utama program
def main():
    # Membuat objek-objek garasi
    garasi_asep = Garage("Garasi Asep", "50 m^2")
    garasi_legi = Garage("Garasi Legi", "75 m^2")

    # Membuat objek-objek motor dan mobil, lalu menambahkannya ke garasi Asep
    motor1 = Motor("Matic", "4", "F 6789 BCA", "Honda Beat 150", "2021", "Biru")
    motor2 = Motor("Manual", "15", "F 7189 BCB", "Suzuki Thunder 125", "2007", "Biru")
    garasi_asep.add_motor(motor1)
    garasi_asep.add_motor(motor2)

    car1 = Car("4", "4", "F 6063 ZKA", "Suzuki Alphard", "2021", "Merah")
    car2 = Car("2", "2", "F 7072 JKA", "Honda CRV", "2022", "Hitam")
    garasi_asep.add_mobil(car1)
    garasi_asep.add_mobil(car2)

    # Menambahkan mobil dan motor ke garasi Legi
    garasi_legi.add_mobil(Car("4", "5", "F 1011 HKA", "Toyota Supra", "2010", "Kuning"))
    garasi_legi.add_mobil(Car("2", "7", "F 5037 BKA", "Daihatsu Ayla", "2023", "Merah"))

    garasi_legi.add_motor(Motor("Matic", "3", "F 9080 BKA", "Yamaha Mio 125", "2022", "Hijau"))
    garasi_legi.add_motor(Motor("Manual", "10", "F 6089 JKA", "Yamaha R1M", "2021", "Hitam"))
    garasi_legi.add_motor(Motor("Manual", "11", "F 4085 KKA", "Honda CBR 1000rr", "2020", "Oren"))

    # Menyimpan garasi-garasi dalam sebuah list
    daftar_garasi = [garasi_asep, garasi_legi]

    # Menampilkan informasi tentang kendaraan di setiap garasi
    for garasi in daftar_garasi:
        print("=================================================")
        print("Nama Garasi:", garasi.nama_garasi)
        print("Luas Garasi:", garasi.luas_garasi)
        print("=================================================")
        print("Daftar Kendaraan di", garasi.nama_garasi)
        print("=================================================")
        print("============Motor=============")
        for motor in garasi.motor:
            print("Jenis Motor     :", motor.jenis_motor)
            print("Kapasitas Tanki :", motor.kapasitas_tangki)
            print("Merk            :", motor.merk)
            print("Plat Nomor      :", motor.platnomor)
            print("Tahun Produksi  :", motor.tahun_produksi)
            print("Warna           :", motor.warna)
            print()
        print("============Mobil=============")
        for mobil in garasi.mobil:
            print("Jumlah Kursi    :", mobil.jumlah_kursi)
            print("Jumlah pintu    :", mobil.jumlah_pintu)
            print("Merk            :", mobil.merk)
            print("Plat Nomor      :", mobil.platnomor)
            print("Tahun Produksi  :", mobil.tahun_produksi)
            print("Warna           :", mobil.warna)
            print()

    # Membuat objek-objek ParkingLot dan menambahkan kendaraan ke dalamnya
    pkl_ujang = ParkingLot("20")
    pkl_ujang.add_mobil(Car("2", "2", "F 7072 JKA", "Honda CRV", "2022", "Hitam"))
    # Tambahkan kendaraan lainnya ke pkl_ujang

    # Menyimpan objek-objek ParkingLot dalam sebuah list
    parking = [pkl_ujang]

    motor9 = Motor("Manual", "10", "F 6089 JKA", "Yamaha R1M", "2021", "Hitam")
    motor10 = Motor("Manual", "11", "F 4085 KKA", "Honda CBR 1000rr", "2020", "Oren")
    car9 = Car("4", "4", "F 6063 ZKA", "Suzuki Alphard", "2021", "Merah")
    car10 = Car("2", "2", "F 7072 JKA", "Honda CRV", "2022", "Hitam")
    pkl_ujing = ParkingLot("10")
    pkl_ujing.add_motor(motor9)
    pkl_ujing.add_motor(motor10)
    pkl_ujing.add_mobil(car9)
    pkl_ujing.add_mobil(car10)

    parking.append(pkl_ujing)

    # Menampilkan informasi tentang setiap tempat parkir
    for parking_lot in parking:
        print("=================================================")
        print("Kapasitas                 :", parking_lot.kapasitas)
        print("Jumlah Kendaraan Saat Ini:", parking_lot.jumlah_kendaraan_saat_ini)
        print("=================================================")

# Memastikan bahwa fungsi main hanya dijalankan jika file dieksekusi sebagai script utama
if __name__ == "__main__":
    main()
