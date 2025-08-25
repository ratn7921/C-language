#include<iostream>
using namespace std;
int bubblesort(int arr[],int size){
    for (int i = 0; i < size; i++)
    {for (int j = 0; i < size; j++)
    {
if (arr[j]>arr[j+1])
{
int temp;
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
    }
        }
 for (int i=0;i<size;i++){
    cout<<arr[i];
}
return 0; 
    
}
int main(){
    int arr[]={5,4,3,2,1,};
    int size=sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr,size);
    return 0;
    }

