pahlawan = ["Zilong", "Ling", "Baxia", "Wanwan", "Chang’e"]

jumlah_pasukan = int(input("Jumlah pasukan yang dibawa Yu Zhong = "))
jumlah_pahlawan = int(input("Jumlah pahlawan = "))

pasukan_per_pahlawan = jumlah_pasukan // jumlah_pahlawan

print(
    f"Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah {pasukan_per_pahlawan} pasukan"
)