def NOD(x):
	count = 1
	for i in range(1, x):
		if x % i == 0:
			count += 1
	return count


lis = [0]*1001
for i in range(1, 1001):
	lis[i] = NOD(i)


arr = [1]*1001
k = 2
for i in range(2, 33):
	for j in range(1000, 0, -1):
		if i == lis[j]:
			arr[k] = j
			k += 1


for i in range(1, 1001):
	print(arr[i], lis[i])