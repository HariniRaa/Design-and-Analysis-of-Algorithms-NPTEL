x=list(map(int,input().split())) 
r=x[0] 
p=x[1]
f=x[2]
count=0

marray=list(map(int,input().split())) 
earray=list(map(int,input().split()))

marray=sorted(marray)
earray=sorted(earray,reverse=True)

for i in range(r):
	a=(marray[i]+earray[i])-pa
	if a>0:
		count+=a

fine=count*f
print(fine)
		
		
		


