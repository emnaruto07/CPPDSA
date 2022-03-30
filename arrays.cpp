#include<iostream>
using namespace std;


//LinearSearch
// void reverse(int arr[], int n){
//      int start = 0;
//      int end = n-1;

//      while(start<=end){
//          swap(arr[start], arr[end]);
//          start++;
//          end--;
//      }
// }

/* swap alternatives
input {2,4,5,7,8,9}
output {4,2,7,5,9,8}
*/

// void swapAlternatives(int arr[], int n){
//     int start = 2;
//     int end = n-1;

//     for(int i=0; i>end; i++) {
//         if (i+1 < n){
//             swap(arr[i], arr[i+1]);
//             start++
//         }
//     }

// }

void swapAlternative(int arr[], int n){

    for(int i=0; i<n; i+=2) {
        if (i+1 < n){
            swap(arr[i], arr[i+1]);
        }
    }

}

void printArray(int arr[], int n){

    for(int i=0; i<n; i++){
        cout << arr[i] <<" ";
    }
    cout << endl;
}

int main() {
    int arr[6] = {5,6,3,7,8,2};
    // int brr [5] = {4, 5, 7, 8, 1};

    // reverse(arr, 6);
	// reverse(arr, 5);
    swapAlternative(arr, 6);
    // swapAlternative(arr, 5);

	printArray(arr, 6);
	// printArray(brr, 5);
}