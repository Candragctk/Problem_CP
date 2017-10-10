n = input("")
x = []
for i in range(0,n):
	x.append(input(""))

min = x[1]
for i in range(1,n):
	if (min > x[i]):
		min = x[i]

max2=max1=min
for i in range(n):
	if (max1 < x[i]):
		max2=max1
		max1=x[i]
	elif (max2 <= x[i] and x[i] <= max1):
		max2=x[i]

print("Bilangan terbesar kedua adalah : ", max2)