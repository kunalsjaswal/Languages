#include<iostream>
using namespace std;

void merge(int arr[],int l,int mid,int r){           // merge function to merge two subarrays

int n1=mid-l+1;
int n2=r-mid;

int a[n1];
int b[n2];                                           // temporary arrays
for (int i=0;i<n1;i++){                              // entering values in temporary arrays
    a[i]=arr[l+i];
} 
for(int i=0;i<n2;i++){
    b[i]=arr[mid+1+i];
}

int i=0;
int j=0;
int k=l;
while(i<n1 && j<n2){                                 // comparing two subarrays
  if(a[i]<b[j]){
      arr[k]=a[i];
      k++;i++;
  }
  else{
      arr[k]=b[j];
      k++;j++;
  }
}
while(i<n1){
    arr[k]=a[i];
      k++;i++;
}
while(j<n2){
    arr[k]=b[j];
      k++;j++;
}
}
void mergesort(int arr[],int l,int r){                  //  dividing the array into two and further subarrays
        if(l<r){
        int mid=(l+r)/2;
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,r);

        merge(arr,l,mid,r);                            // calling (merge)function in another function(mergesort)
    }

}
int main(){                                            //main function
  int n;
  cout<<"enter the number of elements you want: ";
  cin>>n;
  int arr[n];
  cout<<"enter the elements: \n";
  for(int i=1;i<=n;i++){                               //entering user input of array
      cout<<i<<".";
      cin>>arr[i-1];
  }
   mergesort(arr,0,n-1);                               // calling mergesort function
   cout<<"your sorted array through merge sort: ";
   for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
   }
   return 0;
}
