from Vehicle import Vehicle

class Motor(Vehicle):
    def __init__(self, jenis_motor="", kapasitas_tangki="", platnomor="", merk="", tahun_produksi="", warna=""):
        # Memanggil konstruktor kelas induk (Vehicle)
        super().__init__(platnomor, merk, tahun_produksi, warna)
        # Inisialisasi atribut khusus motor
        self.jenis_motor = jenis_motor  # Jenis motor (Matic, Manual, dsb.)
        self.kapasitas_tangki = kapasitas_tangki  # Kapasitas tangki bahan bakar

    # Setter untuk jenis motor
    def set_jenis_motor(self, jenis_motor):
        self.jenis_motor = jenis_motor

    # Getter untuk jenis motor
    def get_jenis_motor(self):
        return self.jenis_motor

    # Setter untuk kapasitas tangki bahan bakar
    def set_kapasitas_tangki(self, kapasitas_tangki):
        self.kapasitas_tangki = kapasitas_tangki

    # Getter untuk kapasitas tangki bahan bakar
    def get_kapasitas_tangki(self):
        return self.kapasitas_tangki
