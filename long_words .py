# http://codeforces.com/problemset/problem/71/A
n = int(input())
words=[]
for i in range(0 , n):
	s=input()
	words.append(s)

for element in words:
	if (len(element)<11):
		print(element)
	else  : 
		x=len(element)
		print("{}{}{}".format(element[0],x-2,element[x-1]))
		
