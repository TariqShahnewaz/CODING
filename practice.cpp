// #include<iostream>
// using namespace std;

// void printNumb(int n) {
//     if(n ==1){
//         cout << n << endl;
//         return;
//     }
//     cout << n <<" ";
//     printNumb(n - 1);
// }


// int main() {
//     printNumb(4);

// return 0;
// }
// 
// #include<iostream>
// using namespace std;

// int factorial(int n) {
//     if(n == 0) {
//         return 1;
//     }
//     return n * factorial(n - 1);



// }

// int main() {
//     cout<< factorial(5) << endl;
//     return 0;
// }
// #include<iostream>
// using namespace std;

// int sum(int n) {
//     if(n == 1) {
//         return 1;
//     }
//     return n + sum(n - 1);
// }

// int main() {
//     cout<< sum(4) << endl;
//     return 0;
// }
// #include<iostream>
// using namespace std;

// int fib(int n){
//     if( n == 0 || n == 1){
//         return n;
//     }
//     return fib(n-1) + fib(n-2);
// }
// int main() {
//     cout<< fib(5) << endl;
    
//     return 0;
// }
// #include<iostream>
// #include<vector>
// using namespace std;
// bool isSortd(vector<int> arr, int n){
//     if(n == 0 || n == 1){
//         return true;
//     }
//     return (arr[n-1] >= arr[n-2] && isSortd(arr, n-1));
// }
// int main(){
//     vector<int> arr =  {1, 2, 3, 4, 5};
//     cout << isSorted(arr, arr.size()); 

//     return 0;
// }
// Array

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     //find the smallesrt in array


//     // int size = 6;
//     // int numbs[size] = {5, 15, 22, 1, -15, -24};
    
//     // int smallest = INT_MAX;
//     // for(int i = 0; i < size; i++){
//     //     if(numbs[i] < smallest){
//     //         smallest = numbs[i];
//     //     }
//     // }
//     // cout << smallest << endl;


//     //find the largest in array
    



//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int T;
//     cin >> T;
//     for(int i = 1; i<=T; i++){
//         int X,Y;
//         cin >> X >> Y;

//         int low = min(X, Y);
//         int high = max(X, Y);
//         int sum = 0;
//         for(int j = low+1; j <high; j++){
//             if(j % 2 != 0){
//                 sum += j;
//             }
//         }
//         cout << sum << endl;
        
//     }
//     return 0;
// }
#include<iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    for(int i = 1; i < N; i++){
        for(int j = 1; j < i; j++){
            cout<<"*";
        }

        
    }

return 0;
}