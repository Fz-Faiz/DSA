#include<bits/stdc++.h>
using namespace std;

void compare(int *arr1,int *arr2){

    int i =0;
    int j=0;
    int arr[16];
    int k=0;
    while(i<10 && j<6){
        if(arr1[i]<arr2[j]){
            arr[k++]=arr1[i];
            i++;
        }
        else if(arr1[i]>arr2[j]){
            arr[k++]=arr2[j];
            j++;
        }
        else{
            i++;
            j++;
        }
      
    }
    while(i<10){
        arr[k++]=arr1[i];
        i++;
    }
    while(j<6){
        arr[k++]=arr2[j];
        j++;
    }
    

  
    

    for(int i=0;i<16;i++){
        cout<<arr[i]<<"\n";
    }
}
int main(){
    int arr1[10]={1,2,3,4,5,88,99,101,232,343};
    int arr2[6]={1,22,33,44,55,66};
    

    compare(arr1,arr2);   
    




    
    



}