#include <iostream>
using namespace std;
//function for bubble sort
void bubble(int arr[],int n){
    int temp=0;
    //traversing the whole array
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
                //if left element is greater then right
            if(arr[j]>arr[j+1]){
                //swapping both elements
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
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
    cout<<"The sorted array is:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
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
//main function
int main(){
	int n,ch;
	//getting the size of array
	cout<<"Enter the size of the array:"<<endl;
	cin>>n;
	int arr[n];
	//getting elements of the array
	cout<<"Enter the elements of the array:"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"***********Sorting Methods***********"<<endl;
    cout<<"1. Bubble Sort"<<endl;
    cout<<"2. Merge Sort"<<endl;
    cout<<"3. Quick Sort"<<endl;
    cout<<"Enter your choice......"<<endl;
    //getting the choice of the user
    cin>>ch;
    switch(ch){
        case 1:
        bubble(arr,n);
        display(arr,n);
        break;
        case 2:
        merge_sort(arr,0,n-1,n);
        display(arr,n);
        break;
        case 3:
        quick_sort(arr,0,n-1);
        display(arr,n);
        break;
        default:
        cout<<"Entered the wrong choice!!!";
        break;
    }
	return 0;
}

