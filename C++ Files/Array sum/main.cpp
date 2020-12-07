//
//  main.cpp
//  Array sum
//
//  Created by Gourav Chirkhare on 12/5/20.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int size,i=0;
    // insert code here...
    cout << "Enter the size of array: ";
    
    cin>>size;
    int arr[size];
    cout<<"Enter the elements: ";
    for (i=0; i<size; i++) {
        cin>>arr[i];
    }
    cout<<"Entered elements are: ";
    for (i=0; i<size; i++) {
        cout<<arr[i]<<" ";
    }
//Sum of array elements
    int sum=0;
    
    for (i=0; i<size; i++) {
      {
            sum += arr[i];
        }
    }
    cout<<"\n\nSum is: "<<sum<<endl;
    
    
//Max and min element in array
    
    int largest = INT_MIN,j=0; //int min = -infinity  OR largest = a[0] ...assume 1st val is largest
    
    int smallest = INT_MAX; //int max = +infinity OR smallest = a[0].... assume 1st val is smallest
    
    for (j=0; j<size ; j++) {
        if (arr[j]>largest) {
            largest = arr[j];
        }
    }
    cout<<"\nLargest Element[MAX]: "<<largest;
    
    for (j=0; j<size ; j++) {
        if (arr[j]<smallest) {
            smallest = arr[j];
        }
    }
    
    cout<<"\nSmallest Element[MIN]: "<<smallest<<endl;
    
    return 0;
}
