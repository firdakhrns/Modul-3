print("Input")
satu,dua = map(int, input().split())

if (satu <= dua):
    rendah = satu
    tinggi = dua
elif (dua <= satu):
    rendah = dua
    tinggi = satu

print("\nOutput")
print(rendah, tinggi)    