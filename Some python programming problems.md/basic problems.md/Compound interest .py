pri = float(input("Enter the principle amount : "))
rate = float(input("Enter the rate of interest : "))
time = float(input("Enter the time in the years: "))

ci =  pri * (pow((1 + rate / 100), time))

print("Principle amount  : ", pri)
print("Interest rate     : ", rate)
print("Time in years     : ", time)
print("compound Interest : ", ci)

