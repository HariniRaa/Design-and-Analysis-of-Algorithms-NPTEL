#include <stdio.h>
 
void quick_sort(int[],int,int);
int partition(int[],int,int);
void mergeArrays(int[],int[],int ,int,int[]);
int first(int [], int, int, int );
int last(int [], int, int, int ); 
int main()
{
	int a,b,c,d,e,i,n1,n2,n3,p,q,r,x;
	int l1[50000],l2[50000],l3[50000],l4[50000],l5[5000];
	int array1[10000],array2[10000],array3[10000],array4[10000];
	
	scanf("%d %d %d %d %d", &a,&b,&c,&d,&e);
	p=a+b;
	q=c+d;
	r=p+q;
	
	
	//GETTING VALUES OF ARRAY
	for(i=0;i<a;i++)
	{
		scanf("%d",&l1[i]);
	}
	
	for(i=0;i<b;i++)
	{
		scanf("%d",&l2[i]);
	}
	
	for(i=0;i<c;i++)
	{
		scanf("%d",&l3[i]);
	}
	
	for(i=0;i<d;i++)
	{
		scanf("%d",&l4[i]);
	}
	
	for(i=0;i<e;i++)
	{
		scanf("%d",&l5[i]);
	}
	
	//QUICK SORT
	
	quick_sort(l1,0,a-1);
	
	
	quick_sort(l2,0,b-1);
	
	
	
	quick_sort(l3,0,c-1);
	
	
		
		
	quick_sort(l4,0,d-1);
	
	
	quick_sort(l5,0,e-1);
	
		
	
	mergeArrays(l1,l2,a,b,array1);
	mergeArrays(l3,l4,c,d,array2);
	mergeArrays(array1,array2,p,q,array3);
	mergeArrays(array3,l5,r,e,array4);
	
	
	
	
	//CHOOSING x	
	
	int count=0;
	for(i=0;i<=500000;i++)   //changed - do this for each candidate
	{	
		a=first(array4,0,(r+e)-1, i);  //modified this
        b=last(array4,0,(r+e)-1, i);

        if(b==-1) continue;

        if((b-a+1)>=3)
        	count++;
	}	
		
	printf("%d\n", count);
	
	return 0;
}

void quick_sort(int a[],int l,int u)
{
	int j;
	if(l<u)
	{
		j=partition(a,l,u);
		quick_sort(a,l,j-1);
		quick_sort(a,j+1,u);
	}
}


int partition(int a[],int l,int u)
{
	int v,i,j,temp;
	v=a[l];
	i=l;
	j=u+1;
	
	do
	{
		do
			i++;
			
		while(a[i]<v&&i<=u);
		
		do
			j--;
		while(v<a[j]);
		
		if(i<j)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}while(i<j);
	
	a[l]=a[j];
	a[j]=v;
	
	return(j);
}	
	
	
void mergeArrays(int arr1[], int arr2[], int n1, 
                             int n2, int arr3[]) 
{ 
    int i = 0, j = 0, k = 0; 
  
    // Traverse both array 
    while (i<n1 && j <n2) 
    { 
        // Check if current element of first 
        // array is smaller than current element 
        // of second array. If yes, store first 
        // array element and increment first array 
        // index. Otherwise do same with second array 
        if (arr1[i] < arr2[j]) 
            arr3[k++] = arr1[i++]; 
        else
            arr3[k++] = arr2[j++]; 
    } 
  
    // Store remaining elements of first array 
    while (i < n1) 
        arr3[k++] = arr1[i++]; 
  
    // Store remaining elements of second array 
    while (j < n2) 
        arr3[k++] = arr2[j++]; 
} 

	
int first(int arr[], int low, int high, int x) 
{ 
   for (int i = 0; i <=high; ++i)
   {
   	if (arr[i]==x)
   	{
   		return i;
   	}
   }
   return -1;
} 
  
int last(int arr[], int low, int high, int x) 
{ 
	for(int i=high;i>=low;i--)
      { 
        if(arr[i]==x)
            return i;
      }   
}   

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
