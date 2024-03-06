from typing import List
from Car import Car
from Motor import Motor

class Garage:
    def __init__(self, nama_garasi="", luas_garasi=""):
        # Inisialisasi atribut garasi
        self.nama_garasi = nama_garasi  # Nama garasi
        self.luas_garasi = luas_garasi  # Luas garasi
        self.mobil = []  # Daftar mobil yang ada di garasi
        self.motor = []  # Daftar motor yang ada di garasi

    # Method untuk menambahkan mobil ke dalam garasi
    def add_mobil(self, mobil):
        self.mobil.append(mobil)

    # Method untuk menambahkan motor ke dalam garasi
    def add_motor(self, motor):
        self.motor.append(motor)

    # Method untuk mendapatkan daftar mobil di garasi
    def get_mobil(self) -> List[Car]:
        return self.mobil

    # Method untuk mendapatkan daftar motor di garasi
    def get_motor(self) -> List[Motor]:
        return self.motor

    # Method untuk mendapatkan nama garasi
    def get_nama_garasi(self) -> str:
        return self.nama_garasi

    # Method untuk mengatur nama garasi
    def set_nama_garasi(self, nama_garasi: str):
        self.nama_garasi = nama_garasi

    # Method untuk mendapatkan luas garasi
    def get_luas_garasi(self) -> str:
        return self.luas_garasi

    # Method untuk mengatur luas garasi
    def set_luas_garasi(self, luas_garasi: str):
        self.luas_garasi = luas_garasi
