#Buatlah program menggunakan while loop yang menjumlahkan semua bilangan dari 1 hingga bilangan yang diinput oleh pengguna.

bilangan_akhir = int(input("Masukkan bilangan akhir: "))

i = 1 

total = 0  # Variabel penampung hasil penjumlahan

while i <= bilangan_akhir:
    total += i  # Menambahkan nilai i ke dalam total
    i += 1

print("Total penjumlahan:", total)