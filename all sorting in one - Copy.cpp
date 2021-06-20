#include<stdio.h>
// bubble sort
void bubble(int a[],int n)
{
	for(int i=0;i<n-1;i++)
{
	for(int j=0;j<n-1-i;j++)
	{
		if(a[j]>a[j+1])
		{
			int temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
	
	}

	
}
//selection sort
void selection(int a[],int n)
{
	int min,temp;
	for(int i=0;i<n-1;i++)
	{
		min=i;
		for(int j=i+1; j<n ;j++)
		{
			if(a[min]>a[j])
			min=j;
		}
		temp=a[min];
		a[min]=a[i];
		a[i]=temp;
	}

}
// insertion sort
void insertionSort(int array[], int size) 
{
  
  for (int step = 1; step < size; step++) 
  {
    int key = array[step];
    int j = step - 1;
	while (key < array[j] && j >= 0) 
	{
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1] = key;
  }

}
//merge sort
//merge function for merging two subarrays
void merge(int arr[],int l,int m,int r,int n){
	int i = l;
	int j = m+1;
	int k = l;
	int b[n];      //initializing a temporary array
	//while we can traverse through both subarrays
	while(i<=m && j<=r){
            //if element of first array is smaller
        if(arr[i]<=arr[j]){
            b[k] = arr[i];  //add that element into the temporary array
            i++;
        //else add element of another subarray
        }else{
            b[k] = arr[j];
            j++;
        }
        k++;    //incrementing k to go forward in the temporary array
	}
	//if second subarray has elements left
	if(i>m){
            //traversing through that array
        while(j<=r){
            b[k] = arr[j];  //adding the remaining elements
            j++;
            k++;
        }
    //else elements left in first subarray
	}else{
	    //traversing through that array
	while(i<=m){
       b[k] = arr[i];   //adding the remaining elements
       i++;
       k++;
       }
       //copying all the elements of the temporary array to the original array
    for(k=l;k<=r;k++){
        arr[k] = b[k];
    }
}
}
//merge sort function
void merge_sort(int arr[], int l, int r, int n){
    //if there are atleast two elements in the array
	if(l<r){
        //finding the mid position
		int m = (l+r)/2;
		merge_sort(arr,l,m,n); //forms the first subarray from first element to the middle
		merge_sort(arr,m+1,r,n); //forms the second subarray from middle+1 element to last element
		merge(arr,l,m,r,n);  //merge the two arrays formed above
	}
}
//function for displaying the sorted array
void display(int arr[],int n){
    printf("The sorted array is:");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
//quick sort
//function for breaking the array in two parts by using a pivot element
int partitions(int arr[],int l,int r){
    //initializing the pivot element as the first element
    int pivot = arr[l];
    int s = l;   //start position
    int e = r;   //end position
    int temp;
    //while start position is less then end
    while(s<e){
    //until small elements are there than pivot element
    while(arr[s]<=pivot){
        s++;  //incrementing start position
    }
    //until large elements are there then pivot element from the end
    while(arr[e]>pivot){
        e--;     //decrementing the end position
    }
    //if start is less then end
    if(s<e){
        //swapping the start and end elements
        temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
    }
    }
    //when start goes ahead of end
    //swap the pivot element and the element at the end that is at e position
    temp = arr[l];
    arr[l] = arr[e];
    arr[e] = temp;
    return e; //returning the position e so that we can identify that from which
                    //position we have to take another subarrays that is from first element to
                   //e-1 and e to last element
}
//quick sort function
void quick_sort(int arr[],int l,int r){
    //boundary condition if there are atleast two elements in array
    if(l<r){
        //getting the position of pivot element from partitions function and storing it in loc
        int loc = partitions(arr,l,r);
        quick_sort(arr,l,loc-1); //quick sort for array left of the pivot element
        quick_sort(arr,loc+1,r); //quick sort for array right of the pivot element
    }
}
int main(){
	int n,ch;
	do
	{//getting the size of array
	printf("Enter the size of the array:\n");
	scanf("%d",&n);
	int arr[n];
	//getting elements of the array
	printf("Enter the elements of the array:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("***********Sorting Methods***********\n");
    printf("1. Bubble Sort\n");
    printf("2. selection Sort\n");
    printf("3. insertion Sort\n");
    printf("4.  merge Sort\n");
    printf("5. quick Sort\n");
    
    //getting the choice of the user
    scanf("%d",&ch);
    switch(ch){
        case 1:
        bubble(arr,n);
        display(arr,n);
        break;
        case 2:
        selection(arr,n);
        display(arr,n);
        break;
        case 3:
        insertionSort(arr,n);
        display(arr,n);
        break;
        case 4:
        merge_sort(arr,0,n-1,n);
        display(arr,n);
        break;
        case 5:
        quick_sort(arr,0,n-1);
        display(arr,n);
        break;
        default:
        printf("Entered the wrong choice!!!");
        break;
    
    }
printf(" want more\n");
    scanf("%d",&ch);
}while (ch!=6);
	return 0;
}





