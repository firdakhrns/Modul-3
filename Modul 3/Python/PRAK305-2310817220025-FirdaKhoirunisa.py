print("Input")
waktu = float(input())
hari = waktu // (24*3600)
jam = waktu//3600
detik = waktu%60
waktu = waktu%3600
menit = waktu//60

print("\nOutput")
if (jam <= 24):{
    print("%02d:%02d:%02d"%(jam, menit, detik))
}
elif (jam > 24):
    jam = jam - 24
    print("%d hari %d:%02d:%02d"%(hari, jam, menit, detik))
