# include <bits/stdc++.h>
using namespace std;
// -----------print name 5 times-----------
int c=0;
void print(){
  if (c==5){
    return;
  }  
  else{
    cout<<"name"<<endl;
    c++; 
    print();
  }
}
int main() {
    print();

}


//--------------print numbers till 1 to n----------------
//------------ my own logic------------
int cnt=0;
void print_name(int n){    
    if (cnt < n){
        cout<<"hello"<<endl;
        cnt++;
        print_name(n);   call the function with the same value of n jo pehle call me di thi in the mian function
    }
    else {
        return;
    }

}

int main(){
    print_name(5);
    return 0;
}


//-------method - 2--------
void print_n(int i , int n){
    if ( i > n ){
        return;
    }
    else {
        cout<<i<<endl;
        print_n(i+1 , n);  // i is used as a counter variable , i++ waali condition is directly used in function call
    }
}

int main(){
    print_n(1 , 5);
}


//---------print from n to 1----------

void print_n (int n){
    if ( n < 1 ){  // we only need one variable n now because we know ki hame kaha par jaake recursion stop karna hai
        return;

    }
    else{
        cout<<n<<endl;
        print_n(n-1);
    }
}
int main (){
    print_n(5);
}

//---------- print from 1 to n but using backtracking-------------
the function call in main would be like f(n , n)

void print_n(int i , int n){
    if ( i < 1 ){
        return;
    }
    else {
        print_n(i-1 , n); // after the function call, it will print i

        // i will be printed when the recursion stack is coming back to its original place
        cout<< i<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    print_n(n , n);
}


//------print n to 1 using backtracking--------
void print_n(int i , int n){
    if ( i > n ){

        return ;
    } 
    else {
        print_n(i + 1 , n);
        cout<< i << endl;
    }
}
int main (){
    print_n(1,5); // don't always keep the base function call the same
}


//----------print the sum of numbers from 1 to n---------

int sum_n(int n , int sum){
    if ( n <= 1 ){
        return sum;
    }
    else{
        //sum = sum + n;
        sum_n( n - 1 , sum + n);
    }
}
int main (){
    cout<<sum_n( 5 , 0);
}

//----------------------functional recursion------------------

int sum_n( int n ){
    if (n == 0){
        return 0 ;
    }
    else {
        return n + sum_n(n-1);
    }

}

int main(){
    cout<<sum_n(5);
}


int fac_n( int n ){
    if (n <= 1 ){
        return 1;
    }
    else{
        return n * fac_n(n-1) ;
    }
}
int main(){
    cout<< fac_n(5);
}

//-----------reversing an array----------------

int rev_arr ( int arr[] , int i ){
    if (i > sizeof(arr) / 2){
        return;    // the array is being reversed in its own place
    }
    else {
        
        
        int temp = arr[i];
        arr[i] = arr[sizeof(arr) - i -1];
        arr[sizeof(arr) - i -1] = temp;
        i++;
        return rev_arr(arr , i);

    }
}
int main(){
    int n;
    cout<< "Enter length of array-";
    cin>>n;
    int arr[n];
    for (int i=0; i < n ; i++){
        cout<<"enter element-";
        cin>>arr[i];
    }
    rev_arr(arr, 0);

    for (int i =0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
}
