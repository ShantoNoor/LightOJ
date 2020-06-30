
t = int(input())
i = 1
while t > 0:
	a, b = input().split()
	a = int(a)
	b = int(b)

	print('Case ', i, ':', end=' ')
	if a%b == 0:
		print('divisible')
	else:
		print('not divisible')

	t -= 1
	i += 1
