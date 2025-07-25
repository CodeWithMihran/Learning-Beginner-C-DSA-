// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cout<< "Enter First Number : ";
//     cin>> a;
//     cout<< "Enter Second Number : ";
//     cin>> b;
//     cout<< "Sum : "<< a+b; 
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     char ch;
//     cout<<"Enter Your Character : ";
//     cin>> ch;
//     if(ch>='a' && ch<='z'){
//         cout<<"Your Character is Lower Case.";
//     }
//     else if(ch>='A' && ch<='Z'){
//         cout<<"Your Character is Upper Case.";
//     }
//     else{
//         cout<<"Wrong Input!!";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     int sum = 0;
//     cout<<"Enter the Number : ";
//     cin >> n;
//     for(int i=1; i<=n; i++){
//         if(i % 2 != 0){
//             sum = sum+i;
//         }
//     }
//     cout<<"Sum of all the Odd numbers from 0 to "<<n <<" is : "<<sum;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     int count = 0;
//     cout<<"Enter the Number : ";
//     cin >> n;
//     if(n==1 || n==0){
//         cout<<n<<" is not a Prime Number.";
//     }
//     else{
//         for(int i=2; i<n; i++){
//             if(n%i == 0){
//                 count++;
//             }
//         }
//         if(count==0){
//             cout<<n<<" is a Prime Number.";
//         }
//         else if(count>0){
//             cout<<n<<" is not a Prime Number.";
//         }
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the Number : ";g
//     cin >> n;
//     bool isPrime = true;
//     for(int i=2; i<n; i++){
//         if(n%i == 0){
//             isPrime = false;
//         }
//     }
//     if(isPrime){
//         cout<<n<<" is a Prime Number.";
//     }
//     else{
//         cout<<n<< " is not a Prime Number.";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int x,y;
//     cout<<"Enter the number of rows : ";
//     cin >> x;
//     cout<<"Enter the number of coloumn : ";
//     cin >> y;
//     for(int j=1; j<=y; j++){
//     for(int i=1; i<=x; i++){
//         cout<<i;
//     }cout<<endl;
// }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     char ch;
//     int y;
//     cout<<"Enter the number of coloumn : ";
//     cin >> y;
//     for(int j=1; j<=y; j++){
//     for(char i='A'; i<='D'; i++){
//         cout<<i;
//     }cout<<endl;
// }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int x,y;
//     char ch='A';
//     cout<<"Enter the number of rows : ";
//     cin >> x;
//     cout<<"Enter the number of coloumn : ";
//     cin >> y;
//     for(int j=1; j<=y; j++){
//     for(int i=1; i<=x; i++){
//         cout<<ch;
//         ch=ch+1;
//     }cout<<endl;
// }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int x,y;
//     int n=1;
//     cout<<"Enter the number of rows : ";
//     cin >> x;
//     cout<<"Enter the number of coloumn : ";
//     cin >> y;
//     for(int j=0; j<y; j++){
//     for(int i=0; i<x; i++){
//         cout<<n;
//         n =n+1;
//     }cout<<endl;
// }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int x,y;
//     cout<<"Enter the number of rows : ";
//     cin >> x;
//     cout<<"Enter the number of coloumn : ";
//     cin >> y;
//     for(int j=0; j<y; j++){
//     for(int i=0; i<j+1; i++){
//         cout<<"*";
//     } 
//     cout << endl ;
// }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int x,y;
//     cout<<"Enter the number of rows : ";
//     cin >> x;
//     cout<<"Enter the number of coloumn : ";
//     cin >> y;
//     for(int j=0; j<y; j++){
//     for(int i=0; i<j+1; i++){
//         cout<<(j+1);
//     } 
//     cout << endl ;
// }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int x,y;
//     char ch='A';
//     cout<<"Enter the number of rows : ";
//     cin >> x;
//     cout<<"Enter the number of coloumn : ";
//     cin >> y;
//     for(int j=0; j<y; j++){
//     for(int i=0; i<j+1; i++){
//         cout<<ch;
//     } 
//     cout << endl ;
//     ch = ch+1;
// }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int x,y;
//     int n = 4;
//     cout<<"Enter the number of rows : ";
//     cin >> x;
//     cout<<"Enter the number of coloumn : ";
//     cin >> y;
//     for(int i=0; i<y; i++){
//     for(int j=i+1; j>0; j--){
//         cout<<j;
//     } 
//     cout << endl ;
// }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n=3;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i+1; j++){
//             cout<<(i+1);
//         }
//         cout<< endl;
//     }
//     return 0;
// } 

// #include<iostream>
// using namespace std;
// int main(){
//     int n=3;
//     char ch='A';
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             cout<<ch;
//             ch=ch+1;
//         }
//         cout<< endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;
//     for(int i=0; i<n; i++){
//         for(int j=i+1; j>0; j--){
//             cout<<j;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;
//     int num=1;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i+1; j++){
//             cout<<num;
//             num=num+1;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;
//     char ch='A';
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i+1; j++){
//             cout<<ch;
//             ch=ch+1;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;
//     char ch='A';
//     for(int i=0; i<n; i++){
//         for(char ch=(i+1)+'A'; ch>='A'; ch--){
//             cout<<ch;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i; j++){
//             cout<<" ";
//         }
//         for(int k=0; k<(n-i); k++){
//                 cout<<(i+1);
//             }
//         cout<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;
//     char ch = 'A';
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i; j++){
//             cout<<" ";
//         }
//         for(int k=0; k<(n-i); k++){
//             cout<<ch;
//         }
//         cout<<endl;
//         ch=ch+1;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n=9;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<(n-i-1); j++){
//             cout<<" ";
//         }
//         for(int k=1; k<=(i+1); k++){
//             cout<<k;
//         }
//          for(int x=i; x>0; x--){
//                 cout<<x;
//             }
//         cout<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<(n-i-1); j++){
//             cout<<" ";
//         }
//         cout<<"*";
//         if(i>0){
//         for(int j=0; j<(2*i-1); j++){
//             cout<<" ";
//         }
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//         for(int i=0; i<(n-1); i++){
//         for(int j=0; j<(i+1); j++){
//             cout<<" ";
//         }
//         cout<<"*";
//         if(i !=(n-2)){
//         for(int j=0; j<2*(n-1)-5; j++){
//             cout<<" ";
//         }
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;
//     for(int i=0; i<n; i++){
//         for(int j=0;j<(i+1); j++){
//             cout<<"*";
//     }
//         for(int j=0; j<(6-(2*i)); j++){
//             cout<<" ";
//     }
//         for(int j=0;j<(i+1); j++){
//             cout<<"*";
//     }
//     cout<<endl;
// }
// for(int i=0; i<n; i++){
//     for(int j=0; j<(n-i); j++){
//         cout<<"*";
//     }
//     for(int j=0; j<(2*i); j++){
//         cout<<" ";
//     }
//     for(int j=0; j<(n-i); j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// void sum(int n){
//     int sum =0;
//     for(int i=1; i<=n; i++){
//         sum = sum+i;
//     }
//     cout<<"Sum of all the numbers from 1 to "<<n <<" is : "<<sum <<endl;
// }
// int main(){
//     int n;
//     cout<<"Enter the number : ";
//     cin>> n;
//     sum(n);
//     return 0;
// } 

// #include<iostream>
// using namespace std;

// int fact(int n){
//     int x = 1;
//     for(int i=1; i<=n; i++){
//         x = x*i;
//     }
//     return x;
// }
// int main(){
//     int n;
//     cout<<"Enter the number : ";
//     cin>> n;
//     cout << fact(n);
//     return 0;
// } 

// #include<iostream>
// using namespace std;

// int dsum(int n){
//     int r1 = n%10;
//     int r2 = (n/10)%10;
//     int r3 = (n/100)%10;
//     int sum = r1+r2+r3;
//     return sum;
// }
// int main(){
//     int n;
//     cout<<"Enter the number : ";
//     cin >> n;
//     cout<<"Sum of all the digits of your number is : "<<dsum(n)<< endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int dsum(int n){
//     int sum=0;
//     while(n>0){
//         int r = n%10;
//         n = n/10;
//         sum = r+sum;
//     }
//     return sum;
// }

// int main(){
//     int n;
//     cout<<"Enter the number : ";
//     cin >> n;
//     cout<<"Sum of all the digits of your number is : "<<dsum(n)<< endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int fact(int n){
//     int x=1;
//     for(int i=1; i<=n; i++){
//         x=x*i;
//     }
//     return x;
// }

// int coef(int n, int r){
//     int c = fact(n)/(fact(r)*fact(n-r));
//     return c;
// }

// int main(){
//     int n,r;
//     cout<<"Enter the value of n to calculate Binoamial Coefficient : ";
//     cin >> n;
//     cout<<"Enter the value of r to calculate Binoamial Coefficient : ";
//     cin >> r;
//     cout<<"The value of the Binoamial Coefficient : "<<coef(n,r) << endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i+1; j++){
//             cout<<"*";
//         }
//         for(int j=0; j<(6-(2*i)); j++){
//             cout<<" ";
//         }
//         for(int j=0; j<i+1; j++){
//             cout<<"*";
//     }
//     cout<<endl;
// }
//      for(int i=0; i<n; i++){
//         for(int j=n-i; j>0; j--){
//             cout<<"*";
//         }
//         for(int j=0; j<(2*i); j++){
//             cout<<" ";
//         }
//         for(int j=n-i; j>0; j--){
//             cout<<"*";
//         }
//         cout<<endl;
// }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int binary(int n){
//     int r,bin =0, pow = 1;
//     while(n>0){
//         r = n%2;
//         n = n/2;
//         bin = bin+(r*pow);
//         pow = pow*10;
//     }
//     return bin;
// }

// int main(){
//     int n;
//     cout<<"Enter the number to convert into binary : ";
//     cin >> n;
//     cout<<n <<" in Binary Number : "<< binary(n)<< endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int decimal(int n){
//     int r,dec =0, pow = 1;
//     while(n>0){
//         r = n%10;
//         n = n/10;
//         dec = dec+(r*pow);
//         pow = pow*2;
//     }
//     return dec;
// }

// int main(){
//     int n;
//     cout<<"Enter the number to convert into decimal : ";
//     cin >> n;
//     cout<<n <<" in Decimal Number : "<< decimal(n)<< endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     cout<< sizeof(long int)<<endl;
//      cout<< sizeof(long long int)<<endl;
//       cout<< sizeof(long long)<<endl;
//       cout<< sizeof(int)<<endl;
//       cout<< sizeof(short)<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// void pTwo(int n){
//      while(n%2==0){
//         int n=n/2;
//     }
//         if(n==1){
//            cout<<"Your number is power of 2."<< endl ;
//         }
//         else{
//         cout<<"Your number is not power of 2."<< endl;
//     }
// }

// int main(){
//     int n;
//     cout<<"Enter the number : ";
//     cin >> n;
//     pTwo(n);
//     return 0;
// }

// #include<iostream>
// using namespace std;

// void pTwo(int n){

//     while(n % 2 == 0){
//         n = n / 2;
//     }

//     if(n == 1){
//         cout << "Your number is power of 2." << endl;
//     } else {
//         cout << "Your number is not power of 2." << endl;
//     }
// }

// int main(){
//     int n;
//     cout << "Enter the number: ";
//     cin >> n;
//     pTwo(n);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the Number : ";
//     cin >> n;
//     if (n>0 && (n & (n-1))==0){
//         cout<<"Your number is power of 2.";
//     }
//     else {
//         cout << "Your number is not power of 2." << endl;
//     }       
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int rev(int n){
//     int num=0, x=1000;
//     while(n>0){
//     int r=n%10;
//     n=n/10;
//     num=num+r*x;
//     x=x/10;
// }
//     return num;
// }

// int main(){
//     int n;
//     cout<<"Enter the Number : ";
//     cin >> n;
//     cout<<"Reverse of your given number is : "<< rev(n)<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int smallest = INT_FAST8_MAX;
//     int nums[]={7,-45,78,2,-5,98,21,-8,0,-69};
//     for(int i=0; i<10; i++){
//         // if(smallest>nums[i]){
//         //     smallest=nums[i];
//         // }
//         smallest = min(nums[i], smallest);
//     }
//     cout<<"Smallest number in the array : "<<smallest<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int largest = INT_FAST16_MIN;
//     int nums[]={7,-45,78,2,-5,98,21,-8,0,-69};
//     for(int i=0; i<10; i++){
//         largest = max(nums[i], largest);
//     }
//     cout<<"Largest number in the array : "<<largest<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int y;
//     int smallest = INT16_MAX;
//     int largest = INT16_MIN;
//     int nums[] = {54,71,56,81,45,-46,53,19,-72,36};
//     for(int i=0; i<=10; i++){
//         int x = smallest;
//         smallest = min(smallest,nums[i]);
//         if(x != smallest){
//             y = i;
//         }
//     }
//     cout<<"Smallest number in the array : "<<smallest<<endl;
//     cout<<"Index at which smallest number is located : "<<y<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int linearsearch(int arr[], int size, int target){
//     for(int i=0; i<=size; i++){
//         if(arr[i] == target){
//             return i;
//         }
//     }
//     return -1;
// }

// int main(){
//     int nums[] = {45,78,56,12,49,-56,12,-43,-89,51};
//     int t;
//     cout<<"Input the Target Number : ";
//     cin >> t;
//     cout<<"Your Target Number is at Index : "<< linearsearch(nums, 10, t);
//     return 0;
// }

// #include <iostream>
// using namespace std;

// void revArr(int Arr[], int size){
//     for(int i=0; i<size/2; i++){
//         swap(Arr[i],Arr[(size-i-1)]);
//     }
// }

// int main(){
//     int nums[] = {45,78,56,12,49,-56,12,-43,-89,51};
//     revArr(nums, 10);
//     for(int i=0; i<10; i++){
//         cout<<nums[i]<<"  "; 
//     }
//     return 0;
// }

// 2 POINTER APPROACH

// #include <iostream>
// using namespace std;

// void revArr(int Arr[], int size){
//     int start = 0, end = size-1;
//     while(start<end){
//         swap(Arr[start], Arr[end]);
//         start++;
//         end--;
//     }
// }

// int main(){
//     int nums[] = {54,71,56,81,45,-46,53,19,-72,36};
//     revArr(nums, 10);
//     for(int i=0; i<10; i++){
//         cout<<nums[i]<<"  "; 
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// void spArr(int Arr[], int size){
//     int sum = 0;
//     int product = 1;
//     for(int i=0; i<size; i++){
//         sum = sum+Arr[i];
//         product = product*Arr[i];
//     }
//     cout<<"Sum of All the Numbers in the Array is : "<<sum<<endl;
//     cout<<"Product of All the numbers in the Array is : "<<product<<endl;
// }

// int main(){
//     int nums[] = {5,6,4,3,2,1,7};
//     spArr(nums,7);
//     return 0;
// }

// #include<iostream>
// using namespace std;

// void swmin(int Arr[], int size){
//     int smallest = INT16_MAX;
//     int largest = INT16_MIN;
//     int a,b;
//     for(int i=0; i<size; i++){
//         int x=smallest;
//         int y=largest;
//         smallest = min(smallest,Arr[i]);
//         largest = max(largest, Arr[i]);
//         if(x != smallest){
//             a = i;
//         }
//         if(y != largest){
//             b = i;
//         }
//     }
//     swap(Arr[a],Arr[b]);
//     cout<<"Smallest Number is Array : "<<smallest<<endl;
//     cout<<"Largest Number is Array : "<<largest<<endl;
// }

// int main(){
//     int nums[] = {45,78,56,12,49,-56,12,-43,-89,51};
//     for(int i=0; i<10; i++){
//         cout<<nums[i]<<"  ";
//     }
//     cout<<endl;
//     swmin(nums,10);
//     for(int i=0; i<10; i++){
//         cout<<nums[i]<<"  ";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// void unqArr(int Arr[], int size){
//     for(int i=0; i<size; i++){
//         int count=0;
//         for(int j=0; j<size; j++){
//             if(Arr[i] == Arr[j]){
//                 count++;
//             }
//         }
//         if(count==1){
//             cout<<Arr[i]<<"  ";
//         }
//     }
// }

// int main(){
//     int nums[] = {1,2,3,2,4,5,6,7,5,8,2};
//     unqArr(nums,11);
//     return 0;
// }

// #include<iostream>
// using namespace std;

// void intesectionArr(int Arr1[], int size1, int Arr2[], int size2){
//     for(int i=0; i<size1; i++){
//         int count =0;
//         for(int j=0; j<size2; j++){
//             if(Arr1[i]==Arr2[j]){
//                 count++;
//             }
//         }
//         if(count>0){
//             cout<<Arr1[i]<<"  ";
//         }
//     }
// }

// int main(){
//     int nums1[] = {1,3,5,7,9};
//     int nums2[] = {0,2,5,7,9,5};
//     cout<<"Array 1 : ";
//     for(int i=0; i<5; i++){
//         cout<<nums1[i]<<"  ";
//     }
//     cout<<endl;
//     cout<<"Array 2 : ";
//     for(int i=0; i<6; i++){
//         cout<<nums2[i]<<"  ";
//     }
//     cout<<endl;
//     cout<<"Intersection : ";
//     intesectionArr(nums1, 5, nums2, 6);
//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<int> vec;
//     vec.push_back(21);
//      vec.push_back(13);
//       vec.push_back(42);
//        vec.push_back(56);
//     cout<<"Size of vector : "<< vec.size()<<endl;
//     for(int i : vec){
//         cout<< i <<endl;
//     }
//     cout<<vec.front()<< endl;
//     cout<<vec.back()<< endl;
//     cout<<endl;
//     cout<< vec.at(3)<<endl;s
//     vec.pop_back();
//     cout<<"Size of vector : "<< vec.size()<<endl;
//     for(int i : vec){
//         cout<< i <<endl;
//     }
//         cout<<vec.front()<< endl;
//     cout<<vec.back()<< endl;
//     cout<<endl;
//     cout<< vec.at(3)<<endl;
//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector <int> vec;
//     vec.push_back(3);
//     vec.push_back(5);
//     vec.push_back(7);
//     cout<< vec.size()<<endl;
//     cout<< vec.capacity()<< endl;
//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int linearsearch(vector<int> vec, int target){
//     for(int i=0; i< vec.size(); i++){
//         if(vec[i] == target){
//             return i;
//         }
//     }
//     return -1;
// }

// int main(){
//     vector <int> vec = {54,53,32,79,84};
//     int target = 32;
//     cout<< linearsearch(vec,target);
//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;

// void revVec(vector <int>& vec){
//     int start = 0;
//     int end = (vec.size())-1;
//     while(start<end){
//         swap(vec[start],vec[end]);
//         start++;
//         end--;
//     }
// }

// int main(){
//     vector<int> vec = {54,53,32,79,84};
//     revVec(vec);
//     for(int i:vec){
//         cout<<i<<"  ";
//     }
//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector <int> Arr = {1,2,3,4,5};
//     cout<<"Possible SubArrays are : "<<endl;
//     for(int st=0; st<Arr.size(); st++){
//         for (int end=st; end<Arr.size(); end++){
//             for(int i=st; i<=end; i++){
//             cout<< Arr[i];
//             }
//         cout<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;

// int maxsubarraysum(vector<int> vec){
//     int maxSum = INT16_MIN;
//     for(int st=0; st<vec.size(); st++){
//         int curSum = 0;
//         for(int end=st; end<vec.size(); end++){
//             curSum += vec[end];
//             maxSum = max(maxSum,curSum);
//         }
//     }
//     return maxSum;
// }

// int main(){
//     vector<int> Arr = {3,-4,5,4,-1,7,-8};
//     int x =  maxsubarraysum(Arr);
//     cout<<"Maximum Sum of Subarray : "<<x<<endl;
//     return 0;
// }

// KADANE'S ALGORITHM

// #include<iostream>
// #include<vector>
// using namespace std;

// int maxSubArray(vector<int> vec){
//     int maxSum = INT16_MIN, curSum = 0;
//     for(int i=0; i<vec.size(); i++){
//         curSum += vec[i];
//         maxSum = max(maxSum, curSum);
//         if(curSum<0){
//             curSum = 0;
//         }
//     }
//     return maxSum;
// }

// int main(){
//     vector<int> Arr = {3,-4,5,4,-1,7,-8};
//     cout<< "Maximum Sum of Subarray : "<< maxSubArray(Arr)<< endl;
//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;

// int pairSum(vector<int> vec, int target){
//     for(int st=0; st<(vec.size()); st++){
//         int sum = 0;
//         for(int end=st+1; end<vec.size(); end++){
//             sum = vec[st]+vec[end];
//             if(sum == target){
//                 cout<<"Pair with target sum : "<<vec[st]<<"  "<<vec[end]<<endl;
//                 cout<<"Pair are located at the Index : ("<<st<<" , "<<end<<")"<<endl;
//             }
//         }
//     }
// }

// int main(){
//     vector<int> Arr = {2,15,11,7};
//     int target = 14;
//     pairSum(Arr, target);
//     return 0;
// }

//  2 POINTER APPROACH (Only for Sorted Array)

// #include<iostream>
// #include<vector>
// using namespace std;

// int pairSum(vector<int> vec, int target){
//     int st=0, end=(vec.size())-1;
//     while(st<end){
//         int pairsum = (vec[st]+vec[end]);
//     if(pairsum > target){
//         end--;
//     }
//     else if(pairsum < target){
//         st++;
//     }
//     else{
//         cout<<"Pair with target sum : "<<vec[st]<<"  "<<vec[end]<<endl;
//         cout<<"Pair are located at the Index : ("<<st<<" , "<<end<<")"<<endl;
//         break;
//     }
//     }
// }

// int main(){
//     vector<int> Arr = {2,7,11,15};
//     int target = 26;
//     pairSum(Arr, target);
//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;

// int majorElm(vector<int> vec){
//     int n = vec.size();
//     for(int i=0; i<n; i++){
//         int x = vec[i];
//         int count = 0;
//         for(int j=i; j<n; j++){
//             if(x == vec[j]){
//                 count++;
//             }
//         }
//         if(count > n/2){
//             return x;
//         }
//     }  
//     return -1;
// }

// int main(){
//     vector<int> Arr = {1,2,2,1,1};
//     cout<<"The Majority Element of this Array is : "<<majorElm(Arr)<<endl;
// }

// More Optimized Way:

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int majorElm(vector<int> vec){
//     int n = vec.size();
//     sort(vec.begin(), vec.end());
//     int count=1;
//     int ans = vec[0];
//     for (int i=1; i<n; i++){
//         if(vec[i] == vec[i-1]){
//             count++;
//         }
//         else{
//             count = 1;
//             ans = vec[i];
//         }
//         if(count > n/2){
//             return ans;
//         }
//     }
//     return -1;
// }

// int main(){
//     vector<int> Arr = {1,2,2,1,1};
//     int x = majorElm(Arr);
//     if(x != -1){
//     cout<<"The Majority Element of this Array is : "<<x<<endl;
//     }
//     else{
//         cout<<"The Majority Element does not exist."<<endl;
//     }
    
// }

// MOORE'S ALGORITHM

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int majorElm(vector<int> vec){
//     int n = vec.size();
//     int freq = 0, ans = 0;
//     for(int i=0; i<n; i++){
//         if(freq == 0){
//             ans = vec[i];
//         }
//         if(ans == vec[i]){
//             freq++;
//         }
//         else{
//             freq--;
//         }
//     }

//     int count = 0;
//     for(int i: vec){
//         if(ans == i){
//             count++;
//         }
//     }
//     if(count>n/2){
//         return ans;
//     }
//     else{
//         return -1;
//     }
// }

// int main(){
//     vector<int> Arr = {1,2,2,1,1};
//     int x = majorElm(Arr);
//     if(x != -1){
//     cout<<"The Majority Element of this Array is : "<<x<<endl;
//     }
//     else{
//         cout<<"The Majority Element does not exist."<<endl;
//     }
    
// }

// BINARY EXPONENTIATION [Time Complexity - O(logn)]

// #include <iostream>
// using namespace std;

// double pow(double x, int n){
//     if(n==0) return 1;
//     if(x==0) return 0;
//     if(x==1) return 1;
//     if(x== -1 && n%2 == 0) return 1;
//     if(x== -1 && n%2 != 0) return -1;

//     long binForm = n;
//     if(n<0){
//         x = 1/x;
//         binForm = -binForm;
//     }
//     double ans = 1;
//     while (binForm > 0){
//         if((binForm%2) ==1){
//             ans *= x;
//         }
//         x *= x;
//         binForm /= 2;
//     }
//     return ans;
// }

// int main(){
//     double x = 3;
//     int n = 5;
//     cout<<"Answer = "<<pow(x,n)<<endl;
//     return 0;
// }


// #include <iostream>
// #include <vector>
// using namespace std;

// int max_Profit(vector<int> price){
//     int maxProfit = 0;
//     int bestBuy = price[0];
//     for(int i=1; i< price.size(); i++){
//         if(price[i] > bestBuy){
//             maxProfit = max(maxProfit, price[i]-bestBuy);
//         }
//         bestBuy = min (bestBuy,price[i]);
//     }
//     return maxProfit;
// }

// int main(){
//     vector<int> price = {7,1,5,3,6,4};
//     cout<< "The Maximum Profit Possible is "<<max_Profit(price)<<endl;
//     return 0;
// }

// CONTAINER WITH MOST WATER PROBLEM

// #include<iostream>
// #include<vector>
// using namespace std;

// int maxWater(vector<int> height){
//     int maxArea = 0, h, b;
//     for(int i=0; i < height.size(); i++){
//         for(int j=i+1;j < height.size(); j++){
//             h = min(height[i],height[j]);
//             b = j-i;
//             int area= h*b;
//             maxArea = max(area,maxArea);
//         }
//     }
//     return maxArea;
// }

// int main(){
//     vector<int> height = {1,8,6,2,5,4,8,3,7};
//     cout<<"The Area for Maximum Water : "<<maxWater(height)<<endl;
//     return 0;
// }

// CONTAINER WITH MOST WATER PROBLEM (2 pointer approach)

// #include<iostream>
// #include<vector>
// using namespace std;

// int maxWater(vector<int> height){
//     int maxArea = 0;
//     int n = height.size();
//     int st = 0, end = n-1;
//     while(st<end){
//     int h = min(height[st],height[end]);
//     int b = end-st;
//     int area = h*b;
//     maxArea = max(maxArea,area);
//     height[st]<height[end]? st++: end--;
//     }
//     return maxArea;
// }

// int main(){
//     vector<int> height = {1,8,6,2,5,4,8,3,7};
//     cout<<"The Area for Maximum Water : "<<maxWater(height)<<endl;
//     return 0;
// }

//PRODUCT OF ARRAY EXCEPT ITSELF 

// #include<iostream>
// #include<vector>
// using namespace std;

// vector<int> productExceptSelf(vector<int>& nums){
//         int n = nums.size();
//     vector<int> ans(n,1);
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             if(j != i){
//                 ans[i] *= nums[j];
//             }
//         }
//     }
//     return ans;
// }

// int main(){
//     vector<int> nums = {1,2,3,4};
//     int n = nums.size();
//     vector<int> ans = productExceptSelf(nums);
//     for(int i=0; i<n; i++){
//         cout<<ans[i]<<"  ";
//     }
//     return 0;
// }

//PRODUCT OF ARRAY EXCEPT ITSELF (PREFIX AND SUFFIX METHOD)

// #include<iostream>
// #include<vector>
// using namespace std;

// vector<int> productExceptSelf(vector<int>& nums){
//     int n = nums.size();
//     vector<int> prefix(n,1);
//     for(int i=1; i<n; i++){
//         prefix[i] = prefix[i-1]*nums[i-1];
//     }
//     vector<int> suffix(n,1);
//     suffix[n-1]=1;
//     for(int i=n-2; i>=0; i--){
//         suffix[i] = suffix[i+1]*nums[i+1];
//     }
//     vector<int> ans(n,1);
//     for(int i=0; i<n; i++){
//         ans[i]= suffix[i]*prefix[i];
//     }
//     return ans;
// }

// int main(){
//     vector<int> nums = {1,2,3,4};
//     vector<int> ans = productExceptSelf(nums);
//     for(int i=0; i<nums.size(); i++){
//         cout<< ans[i]<<" ";
//     }
//     return 0;
// }

//PRODUCT OF ARRAY EXCEPT ITSELF (PREFIX AND SUFFIX METHOD) SPACE COMPLEXITY = O(1)

// #include<iostream>
// #include<vector>
// using namespace std;

// vector<int> productExceptSelf(vector<int>& nums){
//     int n = nums.size();
//     vector<int> ans(n,1);
//     for(int i=1; i<n; i++){
//         ans[i] = ans[i-1]*nums[i-1];
//     }
//     int suffix = 1;
//     for(int i=n-2; i>=0; i--){
//         suffix *= nums[i+1];
//         ans[i] *= suffix;
//     }
//     return ans;
// }

// int main(){
//     vector<int> nums = {1,2,3,4};
//     vector<int> ans = productExceptSelf(nums);
//     for(int i=0; i<nums.size(); i++){
//         cout<< ans[i]<<" ";
//     }
//     return 0;
// }

// Binary Search (Iterative Method)

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int binarySearch(vector<int>& nums, int t){
//     int n = nums.size();
//     int st = 0, end = n-1;
//     while (st <= end){
//         int mid = st+ (end-st)/2;
//         if(nums[mid] > t){
//             end = mid-1;
//         }
//         else if(nums[mid] < t){
//             st = mid+1;
//         }
//         else{
//             return mid;
//         }
//     }
//     return -1;
// }

// int main(){
//     vector<int> nums = {-1,0,3,4,5,9,12};
//     int target;
//     cout<< "Enter the target value : ";
//     cin >> target;
//     cout<<"Target is at Index : "<< binarySearch(nums,target)<<endl;
//     return 0;
// }

//Binary Search (Recursive Method)

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int recBinarySearch(vector<int>& nums, int tar ,int st, int end){
//     if (st <= end){
//         int mid = st+ (end-st)/2;
//         if(tar > nums[mid]){
//             return recBinarySearch(nums, tar, mid+1, end);
//         }
//         else if(tar < nums[mid]){
//             return recBinarySearch(nums, tar, st, mid-1);
//         }
//         else{
//             return mid;
//         }
//     }
//     return -1;
// }

// int main(){
//     vector<int> nums = {-1,0,3,4,5,9,12};
//     int target;
//     cout<< "Enter the target value : ";
//     cin >> target;
//     cout<<"Target is at Index : "<< recBinarySearch(nums,target,0,nums.size())<<endl;
//     return 0;
// }

// Modified Form of Binary Search (Rotated Sort Array)

// #include<iostream>
// #include<vector>
// using namespace std;

// int search(vector<int>& nums, int tar){
//     int n = nums.size();
//     int st = 0, end = n-1;
//     while(st <= end){
//         int mid = st + (end-st)/2;
//         if(nums[mid] == tar){
//             return mid;
//         }
//         if(nums[st] <= nums[mid]){
//             if(nums[st] <= tar && tar <= nums[mid]){
//                 end = mid-1;
//             }
//             else {
//                 st = mid+1;
//             }
//         }
//         else{
//             if(nums[mid] <= tar && tar <= nums[end]){
//                 st = mid+1;
//             }
//             else {
//                 end = mid-1;
//             }
//         }
//     }
//     return -1;
// }

// int main(){
//     vector<int> nums = {3,4,5,6,7,0,1,2};
//     int target = 0;
//     cout<< "Your target is at index : "<<search(nums,target)<<endl;
//     return 0;
// }

// Peak Index in Mountain Array (Binary Search)

// #include<iostream>
// #include<vector>
// using namespace std;

// int peakMountainSearch(vector<int> nums){
//     int n = nums.size();
//     int st = 1, end = n-2;
//     while(st <= end){
//         int mid = st + (end-st)/2;
//         if (nums[mid] > nums[mid-1] && nums[mid] > nums[mid+1]){
//             return nums[mid];
//         }
//         else if(nums[mid] > nums[mid-1]){
//             st = mid+1;
//         }
//         else{
//             end = mid-1;
//         }
//     }
//     return -1;
// }

// int main(){
//     vector<int> nums = {0,3,8,5,2};
//     cout << "The Peak Value is : "<<peakMountainSearch(nums)<<endl;
//     return 0;
// }

// Single Element In Sorted Array

// #include<iostream>
// #include<vector>
// using namespace std;

// int singleElemSearch(vector<int> nums){
//     int n = nums.size();
//     int st= 0, end = n-1;
//     if(n == 1){
//         return nums[0];
//     }
//     while(st <= end){
//         int mid = st + (end-st)/2;
//         if(mid == 0 && nums[mid] != nums[mid+1]){
//             return nums[mid];
//         }
//         if(mid == (n-1) && nums[mid] != nums[mid-1]){
//             return nums[mid];
//         }
//         if(nums[mid] != nums[mid-1] && nums[mid] != nums[mid+1]){
//             return nums[mid];
//         }
//         if(mid % 2 == 0){
//         if(nums[mid] == nums[mid-1]){
//             end = mid-1;
//         }
//         else{
//             st = mid+1;
//         }
//     }
//     else{
//         if(nums[mid] == nums[mid-1]){
//             st = mid+1;
//         }
//         else{
//             end = mid-1;
//         }
//     }
//     }
//     return -1;
// }

// int main(){
//     vector<int> nums = {1,1,2,3,3,4,4,8,8};
//     cout<<"The Single Element in the Array is : "<<singleElemSearch(nums)<<endl;
//     return 0;
// }

// Book Allocation Problem (Binary Search)

// #include<iostream>
// #include<vector>
// using namespace std;

// bool isValid(vector<int>& nums,int n, int m, int mid){
//     int student = 1, pages = 0;
//     for(int i=0; i<nums.size(); i++){
//         if(nums[i] > mid){
//             return false;
//         }
//         if(pages+ nums[i] <= mid){
//             pages += nums[i];
//         }
//         else{
//             student++;
//             pages = nums[i];
//         }
//     }
//     if(student > m){
//         return false;
//     }
//     else{
//         return true;
//     }
// }

// int minNumMaxPageSearch(vector<int>& nums, int n, int m){
//     if(m>n){
//         return -1;
//     }
//     int ans = -1;
//     int sum = 0;
//     for(int i=0; i<n; i++){
//         sum += nums[i];
//     }
//     int st = 0, end = sum;
//     while(st <= end){
//         int mid = st +(end -st)/2;
//         if(isValid(nums,n,m,mid) == true){
//             end = mid-1;
//             ans = mid;
//         }
//         else{
//             st = mid+1;
//         }
//     }
//     return ans;
// }

// int main(){
//     vector<int> nums = {15,17,20};
//     int n=nums.size(), m=2;
//     cout<<"The Minimum number of miximum pages allowed is : "<<minNumMaxPageSearch(nums,n,m)<<endl;
//     return 0;
// }

//Painter Partiotion's Problem (Binary Search)

// #include<iostream>
// #include<vector>
// using namespace std;

// bool isValid(vector<int>& length, int n, int m, int mid){
//     int painters = 1, time = 0;
//     for(int i=0; i<n; i++){
//     if(length[i] > mid){
//         return false;
//     }
//     if(time + length[i] <= mid){
//         time += length[i];
//     }
//     else{
//         painters ++;
//         time = length[i];
//     }
// }
//     return painters <= m;
// }

// int minTime(vector<int>& length, int n, int m){
//     int sum=0;
//     int maxm = INT16_MIN;
//     for(int i=0; i<n; i++){
//         sum += length[i];
//         maxm = max(maxm,length[i]);
//     }
//     int st = maxm, end = sum;
//     int ans = -1;
//     while(st <= end){
//         int mid = st+ (end-st)/2;
//         if(isValid(length,n,m,mid) == true){
//             ans = mid;
//             end = mid-1;
//         }
//         else{
//             st = mid+1;
//         }
//     }
//     return ans;
// }

// int main(){
//     vector<int> length = {40,30,10,20};
//     int n = length.size(), m=2;
//     cout<<"The minimum time both will take together to finish the painting is : "<<minTime(length,n,m)<<endl;
//     return 0;
// }

// Aggressive Cows Problem (Binary Search)

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// bool isPossible(vector<int>& stalls, int n, int m, int mid){
//     int cows = 1, lastpos = stalls[0];
//     for(int i=1; i<n; i++){
//         if(stalls[i]-lastpos >= mid){
//             cows++;
//             lastpos = stalls[i];
//         }
//         if(cows == m){
//             return true;
//         }
//     }
//     return false;
// }

// int largminSpacebtwCows(vector<int> &stalls, int n, int m){
//     sort(stalls.begin(),stalls.end());
//     if(m > n){
//         return -1;
//     }
//     int st = 1, end = stalls[n-1]-stalls[0], ans = -1;
//     while(st <= end){
//         int mid = st+(end-st)/2;
//         if(isPossible(stalls,n,m,mid) == true){
//             ans = mid;
//             st = mid+1;
//         }
//         else{
//             end = mid-1;
//         }
//     }
//     return ans;
// }

// int main(){
//     vector<int> stalls = {1,2,8,4,9};
//     int n = stalls.size(), m = 3;
//     cout<<"The Maximum Value of the minimum number of stall between the cows are : "<<largminSpacebtwCows(stalls,n,m)<<endl;
//     return 0;
// }

//Bubble Sort

// #include<iostream>
// #include<vector>
// using namespace std;

// vector<int> bubbleSort(vector<int> &nums, int n){
//     for(int i=0; i<n-1; i++){
//         bool isSwap = false;
//         for(int j=0; j<n-i-1; j++){
//             if(nums[j]>nums[j+1]){
//                 swap(nums[j],nums[j+1]);
//                 isSwap = true;
//             }
//         }
//         if(!isSwap){
//             break ;
//         }
//     }
//     return nums;
// }

// int main(){
//     vector<int> nums = {2,6,4,7,5,9,3,8,1};
//     int n = nums.size();
//     cout<< "Sorted Array in Ascending Order : ";
//     vector<int> ans = bubbleSort(nums,n);
//     for(int i=0; i<n; i++){
//         cout<<ans[i]<<" ";
//     }
//     return 0;
// }

// Selection Sort

// #include<iostream>
// #include<vector>
// using namespace std;

// vector<int> selectionSort(vector<int> &nums, int n){
//     for(int i=0; i<n-1; i++){
//         int minIndex = i;
//         for(int j=i+1; j<n; j++){
//             if(nums[j] < nums[minIndex]){
//                 minIndex = j;
//             }
//         }
//         swap(nums[i],nums[minIndex]);
//     }
//     return nums;
// }

// int main(){
//     vector<int> nums = {2,6,4,7,5,9,3,8,1};
//     int n = nums.size();
//     cout<< "Sorted Array in Ascending Order : ";
//     vector<int> ans = selectionSort(nums,n);
//     for(int i=0; i<n; i++){
//         cout<<ans[i]<<" ";
//     }
//     return 0;
// }

//Insertion Sort

// #include<iostream>
// #include<vector>
// using namespace std;

// void insertionSort(vector<int> &nums, int n){
//     for(int i=1; i<n; i++){
//         int curr = nums[i];
//         int prev = i-1;
//         while(prev >= 0 && nums[prev]>curr){
//             nums[prev+1] = nums[prev];
//             prev--;
//         }
//         nums[prev+1] = curr;
//     }
// }

// int main(){
//     vector<int> nums = {2,6,4,7,5,9,3,8,1};
//     int n = nums.size();
//     cout<< "Sorted Array in Ascending Order : ";
//     insertionSort(nums,n);
//     for(int i=0; i<n; i++){
//         cout<<nums[i]<<" ";
//     }
//     return 0;
// }

// Sort Array with 0s, 1s and 2s.

// #include<iostream>
// #include<vector>
// using namespace std;

// void sorting(vector<int> &nums, int n){
//     int x=0,y=0,z=0;
//     for(int i=0; i<n; i++){
//         if(nums[i] == 0){
//             x++;
//         }
//         if(nums[i] == 1){
//             y++;
//         }
//         if(nums[i] == 2){
//             z++;
//         }
//     }
//     int index=0;
//         for(int i=0; i<x; i++){
//             nums[index++] = 0;
//         }
//         for(int i=0; i<y; i++){
//             nums[index++] = 1;
//         }
//         for(int i=0; i<z; i++){
//             nums[index++] = 2;
//     }
// }

// int main(){
//     vector<int> nums = {2,0,2,1,1,0,1,2,0,0};
//     int n = nums.size();
//     sorting(nums,n);
//     cout<<"The Sorted Array : ";
//     for(int i=0; i<n; i++){
//         cout<<nums[i]<<" ";
//     }
//     return 0;
// }

// Dutch National Flag Algorithm

// #include<iostream>
// #include<vector>
// using namespace std;

// void sorting(vector<int> &nums, int n){
//     int mid = 0, high = n-1, low = 0;
//     while(mid <= high){
//         if(nums[mid] == 0){
//             swap(nums[low],nums[mid]);
//             mid++;
//             low++;
//         }
//         else if(nums[mid] == 1){
//             mid++;
//         }
//         else if(nums[mid] == 2){
//             swap(nums[mid],nums[high]);
//             high--;
//         }
//     }
// }

// int main(){
//     vector<int> nums = {2,0,2,1,1,0,1,2,0,0};
//     int n = nums.size();
//     sorting(nums,n);
//     cout<<"Array after sorting : ";
//     for(int i=0; i<n; i++){
//         cout<<nums[i]<<" ";
//     }
//     return 0;
// }

// Merge Two Sorted Arrays

// #include<iostream>
// #include<vector>
// using namespace std;

// void sorting(vector<int> &A, int m, vector<int> &B, int n){
//     int index = m+n-1, i = m-1, j=n-1;
//     while(i>=0 && j>=0){
//         if(A[i]>B[j]){
//             A[index] = A[i];
//             index--;
//             i--;
//         }
//         else{
//             A[index] = B[j];
//             index--;
//             j--;
//         }
//     }
//     while(j >= 0){
//         A[index] = B[j];
//         index--;
//         j--;
//     }
// }

// int main(){
//     vector<int> A = {1,2,3,0,0,0};
//     int m = 3;
//     vector<int> B = {2,5,6};
//     int n = B.size();
//     sorting(A,m,B,n);
//     cout<<"The Sorted Merged Array : ";
//     for(int i=0; i<m+n; i++){
//         cout<<A[i]<<" ";
//     }
//     return 0;
// }

#include<iostream>
#include<vector>
using namespace std;

void nextPermutation(vector<int> &nums, int n){
    int pivot = -1;
    for(int i=n-2; i>=0; i--){
        if(nums[i]<nums[i+1]){
            pivot=i;
            break;
        }
    }
    if(pivot == -1){
        int st=0, end=n-1;
        while(st<end){
            swap(nums[st],nums[end]);
            st++;
            end--;
        }
        return;
    }
    for(int i= n-1; i>pivot; i--){
        if(nums[pivot]<nums[i]){
            swap(nums[pivot],nums[i]);
            break;
        }
    }
    int st1=pivot+1, end=n-1;
    while(st1<end){
        swap(nums[st1],nums[end]);
        st1++;
        end--;
       }
}

int main(){
    vector<int> nums = {1,2,3,6,5,4};
    int n = nums.size();
    nextPermutation(nums,n);
    cout<<"The next lexicography permutation is : ";
    for(int i=0; i<n; i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}