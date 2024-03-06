from Vehicle import Vehicle

class Car(Vehicle):
    def __init__(self, jumlah_kursi="", jumlah_pintu="", platnomor="", merk="", tahun_produksi="", warna=""):
        # Memanggil konstruktor kelas induk (Vehicle)
        super().__init__(platnomor, merk, tahun_produksi, warna)
        # Inisialisasi atribut khusus mobil
        self.jumlah_kursi = jumlah_kursi  # Jumlah kursi mobil
        self.jumlah_pintu = jumlah_pintu  # Jumlah pintu mobil

    # Setter untuk jumlah kursi mobil
    def set_jumlah_kursi(self, jumlah_kursi: str):
        self.jumlah_kursi = jumlah_kursi

    # Getter untuk jumlah kursi mobil
    def get_jumlah_kursi(self) -> str:
        return self.jumlah_kursi

    # Setter untuk jumlah pintu mobil
    def set_jumlah_pintu(self, jumlah_pintu: str):
        self.jumlah_pintu = jumlah_pintu

    # Getter untuk jumlah pintu mobil
    def get_jumlah_pintu(self) -> str:
        return self.jumlah_pintu
