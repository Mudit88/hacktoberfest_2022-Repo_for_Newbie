#include<iostream> 
using namespace std;
void merge(int arr[], int lowLeft, int highLeft, int highRight){
    int lowRight = highLeft + 1;
    int size = highRight - lowLeft + 1;
    int iRight, iLeft, iRes;
    int *mergedArr; mergedArr = new int[size];
    iLeft = lowLeft; iRight = lowRight;
    iRes  = 0; 
    
    while(iLeft<=highLeft && iRight <= highRight){
        if(arr[iLeft]< arr[iRight]){
            mergedArr[iRes] = arr[iLeft];
            iLeft++; iRes++; } 
            
        else{ 
            mergedArr[iRes] = arr[iRight];
            iRight++; iRes++; }
        } 
        
        while(iLeft<=highLeft){
            mergedArr[iRes] = arr[iLeft];
            iLeft++; iRes++;
            }
            
        while(iRight <= highRight){
            mergedArr[iRes] = arr[iRight];
            iRight++; iRes++; 
            }
        for(int i = 0, iArr = lowLeft; i < size; i++, iArr++){
            arr[iArr] = mergedArr[i];
            } 
        delete []mergedArr;
    } 
void mergeSort(int arr[], int low, int high){
    int mid;
    if(low == high){
        return;
        } 
    else{
        mid = (low+high)/2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid+1, high);
        merge(arr, low, mid, high); 
        
    } 
    
} 

int main(){
    int arr[9] = {14, 5, 8, 13, 1, 18, 3, -6};
    int arrSize = 9;
    mergeSort(arr, 0, arrSize-1);
    for(int i: arr){
        cout<<i<<" "; 
        
    } 
    return 0; 
    
}
