class Vehicle:
    def __init__(self, platnomor="", merk="", tahun_produksi="", warna=""):
        # Inisialisasi atribut-atribut kendaraan
        self.platnomor = platnomor  # Nomor plat kendaraan
        self.merk = merk  # Merk kendaraan
        self.tahun_produksi = tahun_produksi  # Tahun produksi kendaraan
        self.warna = warna  # Warna kendaraan

    # Setter untuk nomor plat kendaraan
    def set_platnomor(self, platnomor):
        self.platnomor = platnomor

    # Getter untuk nomor plat kendaraan
    def get_platnomor(self):
        return self.platnomor

    # Setter untuk merk kendaraan
    def set_merk(self, merk):
        self.merk = merk

    # Getter untuk merk kendaraan
    def get_merk(self):
        return self.merk

    # Setter untuk tahun produksi kendaraan
    def set_tahun_produksi(self, tahun_produksi):
        self.tahun_produksi = tahun_produksi

    # Getter untuk tahun produksi kendaraan
    def get_tahun_produksi(self):
        return self.tahun_produksi

    # Setter untuk warna kendaraan
    def set_warna(self, warna):
        self.warna = warna

    # Getter untuk warna kendaraan
    def get_warna(self):
        return self.warna

