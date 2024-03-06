from typing import List
from Car import Car
from Motor import Motor

class ParkingLot:
    def __init__(self, kapasitas="", jumlah_kendaraan_saat_ini=0):
        # Inisialisasi atribut tempat parkir
        self.kapasitas = kapasitas  # Kapasitas tempat parkir
        self.jumlah_kendaraan_saat_ini = jumlah_kendaraan_saat_ini  # Jumlah kendaraan saat ini di tempat parkir
        self.mobil = []  # Daftar mobil yang terparkir
        self.motor = []  # Daftar motor yang terparkir

    # Method untuk menambahkan mobil ke tempat parkir
    def add_mobil(self, mobil):
        self.mobil.append(mobil)
        self.jumlah_kendaraan_saat_ini += 1  # Tambah jumlah kendaraan saat menambah mobil

    # Method untuk menambahkan motor ke tempat parkir
    def add_motor(self, motor):
        self.motor.append(motor)
        self.jumlah_kendaraan_saat_ini += 1  # Tambah jumlah kendaraan saat menambah motor

    # Method untuk mendapatkan kapasitas tempat parkir
    def get_kapasitas(self) -> str:
        return self.kapasitas

    # Method untuk mengatur kapasitas tempat parkir
    def set_kapasitas(self, kapasitas: str):
        self.kapasitas = kapasitas

    # Method untuk mendapatkan jumlah kendaraan saat ini di tempat parkir
    def get_jumlah_kendaraan(self) -> int:
        return self.jumlah_kendaraan_saat_ini

    # Method untuk mengatur jumlah kendaraan saat ini di tempat parkir
    def set_jumlah_kendaraan(self, jumlah: int):
        self.jumlah_kendaraan_saat_ini = jumlah

    # Method untuk mendapatkan daftar motor yang terparkir
    def get_motor(self) -> List[Motor]:
        return self.motor

    # Method untuk mendapatkan daftar mobil yang terparkir
    def get_mobil(self) -> List[Car]:
        return self.mobil
