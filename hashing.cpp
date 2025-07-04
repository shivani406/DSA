#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// int main(){

//     int arr[10];
//     for (int i = 0; i < 10 ; i++ ){
//         cin>>arr[i];
//     }
//     int hash_arr[11] = {0} ; // size of hash array is always one greater than the array


//     // precompute the frequency of numbers
//     for (int i = 0 ; i < 10 ; i++){
//         hash_arr[arr[i]] ++; // increasing the count of that index by 1 
//     }

//     // fetching the frequency

//     int num_query;
//     cout<< "enter number of queries- ";
//     cin>> num_query;
//     while (num_query > 0){
//         int query;
//         cin>>query;
//         cout<<hash_arr[query]<<endl; // wil print the number
//         num_query --;
        
//     }
// }


// ---- character hashing----
int main(){
    string s;
    cin>>s;

    int hash_arr [26] = {0};
    // pre computation
    for (int i = 0 ; i<s.size() ; i++){
        hash_arr[ s[i] - 'a' ] += 1;

    }

    int num_query;
    cout<<"enter number of queries-";
    cin>>num_query;
    while (num_query--){
        char query;
        cin>> query;
        cout<< hash_arr[ query-'a']<<endl;
    }
}

