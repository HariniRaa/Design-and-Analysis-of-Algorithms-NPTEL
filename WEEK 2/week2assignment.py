a,b,c,d,e=input().split()
a1=input().split()
a2=input().split()
a3=input().split()
a4=input().split()
a5=input().split()
# oh shit technical difficulties
a1=list(map(int,a1))
a2=list(map(int,a2))
a3=list(map(int,a3))
a4=list(map(int,a4))
a5=list(map(int,a5))

a1.sort()
a2.sort()
a3.sort()
a4.sort()
a5.sort()

def merge(a,b):
	c=[]
	i=0
	j=0;
	while i<len(a) and j<len(b):
		if a[i]<b[j]:
			c.append(a[i])
			i+=1
		else:
			c.append(b[j])
			j+=1
	while i<len(a):
		c.append(a[i])
		i+=1
	while j<len(b):
		c.append(b[j])
		j+=1
	return c
	#ummm what do i do now
	# oh yeah
	

b1=merge(a1,a2)
b1=merge(b1,a3)
b1=merge(b1,a4)
b1=merge(b1,a5)
#print(b1)
#ippo linear search ah

def rs(b,x):
	for i in range(len(b)-1,0,-1):
		if b[i]==x:
			return i
	return -1
count=0
for i in range(0,500001):
	try:
		start=b1.index(i)

		end=rs(b1,i)
		#print(start,end)
		if end-start>=2:
			count+=1
			#print('count = '+str(count))
	except ValueError:
		continue
print(count)
		
