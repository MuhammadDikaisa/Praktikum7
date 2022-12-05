# Praktikum 7

# Nama : Muhammad Dikaisa Ibnu Amin

# Nim : 312210289

# Kelas : TI.22.A.3

# Praktikum 11

Soal: 

<img width="695" alt="Pert11" src="https://user-images.githubusercontent.com/115516378/205558227-308f2cee-0f92-4103-94cb-5c36d0abb143.png">

Berikut inputnya : 
```python
# Nama = Muhammad Dikaisa
# Nim = 312210289
# Kelas = TI.22.A.3
data = {}

def tambah():
    print("Tambah Data")
    nama = input("Nama\t\t: ")
    nim = int(input("NIM\t\t\t: "))
    tugas = int(input("NIlai Tugas\t: "))
    uts = int(input("Nilai UTS\t: "))
    uas = int(input("Nilai UAS\t: "))
    nilaiakhir = (tugas * 0.3 + uts * 0.35 + uas * 0.35)
    data[nama] = nim, tugas, uts, uas, nilaiakhir


def tampilkan():
    if data.items():
        print("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~| Daftar Nilai |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~")
        print("_______________________________________________________________________________________")
        print("|  No  |      NIM      |      NAMA         |    TUGAS   |   UTS   |   UAS   | AKHIR  |")
        print("|______|_______________|___________________|____________|_________|_________|________|__")
        i = 0
        for a in data.items():
            i += 1
            print(f"| {i:4} | {a[0]:13s} | {a[1][0]:17} | {a[1][1]:10d} |  {a[1][2]:6d} | {a[1][2]:7d} | {a[1][4]:6.2f} | ")
    else:
        print("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~| Daftar Nilai |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~")
        print("_______________________________________________________________________________________")
        print("|  No  |      Nama     |      NIM      |   TUGAS  |   UTS   |   UAS   | Nilai Akhir  |")
        print("_______________________________________________________________________________________")
        print("|      |               |             Tidak Ada Data         |         |                |")
    print("____________________________________________________________________________________________")


def hapus():
    print("Hapus Data Nilai Mahasiswa")
    nama = input(" Masukan Nama\t:")
    if nama in data.keys():
        del data[nama]
        print()
        print("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~")
        print("===| BERHASIL MENGHAPUS DATA |===")
        print("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~")
    else:
        print("Data {0} tidak ada".format(nama))


def ubah():
    print("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~")
    print("===| Edit Data Nilai Mahasiswa |===")
    print("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~")
    nama = input("Masukan Nama\t\t: ")
    print("___________________________________")
    if nama in data.keys():
        nim = input("NIM baru\t\t\t: ")
        tugas = int(input("Nilai Tugas Baru\t: "))
        uts = int(input("Nilai UTS Baru\t\t: "))
        uas = int(input("Nilai UAS Baru\t\t: "))
        nilaiakhir = (tugas * 30 / 100 + uts * 35 / 100 + uas * 35 / 100)
        data[nama] = nim, tugas, uts, uas, nilaiakhir
        print()
        print("<><><><><><><><><><><><><><><><>")
        print("====| BERHASIL MENGUBAH DATA |====")
        print("<><><><><><><><><><><><><><><><>")
    else:
        print("Data nilai {0} tidak ada ".format(nama))


while True:
    print("")
    print("|_<><><><><><><><><><><><><><><><><>_|")
    print("|~~~~~~~~| DATA MAHASISWA |~~~~~~~~~~|")
    print("|_<><><><><><><><><><><><><><><><><>_|")
    x = input("1.| Lihat Data \n2.| Tambah Data \n3.| Ubah Data \n4.| Hapus Data \n0.| Keluar Aplikasi \nPilih menu : ")
    if x.lower() == "1":
        tampilkan()
    elif x.lower() == "2":
        tambah()
    elif x.lower() == "3":
        ubah()
    elif x.lower() == "4":
        hapus()
    elif x.lower() == "0":
        print()
        print("<><><><><><><><><><><><><><><><>")
        print("====== KELUAR DARI PROGRAM ======")
        print("<><><><><><><><><><><><><><><><>")
        break

    else:
        print()
        print("<><><><><><><><><><><><><><><><>")
        print("== Pilihan Anda Tidak Tersedia ==")
        print("== Pilihlah Menu Yang Tersedia ==")
        print("<><><><><><><><><><><><><><><><>")
```
        
Output : 

<img width="530" alt="pert11 1" src="https://user-images.githubusercontent.com/115516378/205558801-f9215bbe-74c4-43cd-ac0b-5e52f6cf49b3.png">

# Latihan 11

```python
import math

a = lambda x: x ** 2
print(a(46))

b = lambda x,y: x**2 + y**2
print(b(4,6))

c = lambda *args : sum(args)/len(args)
print(c(5,7,9,11,10))

d = lambda s: "".join(set(s))
print(d("Tertimpa"))
```

Output :

<img width="287" alt="pert11 2" src="https://user-images.githubusercontent.com/115516378/205559269-8133cebf-beba-4f84-a4b2-0dabe7a05514.png">


