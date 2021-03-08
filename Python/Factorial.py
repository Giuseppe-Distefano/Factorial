import sys

def factorial (num):
	if num == 0:
		return 1	# 0! = 1
	else:
		return (num * factorial (num-1))	# num! = num * (num-1)!

# Input
if len (sys.argv) == 2:
	num = int(sys.argv[1])
else:
	num = int (input ('Enter a number: '))

# Output
res = factorial (num)
print (num, "! =", res)
