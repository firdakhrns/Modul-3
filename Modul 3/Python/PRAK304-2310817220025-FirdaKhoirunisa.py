print("Input")
bilangan = int(input())

print("\nOutput")
if(bilangan > 0 and bilangan <= 10):{
    print("Satuan")
}
elif(bilangan == 0):{
    print("Nol")
}
elif(bilangan > 10 and bilangan < 20):{
    print("Belasan")
}
elif(bilangan >= 20 and bilangan < 100):{
    print("Puluhan")
}
elif(bilangan >= 100):{
    print("Anda Menginput Melebihi Limit Bilangan")
}