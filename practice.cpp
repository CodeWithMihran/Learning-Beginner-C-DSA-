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

//

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

//Painter Partition's Problem (Binary Search)

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

// NEXT PERMUTATION

// #include<iostream>
// #include<vector>
// using namespace std;

// void nextPermutation(vector<int> &nums, int n){
//     int pivot = -1;
//     for(int i=n-2; i>=0; i--){
//         if(nums[i]<nums[i+1]){
//             pivot=i;
//             break;
//         }
//     }
//     if(pivot == -1){
//         int st=0, end=n-1;
//         while(st<end){
//             swap(nums[st],nums[end]);
//             st++;
//             end--;
//         }
//         return;
//     }
//     for(int i= n-1; i>pivot; i--){
//         if(nums[pivot]<nums[i]){
//             swap(nums[pivot],nums[i]);
//             break;
//         }
//     }
//     int st1=pivot+1, end=n-1;
//     while(st1<end){
//         swap(nums[st1],nums[end]);
//         st1++;
//         end--;
//        }
// }

// int main(){
//     vector<int> nums = {1,2,3,6,5,4};
//     int n = nums.size();
//     nextPermutation(nums,n);
//     cout<<"The next lexicography permutation is : ";
//     for(int i=0; i<n; i++){
//         cout<<nums[i]<<" ";
//     }
//     return 0;
// }

// Learning String Concepts

// #include<iostream>
// using namespace std;

// int main(){
//     char str[100];
//     int len = 0;
//     cout<<"Enter Your Name : ";
//     cin.getline(str,100);
//     for(int i=0; str[i] != '\0'; i++){
//         len++;
//     }
//     cout<<"Length of the string : "<<len<<endl;
//     return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
//     string str;
//     cout<<"Enter Your Name : ";
//     getline(cin,str);
//     cout<< "Your Name : "<<str<<endl;
//     cout<< "Length of he string : "<<str.length()<<endl;
//     return 0;
// }

// Reverse a String

// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
//     string word;
//     cout<<"Input the word : ";
//     getline(cin,word);
//     int st=0, end = word.length()-1;
//     while(st<=end){
//         swap(word[st++],word[end--]);
//     }
//     cout<<"Your reversed word : "<<word<<endl;
//     return 0;
// }

// Valid Palindrome

// #include<iostream>
// #include<string>
// using namespace std;

// bool isAlphaNum(char ch){
//     if((ch >= 0 && ch<=9) ||
//         (tolower(ch) >= 'a' && tolower(ch) <= 'z')){
//             return true;
//         }
//     return false;
// }

// bool isPalindrome(string s){
//     int st = 0, end = s.size()-1;
//     while(st<end){
//         if(!isAlphaNum(s[st])){
//             st++;   continue;
//         }
//         if(!isAlphaNum(s[end])){
//             end--;  continue;
//         }
//         if(tolower(s[st]) != tolower(s[end])){
//             return false;
//         }
//         else{
//             st++;
//             end--;
//         }
//     }
//     return true;
// }

// int main(){
//     string s = "Racecar";
//     cout<<isPalindrome(s)<<endl;
//     return 0;
// }

// Remove All Occurrences of a Substring

// #include<iostream>
// #include<string>
// using namespace std;

// string removeOccurences(string s, string part){
//     while (s.length()>0 && s.find(part) < s.length()){
//         s.erase(s.find(part), part.length());
//     }
//     return s;
// }

// int main(){
//     string s = "daabcbaabcbc";
//     string part = "abc";
//     string ans = removeOccurences(s,part);
//     cout<<"String after removing Occurences : "<<ans<<endl;
//     return 0;
// }

// Permutation in String

// #include<iostream>
// #include<string>
// using namespace std;

// bool isFreqSame(int freq1[], int freq2[]){
//     for(int i=0; i<26; i++){
//         if(freq1[i] != freq2[i]){
//             return false;
//         }
//     }
//     return true;
// }

// bool checkInclusion(string s1, string s2){
//     int freq[26] = {0};
//     for(int i=0; i< s1.length(); i++){
//         freq[s1[i] - 'a']++;
//     }
//     int windSize = s1.length();
//     for(int i=0; i<s2.length(); i++){
//         int windIdx = 0, idx = i;
//         int windFreq[26] = {0};
//         while(windIdx < windSize && idx < s2.length()){
//             windFreq[s2[idx]-'a']++;
//             windIdx++; idx++;  
//         }
//         if(isFreqSame(freq,windFreq)){
//             return true;
//         }
//     }
//     return false;
// }

// int main(){
//     string s1 = "ab";
//     string s2 = "eidbaooo";
//     string s3 = "eidboaoo";
//     cout<<checkInclusion(s1,s2)<<endl;
//     cout<<checkInclusion(s1,s3)<<endl;
//     return 0;
// }

// Reverse Word in String 

// #include<iostream>
// #include<algorithm>
// #include<string>
// using namespace std;

// string reverseWords(string s){
//     reverse(s.begin(),s.end());
//     string ans = "";
//     for(int i=0; i<s.length(); i++){
//         string word = "";
//         while(i<s.length() && s[i] != ' '){
//         word += s[i];
//         i++;
//         }
//         reverse(word.begin(), word.end());
//         if(word.length() > 0){
//           ans += " "+ word;
//         }
//     }
//     return ans.substr(1);
// }
    

// int main(){
//     string s = "the sky is blue";
//     string ans = reverseWords(s);
//     cout<<ans<<endl;
//     return 0;
// }

// String Compression

// #include<iostream>
// #include<vector>
// #include<string>
// using namespace std;

// vector<char> compressString(vector<char> &chars){
//     int idx = 0;
//     for(int i=0; i<chars.size(); i++){
//         char ch = chars[i];
//         int count = 0;
//         while(i<chars.size() && chars[i] == ch){
//             i++;  count++;
//         }
//         if (count == 1){
//             chars[idx++] = ch;
//         }
//         else{
//             chars[idx++] = ch;
//             string str = to_string(count);
//             for(char dig: str){
//                 chars[idx++] = dig;
//             }
//         }
//         i--;
//     }
//     chars.resize(idx);
//     return chars;
// }

// int main(){
//     vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
//     vector<char> compressed = compressString(chars);
//     cout<<"Compressed String : ";
//     for(int i=0; i<compressed.size(); i++){
//         cout<< compressed[i]<<" ";
//     }
//     return 0;
// }

// Some DSA Maths Logic with Code

// Prime Number

// #include<iostream>
// using namespace std;

// bool isPrime(int n){
//      for(int i=2; i*i <= n; i++){
//         if(n % i == 0){
//             return false;
//         }
//      }
//      return true;
// }

// int main(){
//     int n;
//     cout<<"Enter the number : ";
//     cin >> n;
//     if(!isPrime(n)){
//         cout<<n<<" is not a Prime Number."<<endl;
//     }
//     else{
//         cout<<n<<" is a Prime Number."<<endl;
//     }
//     return 0;
// }

// Count of Prime Number upto n.

// #include<iostream>
// using namespace std;

// int countPrime(int n){
//     int count = 0;
//     for(int i=2; i<=n; i++){
//         bool isPrime = true;
//         for(int j=2; j*j <= i; j++){
//         if(i % j == 0){
//             isPrime = false;
//             break;
//         }
//       }
//       if(isPrime){
//         count++;
//       }
//     }
//     return count;
// }

// int main(){
//     int n;
//     cout<<"Enter the number : ";
//     cin >> n;
//     cout<<"No. of Prime Numbers upto '"<<n<<"' is "<<countPrime(n)<<endl;
//     return 0;
// }

// Sieve of Eratosthenes 

// #include<iostream>
// #include<vector>
// using namespace std;

// int countPrime(int n){
//     vector<bool> isPrime(n+1,true);
//     int count = 0;
//     for(int i=2; i<n; i++){
//         if(isPrime[i]){
//             count++;
//             for(int j=i*i; j<n; j=j+i){
//                 isPrime[j] = false;
//             }
//         }
//     }
//     return count;
// }

// int main(){
//     int n;
//     cout<<"Enter the number : ";
//     cin >> n;
//     cout<<"No. of Prime Numbers upto '"<<n<<"' is "<<countPrime(n)<<endl;
//     return 0;
// }

// Digits in a number

// #include<iostream>
// using namespace std;

// int countDigits(int n){
//     int count = 0;
//     while(n != 0){
//         int digit = n%10;
//         count++;
//         n /= 10;
//     }
//     return count;
// }

// int main(){
//     int n;
//     cout<<"Enter the number : ";
//     cin >> n;
//     cout<<"Number of digits in your number are : "<<countDigits(n)<<endl;
//     return 0;
// }

// Shortcut Method to find the number of digits in a number

// #include<iostream>
// #include<math.h>
// using namespace std;

// int main(){
//     int n;
//     cout<<"ENter the number : ";
//     cin >> n;
//     cout<<"Number of digits in your number are : "<<(int)(log10(n)+1)<<endl;
//     return 0;
// }

// Armstrong Number

// #include<iostream>
// using namespace std;

// bool isArmstrong(int n){
//     int copyN=n;
//     int ans = 0;
//     while(n != 0){
//         int x = n % 10;
//         ans += (x*x*x);
//         n /= 10;
//     }
//     if(ans == copyN){
//         return true;
//     }
//     return false;
// }

// int main(){
//     int n;
//     cout<<"Enter the number : ";
//     cin >> n;
//     if(isArmstrong(n)){
//         cout<<"Given number is an Armstrong."<<endl;
//     }
//     else{
//         cout<<"Given number is not an Armstrong."<<endl;
//     }
//     return 0;
// }

// Greatest Common Divisor (GCD) or HCF
// Brute-Force Method

// #include<iostream>
// using namespace std;

// int calcGCD(int x, int y){
//     if(x == 0 && y == 0){
//         return 0;
//     }
//     if(x == 0){
//         return y;
//     }
//     if(y == 0){
//         return x;
//     }
//     int gcd = 1;
//     for(int i=1; i<=min(x,y); i++){
//         if(x % i == 0 && y % i == 0){
//             gcd = i;
//         }
//     }
//     return gcd;
// }

// int main(){
//     int x = 8;
//     int y = 0;
//     cout<<"GCD of the two numbers are : "<<calcGCD(x,y)<<endl;
//     return 0;
// }

// EUCLID'S ALGORITHM

// #include<iostream>
// using namespace std;

// int calcGCD(int x, int y){
//     while(x>0 && y>0){
//         if(x > y){
//             x = x % y;
//         }
//         else{
//             y = y % x;
//         }
//     }
//     if(x == 0) return y;
//     return x;
// }



// int main(){
//     int x = 20;
//     int y = 28;
//     cout<<"GCD of the two numbers are : "<<gcdRec(x,y)<<endl;
//     return 0;
// }

// Recursion Method

// #include<iostream>
// using namespace std;

// int gcdRec(int x, int y){
//     if(y==0) return x;
//     return gcdRec(y, x%y);
// }

// int main(){
//     int x = 20;
//     int y = 28;
//     cout<<"GCD of the two numbers are : "<<gcdRec(x,y)<<endl;
//     return 0;
// }

// LCM

// #include<iostream>
// using namespace std;

// int gcdRec(int x, int y){
//     if(y==0) return x;
//     return gcdRec(y, x%y);
// }

// int calcLCM(int x,int y){
//     int lcm = (x*y) / gcdRec(x,y);
// }

// int main(){
//     int x = 20;
//     int y = 28;
//     cout<<"LCM of the two numbers are : "<<calcLCM(x,y)<<endl;
//     return 0;
// }

// Reverse a Number 

// #include<iostream>
// using namespace std;

// int reverse(int n){
//     int revNum = 0;
//     while(n != 0){
//         int dig = n % 10;
//         if(revNum > INT16_MAX/10 || revNum < INT16_MIN/10){
//             return 0;
//         }
//         revNum = (revNum * 10) + dig;
//         n = n/10;
//     }
//     return revNum;
// }

// int main(){
//     int n;
//     cout<<"Enter the number : ";
//     cin >> n;
//     cout<<"Your reversed number : "<<reverse(n)<<endl;
//     return 0;
// }

// Palindrome Number :

// #include<iostream>
// using namespace std;

// int reverse(int n){
//     int revNum = 0;
//     while(n != 0){
//         int dig = n % 10;
//         if(revNum > INT16_MAX/10 || revNum < INT16_MIN/10){
//             return 0;
//         }
//         revNum = (revNum * 10) + dig;
//         n = n/10;
//     }
//     return revNum;
// }

//     bool isPalindrome(int x) {
//         if(x < 0) return false;
//         int revNum = reverse(x);
//         return x == revNum;
//     }

//     int main(){
//     int n;
//     cout<<"Enter the number : ";
//     cin >> n;
//     if(isPalindrome(n)){
//         cout<<"The given number is a Palindrome."<<endl;
//     }
//     else{
//         cout<<"The given number is not a Palindrome."<<endl;
//     }
//     return 0;
// }

// Learning Matrix Concept
// 2D Matrix

// #include<iostream>
// using namespace std;

// int main(){
//     int matrix[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
//     int rows = 4;
//     int cols = 3;
//     for(int i=0; i<rows; i++){
//         for(int j=0; j<cols; j++){
//             cin >> matrix[i][j];
//         }
//     }
//     for(int i=0; i<rows; i++){
//         for(int j=0; j<cols; j++){
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Linear Search

// #include<iostream>
// using namespace std;

// bool linearSearch(int matrix[][3], int rows, int cols, int key){
//     for(int i=0; i<rows; i++){
//         for(int j=0; j<cols; j++){
//             if( matrix[i][j] == key){
//                 return true;
//             }
//         }
//     }
//     return false;
// }

// int main(){
//     int matrix[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
//     int rows = 4;
//     int cols = 3;
//     int key = 8;
//     cout<<linearSearch(matrix,rows,cols,key)<<endl;
//     return 0;
// }

// #include<iostream>
// #include<utility>
// using namespace std;

// pair<int,int> linearSearch(int matrix[][3], int rows, int cols, int key){
//     pair<int, int> indices = {-1,-1};
//     for(int i=0; i<rows; i++){
//         for(int j=0; j<cols; j++){
//             if( matrix[i][j] == key){
//                 indices = {i,j};
//             }
//         }
//     }
//     return indices;
// }

// int main(){
//     int matrix[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
//     int rows = 4;
//     int cols = 3;
//     int key = 8;
//     pair<int,int> indices = linearSearch(matrix,rows,cols,key);
//     cout<<"The Key is located at : ["<<indices.first<<"] ["<<indices.second<<"]"<<endl;
//     return 0;
// }

// Maximum Row Sum

// #include<iostream>
// using namespace std;

// int maxmRowSum(int matrix[][3], int rows, int cols){
//     int maxSum = INT16_MIN;
//     for(int i=0; i<rows; i++){
//         int sum = 0;
//         for(int j=0; j<cols; j++){
//             sum += matrix[i][j];
//         }
//         maxSum = max(maxSum, sum);
//     }
//     return maxSum;
// }

// int main(){
//     int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
//     int rows = 3;
//     int cols = 3;
//     cout<<"Maximum Row Sum of the matrix : "<<maxmRowSum(matrix,rows,cols)<<endl;
//     return 0;
// }

// Maximum Coloumn Sum

// #include<iostream>
// using namespace std;

// int maxmColSum(int matrix[][3], int rows, int cols){
//     int maxSum = INT16_MIN;
//     for(int i=0; i<rows; i++){
//         int sum = 0;
//         for(int j=0; j<cols; j++){
//             sum += matrix[j][i];
//         }
//         maxSum = max(maxSum, sum);
//     }
//     return maxSum;
// }

// int main(){
//     int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
//     int rows = 3;
//     int cols = 3;
//     cout<<"Maximum Coloumn Sum of the matrix : "<<maxmColSum(matrix,rows,cols)<<endl;
//     return 0;
// }

// Diagonal Sum

// #include<iostream>
// using namespace std;

// int diagonalSum(int matrix[][3], int n){
//     int sum = 0;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             if(i ==j){
//                 sum += matrix[i][j];
//             }
//             else if(j == n-1-i){
//                 sum += matrix[i][j];
//             }
//         }
//     }
//     return sum;
// }

// int main(){
//     int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
//     int n = 3;
//     cout<<"Sum of diagonal elements are : "<<diagonalSum(matrix,n)<<endl;
//     return 0;
// }

// 2nd Method

// #include<iostream>
// using namespace std;

// int diagonalSum(int matrix[][3], int n){
//     int sum = 0;
//     for(int i=0; i<n; i++){
//         sum += matrix[i][i];
//         if(i != n-1-i){
//             sum += matrix[i][n-1-i];
//         }
//     }
//     return sum;
// }

// int main(){
//     int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
//     int n = 3;
//     cout<<"Sum of diagonal elements are : "<<diagonalSum(matrix,n)<<endl;
//     return 0;
// }

// Learning 2D Vector

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<vector<int>> matrix = {{1,2,3},{4,5,6,9,10},{7,8,9}};
    
//     // rows = matrix.size();
//     // cols = matrix[i].szie();

//     for(int i=0; i<matrix.size(); i++){
//         for(int j=0; j<matrix[i].size(); j++){
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Search in 2D Array (Binary Search) O(m*log(n))

// #include<iostream>
// #include<vector>
// using namespace std;

// bool searchMatrix(vector<vector<int>> matrix, int target){
//     for(int i=0; i<matrix.size(); i++){
//         int st = 0, end = matrix[i].size()-1;
//         while(st <= end){
//             int mid = st + (end-st)/2;
//             if(matrix[i][mid] == target){
//                 return true;
//             }
//             if(matrix[i][mid] > target){
//                 end = mid-1;
//             }
//             else{
//                 st = mid+1;
//             }
//         }
//     }
//     return false;
// }

// int main(){
//     vector<vector<int>> matrix = {{1,3,5,7},{10,11,16,20},{20,30,34,60}};
//     int target = 100;
//     cout<<searchMatrix(matrix ,target)<<endl;
//     return 0;
// }

// More Optimised Solution O(log(m*n))

// #include<iostream>
// #include<vector>
// using namespace std;

// bool searchinRow(vector<vector<int>> matrix, int target, int row){
//     int n = matrix[0].size();
//     int st = 0, end = n-1;
//     while(st <= end){
//         int mid = st + (end-st)/2;
//         if(target == matrix[row][mid]){
//             return true;
//         }
//         if(target > matrix[row][mid]){
//             st = mid+1;
//         }
//         else{
//             end = mid-1;
//         }
//     }
//     return false;
// }

// bool searchMatrix(vector<vector<int>> matrix, int target){
//     int m = matrix.size(), n = matrix[0].size();
//     int stRow = 0 , endRow = m-1;
//     while(stRow <= endRow){
//         int midRow = stRow + (endRow-stRow)/2;
//         if(target >= matrix[midRow][0] && target <= matrix[midRow][n-1]){
//             return searchinRow(matrix,target,midRow);
//         }
//         if(target < matrix[midRow][0]){
//             endRow = midRow-1;
//         }
//         else{
//             stRow = midRow+1;
//         }
//     }
//     return false;
// }

// int main(){
//     vector<vector<int>> matrix = {{1,3,5,7},{10,11,16,20},{20,30,34,60}};
//     int target = 34;
//     cout<<searchMatrix(matrix ,target)<<endl;
//     return 0;
// }

// Search in a 2D Matrix II

// #include<iostream>
// #include<vector>
// using namespace std;

// bool searchMatrix(vector<vector<int>> matrix, int target ){
//     int m = matrix.size(), n = matrix[0].size();
//     int row = 0, col = n-1;
//     while(row < m && col >= 0){
//         if(target == matrix[row][col]){
//             return true;
//         }
//         else if(target > matrix[row][col]){
//             row++;
//         }
//         else{
//             col--;
//         }
//     }
//     return false;
// }

// int main(){
//     vector<vector<int>> matrix = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
//     int target = 26;
//     cout<<searchMatrix(matrix, target)<<endl;
//     return 0;
// }

// Spiral Matrix O(m*n)

// #include<iostream>
// #include<vector>
// using namespace std;

//     vector<int> spiralOrder(vector<vector<int>>& matrix) {
//         int m = matrix.size(), n=matrix[0].size();
//         int srow = 0, scol = 0, ecol = n-1, erow = m-1;
//         vector<int> ans;
//         while(srow <= erow && scol <= ecol){
//             for(int j=scol; j<= ecol; j++){
//                 ans.push_back(matrix[srow][j]);
//             }
//             for(int i=srow+1; i<=erow; i++){
//                 ans.push_back(matrix[i][ecol]);
//             }
//             for(int j=ecol-1; j>=scol; j--){
//                 if(srow == erow){
//                     break;
//                 }
//                 ans.push_back(matrix[erow][j]);
//             }
//             for(int i=erow-1; i>=srow+1; i--){
//                 if(scol == ecol){
//                     break;
//                 }
//                 ans.push_back(matrix[i][scol]);
//             }
//             srow++;  scol++; erow--; ecol--;
//         }
//         return ans;
//     }

// int main(){
//     vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
//     vector<int> spiral_matrix = spiralOrder(matrix);
//     cout<<"Matrix in spiral order : ";
//     for(int i=0; i<spiral_matrix.size(); i++){
//         cout << spiral_matrix[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

// 2 Sum Problem (Leetcode Q.1)

// #include<iostream>
// #include<vector>
// #include<unordered_map>
// using namespace std;

// vector<int> twoSum(vector<int>& nums, int target){
//     unordered_map<int,int> m;
//     vector<int> ans;
//     int n = nums.size();
//     for(int i=0; i<n; i++){
//         int first = nums[i];
//         int second = target - first;
//         if(m.find(second) != m.end()){
//             ans.push_back(i);
//             ans.push_back(m[second]);
//             break;
//         }
//         m[first] = i;
//     }
//     return ans;
// }

// int main(){
//     vector<int> nums = {2,7,11,15};
//     int target = 9;
//     vector<int> ans = twoSum(nums,target);
//     cout<<"Index of the two sum value : ";
//     for(int i=0; i<ans.size(); i++){
//         cout<<ans[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

// Find Missing and Repeating values.

// #include<iostream>
// #include<vector>
// #include<unordered_set>
// #include<unordered_map>
// using namespace std;

// vector<int> find(vector<vector<int>> &grid){
//     vector<int> ans;
//     unordered_set<int> s;
//     int n = grid.size();
//     int a,b;
//     int actualSum = 0, expectedSum = 0;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             actualSum += grid[i][j];
//             if(s.find(grid[i][j]) != s.end()){
//                 a = grid[i][j];
//                 ans.push_back(a);
//             }
//             s.insert(grid[i][j]);
//         }
//     }
//     expectedSum = (n*n)*((n*n)+1)/2;
//     b = expectedSum + a - actualSum;
//     ans.push_back(b);
//     return ans;
// }

// int main(){
//     vector<vector<int>> grid = {{9,1,7},{8,9,2},{3,4,6}};
//     vector<int> ans = find(grid);
//     cout<<"The target values are : ";
//     for(int i=0; i<ans.size(); i++){
//         cout<<ans[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

// Find the duplicate number. TC : O(n) || SC : O(n)

// #include<iostream>
// #include<vector>
// #include<unordered_set>
// using namespace std;

// int findDuplicate(vector<int> &nums){
//     unordered_set<int> s;

//     for(int val: nums){
//         if(s.find(val) != s.end()){
//             return val;
//         }
//         s.insert(val);
//     }
//     return -1;
// }

// int main(){
//     vector<int> nums = {1,3,4,2,2};
//     cout<<"The duplicate value in the Array : "<<findDuplicate(nums)<<endl;
//     return 0;
// }

// Find the duplicate number. TC : O(n) || SC : O(1)

// #include<iostream>
// #include<vector>
// using namespace std;

// int findDuplicate(vector<int> &nums){
//     int slow = nums[0], fast = nums[0];
//     do{
//         slow = nums[slow];
//         fast = nums[nums[fast]];
//     }while(slow != fast);

//     slow = nums[0];

//     while(slow != fast){
//         slow = nums[slow];
//         fast = nums[fast];
//     }
//     return slow;
// }

// int main(){
//     vector<int> nums = {3,1,3,4,2};
//     cout<<"The duplicate value in the Array : "<<findDuplicate(nums)<<endl;
//     return 0;
// }

// Three Sum (BruteForce Approach) TC : O(n^3*log(uniqueTriplets))

// #include<iostream>
// #include<vector>
// #include<set>
// #include<algorithm>
// using namespace std;

// vector<vector<int>> threeSum(vector<int> &nums, int target){
//     int n = nums.size();
//     vector<vector<int>> ans;
//     set<vector<int>> s;

//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<n; j++){
//             for(int k=j+1; k<n; k++){
//                 if(nums[i]+nums[j]+nums[k] == target){
//                     vector<int> trip = {nums[i], nums[j], nums[k]};
//                     sort(trip.begin(), trip.end());

//                     if(s.find(trip) == s.end()){
//                         s.insert(trip);
//                         ans.push_back(trip);
//                     }
//                 }
//             }
//         }
//     }
//     return ans;
// }

// int main(){
//     vector<int> nums = {-1,0,1,2,-1,-4};
//     int target = 0;
//     vector<vector<int>> ans = threeSum(nums, target);
//     for(int i=0; i<ans.size(); i++){
//         cout<<"{ ";
//         for(int j=0; j<ans[0].size(); j++){
//             cout<<ans[i][j]<<" ";
//         }
//         cout<<"}"<<endl;
//     }
//     return 0;
// }

// Approach with Hashing  TC : O(n^2*log(uniqueTriplets))

// #include<iostream>
// #include<vector>
// #include<set>
// #include<algorithm>
// using namespace std;

// vector<vector<int>> threeSum(vector<int> &nums, int target){
//     int n = nums.size();
//     set<vector<int>> uniqueTriplets;

//     for(int i=0; i<n; i++){
//         int tar = target - nums[i];
//         set<int> s;

//         for(int j=i+1; j<n; j++){
//             int third = tar - nums[j];

//             if(s.find(third) != s.end()){
//                 vector<int> trip = {nums[i], nums[j], third};
//                 sort(trip.begin(), trip.end());
//                 uniqueTriplets.insert(trip);
//             }
//             s.insert(nums[j]);
//         }
//     }
//     vector<vector<int>> ans = {uniqueTriplets.begin(), uniqueTriplets.end()};
//     return ans;
// }

// int main(){
//     vector<int> nums = {-1,0,1,2,-1,-4};
//     int target = 0;
//     vector<vector<int>> ans = threeSum(nums, target);
//     for(int i=0; i<ans.size(); i++){
//         cout<<"{";
//         for(int j=0; j<ans[0].size(); j++){
//             cout<<ans[i][j]<<" ";
//         }
//         cout<<"}"<<endl;
//     }
//     return 0;
// }

// 2 Pointer Approach TC : O(nlogn + n^2)  SC : O(uniqueTriplets)

// #include<iostream>
// #include<vector>
// #include<set>
// #include<algorithm>
// using namespace std;

// vector<vector<int>> threeSum(vector<int> &nums, int target){
//     int n = nums.size();
//         vector<vector<int>> ans;
//         sort(nums.begin(),nums.end());
//         for(int i=0; i<n; i++){
//             int j = i+1, k = n-1;
//             if(i>0 && nums[i] == nums[i-1]){ continue; }
//             while(j<k){
//                 int sum = nums[i]+nums[j]+nums[k];
//                 if(sum < target){
//                     j++;
//                 }
//                 else if(sum > target){
//                     k--;
//                 }
//                 else{
//                     ans.push_back({nums[i],nums[j],nums[k]});
//                     j++; k--;
//                     while(j<k && nums[j] == nums[j-1]){
//                         j++;
//                     }
//                 }
//             }
//         }
//         return ans;
// }

// int main(){
//     vector<int> nums = {-1,0,1,2,-1,-4};
//     int target = -6;
//     vector<vector<int>> ans = threeSum(nums, target);
//     for(int i=0; i<ans.size(); i++){
//         cout<<"{";
//         for(int j=0; j<ans[0].size(); j++){
//             cout<<ans[i][j]<<" ";
//         }
//         cout<<"}"<<endl;
//     }
//     return 0;
// }

// Four Sum

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// vector<vector<int>> fourSum(vector<int>& nums, int target) {
//     int n = nums.size();
//     vector<vector<int>> ans;
//     sort(nums.begin(), nums.end());

//     for(int i = 0; i < n; i++) {
//         if(i > 0 && nums[i] == nums[i-1]) continue;

//         for(int j = i + 1; j < n; j++) {
//             if(j > i + 1 && nums[j] == nums[j-1]) continue;

//             int p = j + 1, q = n - 1;

//             while(p < q) {
//                 long long sum = 1LL * nums[i] + nums[j] + nums[p] + nums[q];
//                 if(sum < target) {
//                     p++;
//                 } else if(sum > target) {
//                     q--;
//                 } else {
//                     ans.push_back({nums[i], nums[j], nums[p], nums[q]});
//                     p++; q--;
//                     while(p < q && nums[p] == nums[p - 1]) p++;
//                     while(p < q && nums[q] == nums[q + 1]) q--;
//                 }
//             }
//         }
//     }

//     return ans;
// }

// int main() {
//     vector<int> nums = {-1, 0, 1, 2, -1, -4};
//     int target = 2;
//     vector<vector<int>> ans = fourSum(nums, target);

//     for(int i = 0; i < ans.size(); i++) {
//         cout << "{";
//         for(int j = 0; j < ans[i].size(); j++) {
//             cout << ans[i][j];
//             if (j != ans[i].size() - 1) cout << ", ";
//         }
//         cout << "}" << endl;
//     }

//     return 0;
// }

// Subarray Sum Equals K.

// #include<iostream>
// #include<vector>
// using namespace std;

// int countSubarray(vector<int> &nums, int k){
//     int n = nums.size();
//     int count = 0;
//     for(int i=0; i<n; i++){
//         int sum = 0;
//         for(int j=i; j<n; j++){
//             sum += nums[j];
//             if(sum == k){
//                 count++;
//             }
//         }
//     }
//     return count;
// }

// int main(){
//     vector<int> nums = {9,4,20,3,10,5};
//     int k = 33;
//     cout<<"The count of subarrays which sums upto k : "<<countSubarray(nums,k)<<endl;
//     return 0;
// }

// #include<iostream>
// #include<vector>
// #include<unordered_map>
// using namespace std;

// int countSubarray(vector<int>& nums, int k) {
//         int n = nums.size();
//         int count = 0;
//         vector<int> prefixSum(n,0);
//         prefixSum[0] = nums[0];
//         for(int i=1; i<n; i++){
//             prefixSum[i] = prefixSum[i-1] + nums[i];
//         }
//         unordered_map<int,int> m;
//         for(int j=0; j<n; j++){
//             if(prefixSum[j] == k){
//                 count++;
//             }

//             int val = prefixSum[j] - k;
//             if(m.find(val) != m.end()){
//                 count += m[val];
//             }
//             if(m.find(prefixSum[j]) == m.end()){
//                 m[prefixSum[j]] = 0;
//             }
//             m[prefixSum[j]]++;
//         }
//         return count;
//     }

// int main(){
//     vector<int> nums = {9,4,0,20,3,10,5};
//     int k = 33;
//     cout<<"The count of subarrays which sums upto k : "<<countSubarray(nums,k)<<endl;
//     return 0;
// }

// Merge Intervals

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// vector<vector<int>> merge(vector<vector<int>>& intervals) {
//     sort(intervals.begin(), intervals.end());
    
//     vector<vector<int>> merged;
    
//     for (auto interval : intervals) {
//         if (merged.empty() || merged.back()[1] < interval[0]) {
//             merged.push_back(interval);
//         }
//         else {
//             merged.back()[1] = max(merged.back()[1], interval[1]);
//         }
//     }
//     return merged;
// }

// int main() {
//     vector<vector<int>> intervals = {{1,3},{2,6},{8,10},{15,18}};
    
//     vector<vector<int>> result = merge(intervals);
    
//     cout << "Merged Intervals: ";
//     for (auto interval : result) {
//         cout << "[" << interval[0] << "," << interval[1] << "] ";
//     }
//     cout << endl;
    
//     return 0;
// }

// Learning Recursion

// #include<iostream>
// using namespace std;

// void printNums(int n){
//     if(n == 1){
//         cout<<"1"<<endl;
//         return;
//     }
//     cout<<n<<" ";
//     printNums(n-1);
// }

// int main(){
//     int n;
//     cout<<"Enter the value : ";
//     cin >> n;
//     printNums(n);
//     return 0;
// }

// Calculate Factorial by recusrsion

// #include<iostream>
// using namespace std;

// int calcFactorial(int n){
//     if(n == 0){
//         return 1;
//     }

//     return n*calcFactorial(n-1);
// }

// int main(){
//     int n;
//     cout<<"Enter the value : ";
//     cin >> n;
//     cout<<"Factorial of the given value is : "<<calcFactorial(n)<<endl;
//     return 0;
// }

// Calculate Sum by recusrsion

// #include<iostream>
// using namespace std;

// int sum(int n){
//     if(n == 1){
//         return 1;
//     }

//     return n + sum(n-1);
// }

// int main(){
//     int n;
//     cout<<"Enter the value : ";
//     cin >> n;
//     cout<<"Sum of the given value upto 1 is : "<<sum(n)<<endl;
//     return 0;
// }

// Calculate Fibonacci by recusrsion

// #include<iostream>
// using namespace std;

// int calcFibonacci(int n){
//     if(n == 0){
//         return 0;
//     }
//     if(n == 1){
//         return 1;
//     }

//     return calcFibonacci(n-1) + calcFibonacci(n-2);
// }

// int main(){
//     int n;
//     cout<<"Enter the value : ";
//     cin >> n;
//     cout<<"Fibonacci of the nth term is : "<<calcFibonacci(n)<<endl;
//     return 0;
// }

// Check if Array is Sroted

// #include<iostream>
// #include<vector>
// using namespace std;

// bool isSorted(vector<int> &nums, int n){
//     if(n == 0 || n == 1){
//         return true;
//     }
//     return nums[n-1] >= nums[n-2] && isSorted(nums, n-1);
// }

// int main(){
//     vector<int> nums = {1,7,3,4,5};
//     int n = nums.size();
//     if(isSorted(nums,n)){
//         cout<<"The Array is Sorted."<<endl;
//     }
//     else{
//         cout<<"The Array is not Sorted."<<endl;
//     }
//     return 0;
// }

// Recursive Binary Search

// #include<iostream>
// #include<vector>
// using namespace std;

// bool binarySearch(vector<int> &nums, int target,int st, int end){
//     if(st<= end){
//     int mid = st + (end-st)/2;
//     if(nums[mid] == target){
//         return true;
//     }
//     if(nums[mid] > target){
//         binarySearch(nums, target, st, mid-1);
//     }
//     else{
//         binarySearch(nums, target, mid+1, end);
//     }
// }
//     return false;
// }
// int main(){
//     vector<int> nums = {-1,0,3,9,5,12,9};
//     int n = nums.size();
//     int target = 9;
//     int st = 0, end = n-1;
//     cout<<binarySearch(nums, target, st, end)<<endl;
//     return 0;
// }

// Print all subsets with recursion

// #include<iostream>
// #include<vector>
// using namespace std;

// void printSubsets(vector<int> &nums, vector<int> &ans, int i){
//     if(i == nums.size()){
//         for(int val : ans){
//             cout<< val<<" ";
//         }
//         cout<<endl;
//         return;
//     }
//     ans.push_back(nums[i]);
//     printSubsets(nums, ans, i+1);
//     ans.pop_back();
//     printSubsets(nums, ans, i+1);
// }

// int main(){
//     vector<int> nums = {1,2,3};
//     vector<int> ans;
//     printSubsets(nums,ans,0);
//     return 0;
// }

//Print and store all subsets with recursion

// #include<iostream>
// #include<vector>
// using namespace std;

// void getAllSubsets(vector<int>& nums, vector<int>& ans, int i, vector<vector<int>>& allSubsets){
//         if(i == nums.size()){
//             allSubsets.push_back({ans});
//             return;
//         }
//         ans.push_back(nums[i]);
//         getAllSubsets(nums, ans, i+1, allSubsets);
//         ans.pop_back();
//         getAllSubsets(nums, ans, i+1, allSubsets);
//     }
    
//     vector<vector<int>> subsets(vector<int>& nums) {
//         vector<vector<int>> allSubsets;
//         vector<int> ans;

//         getAllSubsets(nums, ans, 0, allSubsets);
//         return allSubsets;
//     }

//     int main(){
//     vector<int> nums = {1,2,3};
//     vector<vector<int>> allSubsets = subsets(nums);
//      cout << "All subsets:" << endl;
//     for(auto subset : allSubsets){
//         cout << "{ ";
//         for(int val : subset){
//             cout << val << " ";
//         }
//         cout << "}" << endl;
//     }
//     return 0;
// }

//Print and store all subsets without duplicate with recursion

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// void getAllSubsets(vector<int>& nums, vector<int>& ans, int i, vector<vector<int>>& allSubsets){
//         if(i == nums.size()){
//             allSubsets.push_back(ans);
//             return;
//         }
//         ans.push_back(nums[i]);
//         getAllSubsets(nums, ans, i+1, allSubsets);
//         ans.pop_back();
//         int idx = i+1;
//         while(idx < nums.size() && nums[idx] == nums[idx-1]){
//             idx++;
//         }
//         getAllSubsets(nums, ans, idx, allSubsets);
//     }

//     vector<vector<int>> subsetsWithDup(vector<int>& nums) {
//         sort(nums.begin(), nums.end());
//         vector<vector<int>> allSubsets;
//         vector<int> ans;

//         getAllSubsets(nums, ans, 0, allSubsets);
//         return allSubsets;
//     }

//     int main(){
//     vector<int> nums = {1,2,2};
//     vector<vector<int>> allSubsets = subsetsWithDup(nums);
    //  cout << "All subsets:" << endl;
    // for(auto subset : allSubsets){
    //     cout << "{ ";
    //     for(int val : subset){
    //         cout << val << " ";
    //     }
    //     cout << "}" << endl;
    // }
//     return 0;
// }

// Permutations by recursion

// #include<iostream>
// #include<vector>
// using namespace std;

// void getPerms(vector<int>& nums, int idx, vector<vector<int>>& ans){
//         int n = nums.size();
//         if(idx == n){
//             ans.push_back(nums);
//             return;
//         }
//         for(int i=idx; i<n; i++){
//             swap(nums[idx],nums[i]);
//             getPerms(nums, idx+1, ans);
//             swap(nums[idx],nums[i]);
//         }
//     }

//     vector<vector<int>> permute(vector<int>& nums) {
//         vector<vector<int>> ans;
//         getPerms(nums, 0, ans);
//         return ans;
//     }

// int main(){
//     vector<int> nums = {1,2,3};
//     vector<vector<int>> ans = permute(nums);
//     cout << "All permutations :" << endl;
//     for(auto permutations : ans){
//         cout << "{ ";
//         for(int val : permutations){
//             cout << val << " ";
//         }
//         cout << "}" << endl;
//     }
//     return 0;
// }    

// #include<iostream>
// #include<vector>
// using namespace std;

// bool isSafe(vector<string> &board, int row, int col, int n) {
//         // Check column
//         for(int i=0; i<row; i++)
//             if(board[i][col] == 'Q') return false;

//         // Upper left diagonal
//         for(int i=row, j=col; i>=0 && j>=0; i--, j--)
//             if(board[i][j] == 'Q') return false;

//         // Upper right diagonal
//         for(int i=row, j=col; i>=0 && j<n; i--, j++)
//             if(board[i][j] == 'Q') return false;

//         return true;
//     }

//     void nQueens(vector<string> &board, int row, int n, vector<vector<string>> &ans) {
//         if(row == n) {
//             ans.push_back(board);
//             return;
//         }
//         for(int j=0; j<n; j++) {
//             if(isSafe(board, row, j, n)) {
//                 board[row][j] = 'Q';
//                 nQueens(board, row+1, n, ans);
//                 board[row][j] = '.';
//             }
//         }
//     }
    
//     vector<vector<string>> solveNQueens(int n) {
//         vector<string> board(n, string(n, '.')); // Initialize board
//         vector<vector<string>> ans;
//         nQueens(board, 0, n, ans);
//         return ans;
//     }

// int main(){
//     int n=4;
//     vector<vector<string>> ans = solveNQueens(n);
//     for(auto board : ans){
//         for(string row : board){
//             cout << row << " ";
//         }
//         cout<<"\n\n";
//     }
//     return 0;
// }      

// Soduko Solver

// #include<iostream>
// #include<vector>
// using namespace std;

// bool isAllowed(vector<vector<char>>& board,int row, int col, char dig){
//         for(int i=0; i<9; i++){
//             if(board[row][i] == dig){
//                 return false;
//             }
//         }
//         for(int i=0; i<9; i++){
//             if(board[i][col] == dig){
//                 return false;
//             }
//         }
//         int stRow = (row/3)*3,  stCol = (col/3)*3;
//         for(int i=stRow; i<=stRow+2; i++){
//             for(int j=stCol; j<=stCol+2; j++){
//                 if(board[i][j] == dig){
//                     return false;
//                 }
//             }
//         }
//         return true;
//     }
    
//     bool sudokuSolver(vector<vector<char>>& board,int row, int col){
//         if(row == 9){
//             return true;
//         }
//         int nextRow = row, nextCol = col+1;
//         if(col == 8){
//             nextRow = row+1;
//             nextCol = 0;
//         }
//         if(board[row][col] != '.'){
//             return sudokuSolver(board, nextRow, nextCol);
//         }
//         for(char dig = '1'; dig <= '9'; dig++){
//             if(isAllowed(board, row, col, dig)){
//                 board[row][col] = dig;
//                 if(sudokuSolver(board, nextRow, nextCol)){
//                     return true;
//                 }
//                 board[row][col] = '.';
//             }
//         }
//         return false;
//     }

// void solveSudoku(vector<vector<char>>& board) {
//         sudokuSolver(board, 0,0);
//     }    

// int main(){
//     vector<vector<char>> board = {
//     {'5','3','.','.','7','.','.','.','.'},
//     {'6','.','.','1','9','5','.','.','.'},
//     {'.','9','8','.','.','.','.','6','.'},
//     {'8','.','.','.','6','.','.','.','3'},
//     {'4','.','.','8','.','3','.','.','1'},
//     {'7','.','.','.','2','.','.','.','6'},
//     {'.','6','.','.','.','.','2','8','.'},
//     {'.','.','.','4','1','9','.','.','5'},
//     {'.','.','.','.','8','.','.','7','9'}
// };
// solveSudoku(board);
// for(auto val : board){
//     cout<<"{";
//     for(char ans : val){
//         cout<< ans<<",";
//     }
//     cout<<"}\n";
// }
//     return 0;
// }

// Rat in a Maze Problem

// #include<iostream>
// #include<vector>
// using namespace std;

// void helper(vector<vector<int>>& maze, int r, int c, string path, vector<string>& ans){
//     int n = maze.size();
//     if(r < 0 || c < 0 || r >= n || c >= n || maze[r][c] == 0 || maze[r][c] == -1){
//         return;
//     }

//     if(r == n-1 && c == n-1){
//         ans.push_back(path);
//         return;
//     }

//     maze[r][c] = -1;

//     helper(maze, r+1, c, path+"D", ans);
//     helper(maze, r-1, c, path+"U", ans);
//     helper(maze, r, c-1, path+"L", ans);
//     helper(maze, r, c+1, path+"R", ans);

//     maze[r][c] = 1;
// }

// vector<string> findPath(vector<vector<int>>& maze){
//     int n = maze.size();
//     vector<string> ans;
//     string path = "";
//      if(maze[0][0] == 0 || maze[n-1][n-1] == 0){
//         return ans;
//      }
//     helper(maze, 0, 0, path, ans);
//     return ans;
// }

// int main(){
//     vector<vector<int>> maze = {{1,0,0,0},{1,1,0,1},{1,1,0,0},{0,1,1,1}};
//     vector<string> ans = findPath(maze);
//     for(auto val : ans){
//         cout<<"{"<<val<<"}"<<endl;
//     }
//     return 0;
// }

// Combination Sum

// #include<iostream>
// #include<vector>
// #include<set>
// using namespace std;

// set<vector<int>> s;
//     void getAllComb(vector<int>& candidates, int idx, vector<int>& combin, vector<vector<int>>& ans,int target){
//         int n = candidates.size();
//         if(idx == n || target<0){
//             return;
//         }
//         if(target == 0){
//             if(s.find(combin) == s.end()){
//                 ans.push_back({combin});
//                 s.insert(combin);
//             }
//             return;
//         }
//         combin.push_back(candidates[idx]);
//         getAllComb(candidates, idx+1, combin, ans, target-candidates[idx]);
//         getAllComb(candidates, idx, combin, ans, target-candidates[idx]);
//         combin.pop_back();
//         getAllComb(candidates, idx+1, combin, ans, target);
//     }

//     vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
//         vector<int> combin;
//         vector<vector<int>> ans;
//         getAllComb(candidates,0, combin, ans, target);
//         return ans;
//     }

// int main(){
//     vector<int> candidates = {2,3,5};
//     int target = 8;
//     vector<vector<int>> ans = combinationSum(candidates, target);
//     for(auto val : ans){
//         cout<<"{";
//         for(int comb : val){
//             cout<<comb<<" ";
//         }
//         cout<<"}"<<endl;
//     }
//     return 0;
// }    

// Palindrome Partiotioning

// #include<iostream>
// #include<string>
// #include<vector>
// #include<algorithm>
// using namespace std;

// bool isPalindrome(string s){
//     string s2 = s;
//     reverse(s2.begin(), s2.end());
//     return s == s2;
// }

// void getAllParts(string s, vector<string>& partitions, vector<vector<string>>& ans){
//     if(s.size() == 0){
//         ans.push_back({partitions});
//         return;
//     }

//     for(int i=0; i<s.size(); i++){
//         string part = s.substr(0, i+1);
//         if(isPalindrome(part)){
//             partitions.push_back(part);
//             getAllParts(s.substr(i+1), partitions, ans);
//             partitions.pop_back();
//         }
//     }
// }

// vector<vector<string>> partition (string s){
//     vector<vector<string>> ans;
//     vector<string> partitions;
//     getAllParts(s, partitions, ans);
//     return ans;
// }

// int main(){
//     string s = "aab";
//     vector<vector<string>> ans = partition(s);
//     for(auto val : ans){
//         cout<<"{";
//         for(auto str : val){
//             cout<<str<<" ";
//         }
//         cout<<"}"<<endl;
//     }
//     return 0;
// }

// Merge Sort

// #include<iostream>
// #include<vector>
// using namespace std;

// void merge(vector<int>& nums, int st, int mid, int end){
//     vector<int> temp;
//     int i = st, j = mid+1;
//     while(i <= mid && j <= end){
//         if(nums[i] <= nums[j]){
//             temp.push_back(nums[i]);
//             i++;
//         }
//         else{
//             temp.push_back(nums[j]);
//             j++;
//         }
//     }
//     while(i <= mid){
//         temp.push_back(nums[i]);
//         i++;
//     }
//     while(j <= end){
//         temp.push_back(nums[j]);
//         j++;
//     }
//     for(int idx=0; idx<temp.size(); idx++){
//         nums[idx+st] = temp[idx];
//     }
// }

// void mergeSort(vector<int>& nums, int st, int end){
//     if(st < end){
//         int mid = st + (end-st)/2;
//         mergeSort(nums, st, mid);
//         mergeSort(nums, mid+1, end);
//         merge(nums, st, mid, end);
//     }
// }

// int main(){
//     vector<int> nums = {12,31,35,8,32,17};
//     mergeSort(nums, 0, nums.size()-1);
//     cout<<"{";
//     for(auto val : nums){
//         cout<<val<<" ";
//     }
//     cout<<"}"<<endl;
//     return 0;
// }

// Quick Sort

// #include<iostream>
// #include<vector>
// using namespace std;

// int partition(vector<int>& nums, int st, int end){
//     int pivot = nums[end], idx = st-1;
//     for(int j=st; j<end; j++){
//         if(nums[j] <= pivot){
//             idx++;
//             swap(nums[j], nums[idx]);
//         }
//     }
//     idx++;
//     swap(nums[idx], nums[end]);
//     return idx;
// }

// void quickSort(vector<int>& nums, int st, int end){
//     if(st < end){
//         int pivIdx = partition(nums, st, end);
//         quickSort(nums, st, pivIdx-1);
//         quickSort(nums, pivIdx+1, end);
//     }

// }

// int main(){
//     vector<int> nums = {5,2,6,4,1,3};
//     quickSort(nums, 0, nums.size()-1);
//     cout<<"{";
//     for(int val : nums){
//         cout<<val<<" ";
//     }
//     cout<<"}"<<endl;
//     return 0;
// }

// Count Inversion Problem

// #include<iostream>
// #include<vector>
// using namespace std;

// int merge(vector<int>& nums, int st, int mid, int end){
//     vector<int> temp;
//     int i = st, j = mid+1;
//     int invCount = 0;
//     while(i <= mid && j <= end){
//         if(nums[i] <= nums[j]){
//             temp.push_back(nums[i]);
//             i++;
//         }
//         else{
//             temp.push_back(nums[j]);
//             j++;
//             invCount += (mid-i+1);
//         }
//     }
//     while(i <= mid){
//         temp.push_back(nums[i]);
//             i++;
//     }
//     while(j <= end){
//         temp.push_back(nums[j]);
//             j++;
//     }
//     for(int idx=0; idx<temp.size(); idx++){
//         nums[idx+st] = temp[idx];
//     }
//     return invCount;
// }

// int mergeSort(vector<int>& nums, int st, int end){
//     if(st < end){
//         int mid = st+ (end-st)/2;
//         int leftInvCount = mergeSort(nums, st, mid);
//         int rightInvCount = mergeSort(nums, mid+1, end);
//         int invCount = merge(nums, st, mid, end);
//         return leftInvCount + rightInvCount + invCount; 
//     }
//     return 0;
// }

// int main(){
//     vector<int> nums = {6,3,5,2,7};
//     int ans = mergeSort(nums, 0, nums.size()-1);
//     cout<<"Number of Inversions are : "<<ans<<endl;
//     return 0;
// }

// Knight Tours Problem

// #include<iostream>
// #include<vector>
// using namespace std;

// bool isValid(vector<vector<int>>& grid, int r, int c, int n, int expVal){
//         if(r<0 || c<0 || r >= n || c >= n || grid[r][c] != expVal){
//             return false;
//         }
//         if(expVal == n*n-1){
//             return true;
//         }
//         int ans1 = isValid(grid, r-2, c+1, n, expVal+1);
//         int ans2 = isValid(grid, r-1, c+2, n, expVal+1);
//         int ans3 = isValid(grid, r+1, c+2, n, expVal+1);
//         int ans4 = isValid(grid, r+2, c+1, n, expVal+1);
//         int ans5 = isValid(grid, r+2, c-1, n, expVal+1);
//         int ans6 = isValid(grid, r+1, c-2, n, expVal+1);
//         int ans7 = isValid(grid, r-1, c-2, n, expVal+1);
//         int ans8 = isValid(grid, r-2, c-1, n, expVal+1);
//         return ans1 || ans2 || ans3 || ans4 || ans5 || ans6 || ans7 || ans8; 
//     }

// bool checkValidGrid(vector<vector<int>>& grid) {
//     return isValid(grid, 0, 0, grid.size(), 0);
// }

// int main(){
//     vector<vector<int>> grid = {
//         {0,11,16,5,20},
//         {17,4,19,10,15},
//         {12,1,8,21,6},
//         {3,18,23,14,9},
//         {24,13,2,7,22}
//     };

//     if(checkValidGrid(grid)) {
//         cout << "True" << endl;
//     } else {
//         cout << "False" << endl;
//     }
//     return 0;
// }

// Linked List

// #include<iostream>
// using namespace std;

// class Node{
// public:
//     int data;
//     Node* next;

//     Node(int val){
//         data = val;
//         next  = NULL;
//     }
// };

// class List{
//     Node* head;
//     Node* tail;

//     public:
//     List(){
//         head = tail = NULL;
//     }

//     void push_front (int val){
//         Node* newNode = new Node(val); // Dynamic
//         // Node newNode(val); // Static
//         if(head == NULL){
//             head = tail = newNode;
//             return;
//         }
//         else{
//             newNode ->next = head;
//             head = newNode;
//         }
//     }

//     void push_back(int val){
//         Node* newNode = new Node(val);

//         if(head == NULL){
//             head = tail = newNode;
//             return;
//         }
//         else{
//             tail -> next = newNode;
//             tail = newNode;
//         }
//     }

//     void pop_front(){
//         if(head == NULL){
//             return;
//         }
//         else{
//             Node* temp = head;
//             head = head -> next;
//             temp -> next = NULL;
//             delete temp;
//         }
//     }

//     void pop_back(){
//         if(head == NULL){
//             return;
//         }
//         else{
//             Node* temp = head;
//             while(temp -> next != tail){
//                 temp = temp -> next; 
//             }
//             temp -> next = NULL;
//             delete tail;
//             tail = temp;
//         }
//     }

//     void insert(int val, int pos){
//         if(pos<0){
//             return;
//         }
//         if(pos == 0){
//             push_front(val);
//         }
//         Node* newNode = new Node(val);
//         Node* temp = head;
//         for(int i=0; i<pos-1; i++){
//             if(temp == NULL){
//                 return;
//             }
//             temp = temp -> next;
//         }
//         newNode -> next = temp -> next;
//         temp -> next = newNode;
//     }

//     int search(int key){
//         Node* temp = head;
//         int idx = 0;
//         while(temp != NULL){
//             if(temp -> data == key){
//                 return idx;
//             }
//             temp = temp->next;
//             idx++;
//         }
//         return -1;
//     }

//     void printll(){
//         Node* temp = head;
//         while(temp != NULL){
//             cout<< temp -> data <<" ";
//             temp = temp -> next;
//         }
//     }
// };

// int main(){
//     List ll;
//     ll.push_front(1);
//     ll.push_front(2);
//     ll.push_front(3);
//     ll.push_back(4);
//     ll.pop_front();
//     ll.pop_back();
//     ll.printll();
//     cout<<endl;
//     List l2;
//     l2.push_front(1);
//     l2.push_front(2);
//     l2.push_front(3);
//     l2.insert(5,1);
//     l2.printll();
//     cout<<endl;
//     cout<<l2.search(1)<<endl;
//     return 0;
// }

// Reverse Linked List

// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         ListNode* prev = NULL;
//         ListNode* curr = head;
//         ListNode* next = NULL;
//         while(curr != NULL){
//             next = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = next;
//         } 
//         return prev;
//     }
// };

// Middle of the Linked List

// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
//         ListNode* slow = head; // slow and fast pointer approach
//         ListNode* fast = head;
//         while(fast != NULL && fast->next != NULL){
//             slow = slow->next;
//             fast = fast->next->next;
//         }
//         return slow;
//     }
// };

// Linked List Cycle

// class Solution {
// public:
//     bool hasCycle(ListNode *head) {
//         ListNode* slow = head;
//         ListNode* fast = head;
//         while(fast != NULL && fast -> next != NULL){
//             slow = slow -> next;
//             fast = fast -> next -> next;
//             if(slow == fast){
//                 return true;
//             }
//         }
//         return false;
//     }
// };

// Linked List Cycle - II

// class Solution {
// public:
//     ListNode *detectCycle(ListNode *head) {
//         ListNode* slow = head;
//         ListNode* fast = head;
//         bool isCycle = false;
//         while(fast != NULL && fast->next != NULL){
//             slow = slow->next;
//             fast = fast->next->next;
//             if(slow == fast){
//                 isCycle = true;
//                 break;
//             }
//         }
//         if(!isCycle){
//             return NULL;
//         }
//         slow = head;
//         while(fast != slow){
//             slow = slow->next;
//             fast = fast->next;
//         }
//         return slow;
//     }
// };

// To remove the cycle

// class Solution {
// public:
//     ListNode *detectCycle(ListNode *head) {
//         ListNode* slow = head;
//         ListNode* fast = head;
//         bool isCycle = false;
//         while(fast != NULL && fast->next != NULL){
//             slow = slow->next;
//             fast = fast->next->next;
//             if(slow == fast){
//                 isCycle = true;
//                 break;
//             }
//         }
//         if(!isCycle){
//             return NULL;
//         }
//         slow = head;
//         ListNode* prev = NULL;
//         while(fast != slow){
//             slow = slow->next;
//             prev = fast;
//             fast = fast->next;
//         }
//         prev -> next = NULL; // Remove Cycle
//         return slow;
//     }
// };

// Merge Two Sorted Lists

// class Solution {
// public:
//     ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) {
//         if(head1 == NULL){
//             return head2;
//         }
//         if(head2 == NULL){
//             return head1;
//         }
//         if(head1->val <= head2->val){
//             head1->next = mergeTwoLists(head1->next, head2);
//             return head1;
//         }
//         else{
//             head2->next = mergeTwoLists(head1,head2->next);
//             return head2;
//         }
//     }
// };

// Copy List with Random Pointer

// class Solution {
// public:
//     Node* copyRandomList(Node* head) {
//         if(head == NULL){
//             return NULL;
//         }
//         unordered_map<Node*,Node*>m;
//         Node* newHead = new Node(head->val);
//         Node* oldTemp = head->next;
//         Node* newTemp = newHead;
//         m[head] = newHead;
//         while(oldTemp != NULL){
//             Node* copyNode = new Node(oldTemp->val);
//             m[oldTemp] = copyNode;
//             newTemp->next = copyNode;
//             oldTemp = oldTemp->next;
//             newTemp = newTemp->next;
//         }
//         oldTemp = head;
//         newTemp = newHead;
//         while(oldTemp != NULL){
//             newTemp->random = m[oldTemp->random];
//             oldTemp = oldTemp->next;
//             newTemp = newTemp->next;
//         }
//         return newHead;
//     }
// };

// Doubly Linked List

// #include<iostream>
// using namespace std;

// class Node{
// public:
//     int data;
//     Node* next;
//     Node* prev;

//     Node(int val){
//         data = val;
//         next = prev = NULL;
//     }
// };

// class DoublyList{
//     Node* head;
//     Node* tail;
  
// public:
//     DoublyList(){
//         head = tail = NULL;
//     }

//     void push_front(int val){
//         Node* newNode = new Node(val);
//         if(head == NULL){
//             head = tail = newNode;
//         }
//         else{
//             newNode->next = head;
//             head->prev = newNode;
//             head = newNode;
//         }
//     }

//     void push_back(int val){
//         Node* newNode = new Node(val);
//         if(head == NULL){
//             head = tail = newNode;
//         }
//         else{
//             newNode->prev = tail;
//             tail->next = newNode;
//             tail = newNode;
//         }
//     }

//     void pop_front(){
//         if(head == NULL){
//             return;
//         }
//         Node* temp = head;
//         head = head->next;
//         if(head != NULL){
//             head->prev = NULL;
//         }
//         temp->next = NULL;
//         delete temp;
//     }

//     void pop_back(){
//         if(head == NULL){
//             return;
//         }
//         Node* temp = tail;
//         tail = tail->prev;
//         if(tail != NULL){
//             tail->next = NULL;
//         }
//         temp->prev = NULL;
//         delete temp;
//     }

//     void print(){
//         Node* temp = head;
//         while(temp != NULL){
//             cout<<temp->data<<" <=> ";
//             temp = temp->next;
//         }
//         cout<<"NULL\n";
//     }
// };

// int main(){
//     DoublyList dll;
//     dll.push_front(1);
//     dll.push_front(2);
//     dll.push_front(3);
//     dll.push_back(4);
//     dll.push_back(5);
//     dll.pop_back();
//     dll.pop_front();
//     dll.print();
//     return 0;
// }

// Circular Linked List

// #include<iostream>
// using namespace std;

// class Node{
// public:
//     int data;
//     Node* next;

//     Node(int val){
//         data = val;
//         next = NULL;
//     }
// };

// class CircularList{
//     Node* head;
//     Node* tail;
// public:    

//     CircularList(){
//         head = tail = NULL;
//     }

//     void insertAtHead(int val){
//         Node* newNode = new Node(val);
//         if(tail == NULL){
//             head = tail = newNode;
//             tail->next = head;
//         }
//         else{
//             newNode->next = head;
//             head = newNode;
//             tail->next = head;
//         }
//     }

//     void insertAtTail(int val){
//         Node* newNode = new Node(val);
//         if(tail == NULL){
//             head = tail = newNode;
//             tail->next = head;
//         }
//         else{
//             newNode->next = head;
//             tail->next = newNode;
//             tail = newNode;
//         }
//     }

//     void deleteAtHead(){
//         if(tail == NULL){
//             return;
//         }
//         else if(head == tail){
//             delete head;
//             head->next = NULL;
//             tail->next = NULL;
//         }
//         else{
//             Node* temp = head;
//         head = head->next;
//         tail->next = head;
//         temp->next = NULL;
//         delete temp;
//         }
//     }

//     void deleteAtTail(){
//         if(tail == NULL){
//             return;
//         }
//         else if(head == tail){
//             delete head;
//             head->next = NULL;
//             tail->next = NULL;
//         }
//         else{
//             Node* temp = tail;
//             Node* prev = head;
//             while(prev->next != tail){
//                 prev = prev->next;
//             }
//             tail = prev;
//             tail->next = head;
//             temp->next = NULL;
//             delete temp;
//         }
//     }

//     void print(){
//         if(head == NULL){
//             return;
//         }
//         cout<<head->data<<" -> ";
//         Node* temp = head->next;
//         while(temp != head){
//             cout<<temp->data<<" -> ";
//             temp = temp->next;
//         }
//         cout<<temp->data;
//     }
// };

// int main(){
//     CircularList cll;
//     cll.insertAtHead(1);
//     cll.insertAtHead(2);
//     cll.insertAtHead(3);
//     cll.insertAtTail(4);
//     cll.insertAtTail(5);
//     cll.deleteAtHead();
//     cll.deleteAtTail();
//     cll.print();
//     return 0;
// }

// Flatten a Multilevel Doubly Linked List

// class Solution {
// public:
//     Node* flatten(Node* head) {
//         if(head == NULL){
//             return head;
//         }
//         Node* curr = head;
//         while(curr != NULL){
//             if(curr->child != NULL){
//                 Node* next = curr->next;
//                 curr->next = flatten(curr->child);
//                 curr->next->prev = curr;
//                 curr->child = NULL;

//                 while(curr->next != NULL){
//                     curr = curr->next;
//                 }
//                 if(next != NULL){
//                     curr->next = next;
//                     next->prev = curr;
//                 }
//             }
//             curr = curr->next;
//         }
//         return head;
//     }
// };

// Reverse Nodes in K Group

// class Solution {
// public:
//     ListNode* reverseKGroup(ListNode* head, int k) {
//         ListNode* temp = head;
//         int count = 0;
//         while(count<k){
//             if(temp == NULL){
//                 return head;
//             }
//             temp = temp->next;
//             count++;
//         }
//         ListNode* prevNode = reverseKGroup(temp,k);
//         temp = head;  count = 0;
//         while(count<k){
//             ListNode* next = temp->next;
//             temp->next = prevNode;
//             prevNode = temp;
//             temp = next;
//             count++;
//         }
//         return prevNode;
//     }
// };

// Swap Nodes in Pairs

// class Solution {
// public:
//     ListNode* swapPairs(ListNode* head) {
//         if(head == NULL || head->next == NULL){
//             return head;
//         }
//         ListNode* first = head;
//         ListNode* sec = head->next;
//         ListNode* prev = NULL;
//         while(first != NULL && sec != NULL){
//             ListNode* third = sec->next;
//             sec->next = first;
//             first->next = third;
//             if(prev != NULL){
//                 prev->next = sec;
//             }
//             else{
//                 head = sec;
//             }
//             prev = first;
//             first = third;
//             if(third != NULL){
//                 sec = third->next;
//             }
//             else{
//                 sec = NULL;
//             }
//         }
//         return head;
//     }
// };

// Learning Stack Concept

// #include<iostream>
// #include<vector>
// using namespace std;

// class Stack{
//     vector<int> v;
// public:
//     void push(int val){
//         v.push_back(val);
//     }

//     void pop(){
//         v.pop_back();
//     }

//     int top(){
//         return v[v.size()-1];
//     }

//     bool empty(){
//         return v.size() == 0;
//     }
// };

// int main(){
    // Stack s;
    // s.push(10);
    // s.push(20);
    // s.push(30);
    // while(!s.empty()){
    //     cout<<s.top()<<" ";
    //     s.pop();
    // }
    // cout<<endl;
    // return 0;
// }

// Stack Implementation by Vector

// #include<iostream>
// #include<list>
// using namespace std;

// class Stack{
//     list<int> ll;
// public:
//     void push(int val){
//         ll.push_front(val);
//     }

//     void pop(){
//         ll.pop_front();
//     }

//     int top(){
//         return ll.front();
//     }

//     bool empty(){
//         return ll.size() == 0;
//     }
// };

// int main(){
//     Stack s;
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     while(!s.empty()){
//         cout<<s.top()<<" ";
//         s.pop();
//     }
//     cout<<endl;
//     return 0;
//     return 0;
// }

// Stack by stl library

// #include<iostream>
// #include<list>
// #include<stack>
// using namespace std;

// int main(){
//     stack<int> s;
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     while(!s.empty()){
//         cout<<s.top()<<" ";
//         s.pop();
//     }
//     cout<<endl;
//     return 0;
//     return 0;
// }

// Valid Parenthesis

// #include<iostream>
// #include<stack>
// using namespace std;

// bool isValid(string str){
//     stack<char> st;
//     for(int i=0; i<str.size(); i++){
//         if(str[i] == '(' || str[i] == '[' || str[i] == '{'){
//             st.push(str[i]);
//         }
//         else{
//             if(st.size() == 0){
//                 return false;
//             }
//             if((st.top() == '(' && str[i] == ')') ||
//                (st.top() == '[' && str[i] == ']') ||
//                (st.top() == '{' && str[i] == '}')){
//                 st.pop();
//                }
//                else{return false;}
//         }
//     }
//     return st.empty();
// }

// int main(){
//     string str = "{({})[]}";
//     cout<<isValid(str)<<endl;
//     return 0;
// }

// Stock Span

// #include<iostream>
// #include<stack>
// #include<vector>
// using namespace std;

// vector<int> stockSpan(vector<int>& price){
//     vector<int> ans;
//     stack<int> s;
//     for(int i=0; i<price.size(); i++){
//         while(s.size()>0 && price[s.top()] <= price[i]){
//             s.pop();
//         }
//         if(s.size() == 0){
//             ans.push_back(i+1);
//         }
//         else{
//             ans.push_back(i-s.top());
//         }
//         s.push(i);
//     }
//     return ans;
// }

// int main(){
//     vector<int> price = {100,80,60,70,60,75,85};
//     vector<int>ans = stockSpan(price);
//     for(auto val: ans){
//         cout<<val<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

// Next Greater Element

// #include<iostream>
// #include<stack>
// #include<vector>
// using namespace std;

// vector<int> nextGreaterElm(vector<int>& arr){
//     stack<int> s;
//     vector<int> ans(arr.size(), 0);
//     int n = arr.size();
//     for(int i=n-1; i>=0; i--){
//         while(s.size()>0 && s.top() <= arr[i]){
//             s.pop();
//         }
//         if(s.empty()){
//             ans[i] = -1;
//         }
//         else{
//             ans[i] = s.top();
//         }
//         s.push(arr[i]);
//     }
//     return ans;
// }

// int main(){
//     vector<int> arr = {6,8,0,1,3};
//     vector<int> ans = nextGreaterElm(arr);
//     for(int val : ans){
//         cout<<val<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

// Next Greater Element - I

// #include<iostream>
// #include<stack>
// #include<vector>
// #include<unordered_map>
// using namespace std;

// vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
//         vector<int> ans;
//         stack<int> s;
//         unordered_map<int,int> m;
//         for(int i=nums2.size()-1; i>=0; i--){
//             while(s.size() > 0 && s.top() <= nums2[i]){
//                 s.pop();
//             }
//             if(s.empty()){
//                 m[nums2[i]] = -1;
//             }
//             else{
//                 m[nums2[i]] = s.top();
//             }
//             s.push(nums2[i]);
//         }
//         for(int i=0; i<nums1.size(); i++){
//             ans.push_back(m[nums1[i]]);
//         }
//         return ans;
//     }

//     int main(){
//     vector<int> nums2 = {6,8,0,1,3};
//     vector<int> nums1 = {3,8,6,0};
//     vector<int> ans = nextGreaterElement(nums1, nums2);
//     for(int val : ans){
//         cout<<val<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

// Previous Smaller Element

// #include<iostream>
// #include<vector>
// #include<stack>
// using namespace std;

// vector<int> prevSmallerElement(vector<int>& arr){
//     vector<int> ans(arr.size(),0);
//     stack<int> s;
//     for(int i=0; i<arr.size(); i++){
//         while(s.size() > 0 && s.top() >= arr[i]){
//             s.pop();
//         }
//         if(s.empty()){
//             ans[i] = -1;
//         }
//         else{
//             ans[i] = s.top();
//         }
//         s.push(arr[i]);
//     }
//     return ans;
// }

// int main(){
//     vector<int> arr = {3,1,0,8,6};
//     vector<int> ans = prevSmallerElement(arr);
//     for(int val : ans){
//         cout<<val<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

// Min Stack (S.C : O(2*n))

// #include<iostream>
// #include<vector>
// #include<stack>
// using namespace std;

// class MinStack{
// public:
//     stack<pair<int,int>> s;

//     MinStack() {
        
//     }
    
//     void push(int val) {
//         if(s.empty()){
//             s.push({val,val});
//         }
//         else{
//             int minVal = min(val, s.top().second);
//             s.push({val,minVal});
//         }
//     }
    
//     void pop() {
//         s.pop();
//         }
    
//     int top() {
//         return s.top().first;
//     }
    
//     int getMin() {
//         return s.top().second;
//     }
// };

// int main(){
//     MinStack s;
//     s.push(-2);
//     s.push(0);
//     s.push(-3);
//     cout<<s.getMin()<<endl;
//     s.pop();
//     cout<<s.top()<<endl;
//     cout<<s.getMin()<<endl;
//     return 0;
// }

// Min Stack  (S.C : O(n))

// #include<iostream>
// #include<vector>
// #include<stack>
// using namespace std;

// class MinStack{
// public:
//     stack<long long int>s;
//     long long int minValue;

//     MinStack() {
        
//     }
    
//     void push(int val) {
//         if(s.empty()){
//             s.push(val);
//             minValue = val;
//         }
//         else{
//             if(val < minValue){
//                 s.push((long long)2*val-minValue);
//                 minValue = val;
//             }
//             else{
//                 s.push(val);
//             }
//         }
//     }
    
//     void pop() {
//         if(s.top() < minValue){
//             minValue = (2*minValue)-s.top();
//         }
//         s.pop();
//         }
    
//     int top() {
//         if(s.top()<minValue){
//             return minValue;
//         }
//         return s.top();
//     }
    
//     int getMin() {
//         return minValue;
//     }
// };

// int main(){
//     MinStack s;
//     s.push(-2);
//     s.push(0);
//     s.push(-3);
//     cout<<s.getMin()<<endl;
//     s.pop();
//     cout<<s.top()<<endl;
//     cout<<s.getMin()<<endl;
//     return 0;
// }

// Largest Rectangle in Histogram

// #include<iostream>
// #include<vector>
// #include<stack>
// using namespace std;

// int largestRectangleArea(vector<int>& heights) {
//         int n = heights.size();
//         stack<int> s;
//         vector<int> left(n,0);
//         vector<int> right(n,0);

//         for(int i=n-1; i>=0; i--){
//             while(s.size()>0 && heights[s.top()] >= heights[i]){
//                 s.pop();
//             }
//             right[i] = s.empty()? n : s.top();
//             s.push(i);
//         }

//         while(!s.empty()){
//             s.pop();
//         }

//         for(int i=0; i<n; i++){
//             while(s.size()>0 && heights[s.top()] >= heights[i]){
//                 s.pop();
//             }
//             left[i] = s.empty()? -1 : s.top();
//             s.push(i);
//         }

//         int ans = 0;
//         for(int i=0; i<n; i++){
//             int area = heights[i]*(right[i]-left[i]-1);
//             ans = max(ans, area);
//         }
//         return ans;
//     }

// int main(){
//     vector<int> heights = {2,1,5,6,2,3};
//     cout<<largestRectangleArea(heights)<<endl;
//     return 0;
// }

// Next Greater Element - II

// #include<iostream>
// #include<vector>
// #include<stack>
// using namespace std;

// vector<int> nextGreaterElements(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> ans(n,-1);
//         stack<int> s;
//         for(int i=2*n-1; i>=0; i--){
//             while(s.size()>0 && nums[s.top()] <= nums[i%n]){
//                 s.pop();
//             }
//             ans[i%n] = s.empty()? -1 : nums[s.top()];
//             s.push(i%n);
//         }
//         return ans;
//     }

// int main(){
//     vector<int> nums = {1,2,3,4,3};
//     vector<int> ans = nextGreaterElements(nums);
//     for(int val : ans){
//         cout<<val<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

// Trapping Rain Water (S.C. : O(n))

// #include<iostream>
// #include<vector>
// using namespace std;

// int trap(vector<int>& height) {
//         int n = height.size();
//         vector<int> lmax(n,0);
//         vector<int> rmax(n,0);
//         lmax[0] = height[0];
//         rmax[n-1] = height[n-1];
//         for(int i=1; i<n; i++){
//             lmax[i] = max(lmax[i-1], height[i]);
//         }
//         for(int i=n-2; i>=0; i--){
//             rmax[i] = max(rmax[i+1], height[i]);
//         }
//         int ans = 0;
//         for(int i=0; i<n; i++){
//             ans += min(lmax[i], rmax[i]) - height[i];
//         }
//         return ans;
//     }

// int main(){
//     vector<int> height = {4,2,0,3,2,5};
//     cout<<trap(height)<<endl;
//     return 0;
// }    

// Trapping Rain Water (S.C. : O(1))

// #include<iostream>
// #include<vector>
// using namespace std;

// int trap(vector<int>& height) {
//         int n = height.size();
//         vector<int> lmax(n,0);
//         vector<int> rmax(n,0);
//         lmax[0] = height[0];
//         rmax[n-1] = height[n-1];
//         for(int i=1; i<n; i++){
//             lmax[i] = max(lmax[i-1], height[i]);
//         }
//         for(int i=n-2; i>=0; i--){
//             rmax[i] = max(rmax[i+1], height[i]);
//         }
//         int ans = 0;
//         for(int i=0; i<n; i++){
//             ans += min(lmax[i], rmax[i]) - height[i];
//         }
//         return ans;
//     }

// int main(){
//     vector<int> height = {4,2,0,3,2,5};
//     cout<<trap(height)<<endl;
//     return 0;
// }    

// Find the Celebrity

// #include<iostream>
// #include<vector>
// #include<stack>
// using namespace std;

// int getCelebrity(vector<vector<int>>& arr){
//     int n = arr.size();
//     stack<int> s;
//     for(int i=0; i<n; i++){
//         s.push(i);
//     }
//     while(s.size() > 1){
//         int i = s.top(); s.pop();
//         int j = s.top(); s.pop();
//         if(arr[i][j] == 0){
//             s.push(i);
//         }
//         else{
//             s.push(j);
//         }
//     }
//         int celeb = s.top();
//         for(int i=0; i<n; i++){
//             if((i != celeb) && (arr[i][celeb] == 0 || arr[celeb][i] == 1)){
//                 return -1;
//         }
//     }
//     return celeb;
// }

// int main(){
//     vector<vector<int>> arr = {{0,1,0},{0,0,0},{0,1,0}};
//     int celebrity = getCelebrity(arr);
//     cout<<"The Celebrity is : "<<celebrity<<endl;
//     return 0;
// }

// LRU Cache

// #include<iostream>
// #include<unordered_map>
// using namespace std;

// class LRUCache {
// public:

//     class Node{
//         public: 
//         int key, val;
//         Node* prev;
//         Node* next;

//         Node(int k, int v){
//             key = k;
//             val = v;
//             prev = next = NULL;
//         }
//     };

//     Node* head = new Node(-1,-1);
//     Node* tail = new Node(-1,-1);
//     unordered_map<int,Node*> m;
//     int limit;

//     void addNode(Node* newNode){
//         Node* oldNext = head->next;
//         head->next = newNode;
//         oldNext->prev = newNode;
//         newNode->next = oldNext;       
//         newNode->prev = head;
//     }

//     void delNode(Node* oldNode){
//         Node* oldPrev = oldNode->prev;
//         Node* oldNext = oldNode->next;
//         oldPrev->next = oldNext;
//         oldNext->prev = oldPrev;
//     }
//     LRUCache(int capacity) {
//         limit = capacity;
//         head->next = tail;
//         tail->prev = head;
//     }
    
//     int get(int key) {
//         if(m.find(key) == m.end()){
//             return -1;
//         }
//         int ans = m[key]->val;
//         Node* ansNode = m[key];
//         m.erase(key);
//         delNode(ansNode);
//         addNode(ansNode);
//         m[key] = ansNode;
//         return ans;
//     }
    
//     void put(int key, int val) {
//         if(m.find(key) != m.end()){
//             Node* oldNode = m[key];
//             delNode(oldNode);
//             m.erase(key);
//         }

//         if(m.size() == limit){
//             m.erase(tail->prev->key);
//             delNode(tail->prev);

//         }
//         Node* newNode = new Node(key,val);
//         addNode(newNode);
//         m[key] = newNode;
//     }
// };

// int main(){
//     LRUCache cache(2);
//     cache.put(1,10);
//     cache.put(2,20);
//     cout<<"Value at key(1) : "<<cache.get(1)<<endl;
//     cache.put(3,30);
//     cout<<"Value at key(2) : "<<cache.get(2)<<endl;
//     cache.put(4,40);
//     cout<<"Value at key(1) : "<<cache.get(1)<<endl;
//     cout<<"Value at key(3) : "<<cache.get(3)<<endl;
//     cout<<"Value at key(4) : "<<cache.get(4)<<endl;
//     return 0;
// }

// Queue Data Structure

// #include<iostream>
// #include<list>
// using namespace std;

// class Node{
// public:    
//     int data;
//     Node* next;

//     Node(int val){
//         data = val;
//         next = NULL;
//     }
// };

// class Queue{
//     Node* head;
//     Node* tail;

// public:
//     Queue(){
//         head = tail = NULL;

//     }

//     void push(int data){
//         Node* newNode = new Node(data);
//         if(head == NULL){
//             head = tail = newNode;
//         }
//         else{
//             tail->next = newNode;
//             tail = newNode;
//             tail->next =  NULL;
//         }
//     }

//     void pop(){
//         if(empty()){
//             return;
//         }
//         Node* temp = head;
//         head = head->next;
//         delete temp;
//     }

//     int front(){
//         return head->data;
//     }

//     bool empty(){
//         return head == NULL;
//     }
// };

// Queue Data Structure by STL Library

// int main(){
//     Queue q;
//     q.push(1);
//     q.push(2);
//     q.push(3);

//     while(!q.empty()){
//         cout<<q.front()<<" ";
//         q.pop();
//     }
//     cout<<endl;
//     return 0;
// }

// #include<iostream>
// #include<queue>
// using namespace std;

// int main(){
//     queue<int> q;
//     q.push(1);
//     q.push(2);
//     q.push(3);

//     while(!q.empty()){
//         cout<<q.front()<<" ";
//         q.pop();
//     }
//     cout<<endl;
//     return 0;
// }

// Deque Data Structure by STL Library

// #include<iostream>
// #include<queue>
// using namespace std;

// int main(){
//     deque<int> dq;
//     dq.push_back(1);
//     dq.push_back(2);
//     dq.push_back(3);
//     dq.push_front(4);
//     cout<<dq.front()<<" "<<dq.back()<<endl;
//     dq.pop_back();
//     cout<<dq.front()<<" "<<dq.back()<<endl;
//     return 0;
// }

// Find the Index of the First Occurrence in a String

// #include <iostream>
// #include <string>
// using namespace std;

// int strStr(string haystack, string needle){
//     if (needle.empty()) return 0;
        
//         int n = haystack.size(), m = needle.size();
//         for (int i = 0; i + m <= n; i++) {
//             int j = 0;
//             for (; j < m; j++) {
//                 if (haystack[i + j] != needle[j])
//                     break;
//             }
//             if (j == m) return i;
//         }
//         return -1;
// }

// int main() {
//     cout << strStr("hello", "ll") <<endl;
//     cout << strStr("aaaaa", "bba") <<endl;
//     cout << strStr("", "") <<endl;
//     return 0;
// }

// Circular Queue 

// #include<iostream>
// using namespace std;

// class CircularQueue{
//     int* arr;
//     int cap, currSize;
//     int f ,r;
// public:
//     CircularQueue(int size){
//         cap = size;
//         arr = new int[cap];
//         f = 0; 
//         r = -1;
//         currSize = 0;
//     }

//     void push(int data){
//         if(currSize == cap){
//             cout<<"CQ is FULL\n";
//             return;
//         }
//         r = (r+1)%cap;
//         arr[r] = data;
//         currSize++;
//     }

//     void pop(){
//         if(empty()){
//             cout<<"CQ is EMPTY\n";
//             return;
//         }
//         f = (f+1)%cap;
//         currSize--;
//     }

//     int front(){
//         if(empty()){
//             return -1;
//         }
//         return arr[f];
//     }

//     bool empty(){
//         return currSize == 0;
//     }

//     void printArr(){
//         for(int i=0; i<cap; i++){
//             cout<<arr[i]<<" ";
//         }
//         cout<<endl;
//     }
// };

// int main(){
//     CircularQueue cq(3);
//     cq.push(1);
//     cq.push(2);
//     cq.push(3);
//     cq.pop();
//     cq.push(4);
//     // cq.printArr();
//     while(!cq.empty()){
//         cout<<cq.front()<<" ";
//         cq.pop();
//     }
//     cout<<endl;
//     return 0;
// }

// Implement Stack using Queue

// #include<iostream>
// #include<queue>
// using namespace std;


// class MyStack {
// public:
//     queue<int> q1;
//     queue<int> q2;
//     MyStack() {
        
//     }
    
//     void push(int x) {
//         while(!q1.empty()){
//             q2.push(q1.front());
//             q1.pop();
//         }    
//         q1.push(x);
//         while(!q2.empty()){
//             q1.push(q2.front());
//             q2.pop();
//         }
//     }
    
//     int pop() {
//         int ans = q1.front();
//         q1.pop();
//         return ans;
//     }
    
//     int top() {
//         return q1.front();
//     }
    
//     bool empty() {
//         return q1.empty();
//     }
// };

// int main(){
//     MyStack s;
//     s.push(1);
//     s.push(2);
//     s.push(3);
//     while(!s.empty()){
//         cout<<s.top()<<" ";
//         s.pop();
//     }
//     cout<<endl;
//     return 0;
// }


// Implement Queue using Stack

// #include<iostream>
// #include<stack>
// using namespace std;

// class MyQueue {
// public:
//     stack<int> s1;
//     stack<int> s2;
//     MyQueue() {
        
//     }
    
//     void push(int x) {
//         while(!s1.empty()){
//             s2.push(s1.top());
//             s1.pop();
//         }
//         s1.push(x);
//         while(!s2.empty()){
//             s1.push(s2.top());
//             s2.pop();
//         }
//     }
    
//     int pop() {
//         int ans = s1.top();
//         s1.pop();
//         return ans;
//     }
    
//     int peek() {
//         return s1.top();
//     }
    
//     bool empty() {
//         return s1.empty();
//     }
// };

// int main(){
//     MyQueue q;
//     q.push(1);
//     q.push(2);
//     q.push(3);

//     while(!q.empty()){
//         cout<<q.peek()<<" ";
//         q.pop();
//     }
//     cout<<endl;
//     return 0;
// }


// First Unique Character in a String

// #include<iostream>
// #include<unordered_map>
// #include<queue>
// using namespace std;

// int firstUniqChar(string s){
//     unordered_map<char,int> m;
//         queue<int> q;
//         for(int i=0; i<s.size(); i++){
//             if(m.find(s[i]) == m.end()){
//                 q.push(i);
//             }
//             m[s[i]]++;
//             while(q.size()>0 && m[s[q.front()]] >1){
//                 q.pop();
//             }
//         }
//         return q.empty()? -1 : q.front();
// }

// int main(){
//     string s = "level";
//     cout<<firstUniqChar(s)<<endl;
//     return 0;
// }


// Sliding Windoe Maximum

// #include<iostream>
// #include<deque>
// #include<vector>
// using namespace std;

// vector<int> maxSlidingWindow(vector<int>& nums, int k){
//     deque<int> dq;
//         vector<int> ans;

//         for(int i=0; i<k; i++){
//             while(dq.size()>0 && nums[dq.back()] <= nums[i]){
//                 dq.pop_back();
//             }
//             dq.push_back(i);
//         }

//         for(int i=k; i<nums.size(); i++){
//             ans.push_back(nums[dq.front()]);

//             while(dq.size()>0 && dq.front() <= i-k){
//                 dq.pop_front();
//             }
//             while(dq.size()>0 && nums[dq.back()] <= nums[i]){
//                 dq.pop_back();
//             }
//             dq.push_back(i);
//         }
//         ans.push_back(nums[dq.front()]);
//         return ans;
// }

// int main(){
//     vector<int> nums = {1,3,-1,-3,5,3,6,7};
//     int k = 3;
//     vector<int> ans = maxSlidingWindow(nums, k);
//     for(int val : ans){
//         cout<<val<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

// Gas Station Problem

// #include<iostream>
// #include<vector>
// using namespace std;

// int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
//         int totalGas = 0, totalCost = 0;
//         int start = 0, currGas = 0;
//         for(int i=0; i<gas.size(); i++){
//             totalGas += gas[i];
//             totalCost += cost[i];
//             currGas += (gas[i] - cost[i]);
//             if(currGas < 0){
//                 start = i+1;
//                 currGas = 0;
//             }
//         }
//         return totalGas < totalCost ? -1 : start;
//     }

// int main(){
//     vector<int> gas = {1,2,3,4,5};
//     vector<int> cost = {3,4,5,1,2};
//     cout<<"The Starting Gas Station should be : "<<canCompleteCircuit(gas, cost)<<endl;
//     return 0;
// }    

// #include<iostream>
// #include<vector>
// #include<queue>
// using namespace std;

// class Node{
// public:
//     int data;
//     Node* left;
//     Node* right;

//     Node(int val){
//         data = val;
//         left = right = NULL;
//     }
// };

// static int idx = -1;
// Node* buildTree(vector<int>& preorder){
//     idx++;

//     if(preorder[idx] == -1) return NULL;
//     Node* root = new Node(preorder[idx]);
//     root->left = buildTree(preorder);
//     root->right = buildTree(preorder);
//     return root;
// }

// void preOrder(Node* root){
//     if(root == NULL){
//         return;
//     }
//     cout<<root->data<<" ";
//     preOrder(root->left);
//     preOrder(root->right);
// }

// void inOrder(Node* root){
//     if(root == NULL){
//         return;
//     }
//     inOrder(root->left);
//     cout<<root->data<<" ";
//     inOrder(root->right);
// }

// void postOrder(Node* root){
//     if(root == NULL){
//         return;
//     }
//     postOrder(root->left);
//     postOrder(root->right);
//     cout<<root->data<<" ";
// }

// void levelOrder(Node* root){
//     queue<Node*> q;
//     q.push(root);
//     q.push(NULL);
//     while(q.size() > 0){
//         Node* curr = q.front();
//         q.pop();
//         if(curr == NULL){
//             if(!q.empty()){
//                 cout<<endl;
//                 q.push(NULL);
//                 continue;
//             }
//             else{
//                 break;
//             }
//         }
//         cout<< curr->data<<" ";
//         if(curr->left != NULL){
//             q.push(curr->left);
//         }
//         if(curr->right != NULL){
//             q.push(curr->right);
//         }
//     }
//     cout<<endl;
// }
// int main(){
//     vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};

//     Node* root = buildTree(preorder);
//     levelOrder(root);
//     return 0;
// }

// Height of Tree

// #include<iostream>
// #include<vector>
// #include<queue>
// using namespace std;

// class Node{
// public:
//     int data;
//     Node* left;
//     Node* right;

//     Node(int val){
//         data = val;
//         left = right = NULL;
//     }
// };

// static int idx = -1;
// Node* buildTree(vector<int>& preorder){
//     idx++;

//     if(preorder[idx] == -1) return NULL;
//     Node* root = new Node(preorder[idx]);
//     root->left = buildTree(preorder);
//     root->right = buildTree(preorder);
//     return root;
// }

// int height(Node* root){
//     if(root == NULL){
//         return 0;
//     }
//     int leftHt = height(root->left);
//     int rightHt = height(root->right);
//     return max(leftHt, rightHt)+1;
// }

// int main(){
//     vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
//     Node* root = buildTree(preorder);
//     cout<<"Height of the Tree : "<<height(root)<<endl;
//     return 0;
// }

// Count of Nodes

// #include<iostream>
// #include<vector>
// #include<queue>
// using namespace std;

// class Node{
// public:
//     int data;
//     Node* left;
//     Node* right;

//     Node(int val){
//         data = val;
//         left = right = NULL;
//     }
// };

// static int idx = -1;
// Node* buildTree(vector<int>& preorder){
//     idx++;

//     if(preorder[idx] == -1) return NULL;
//     Node* root = new Node(preorder[idx]);
//     root->left = buildTree(preorder);
//     root->right = buildTree(preorder);
//     return root;
// }

// int count(Node* root){
//     if(root == NULL){
//         return 0;
//     }

//     int leftCt = count(root->left);
//     int rightCt = count(root->right);
//     return leftCt + rightCt +1;
// }

// int main(){
//     vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
//     Node* root = buildTree(preorder);
//     cout<<"Count of Nodes of the Tree : "<<count(root)<<endl;
//     return 0;
// }

// Sum of Nodes

// #include<iostream>
// #include<vector>
// #include<queue>
// using namespace std;

// class Node{
// public:
//     int data;
//     Node* left;
//     Node* right;

//     Node(int val){
//         data = val;
//         left = right = NULL;
//     }
// };

// static int idx = -1;
// Node* buildTree(vector<int>& preorder){
//     idx++;

//     if(preorder[idx] == -1) return NULL;
//     Node* root = new Node(preorder[idx]);
//     root->left = buildTree(preorder);
//     root->right = buildTree(preorder);
//     return root;
// }

// int sum(Node* root){
//     if(root == NULL){
//         return 0;
//     }
//     int leftSum = sum(root->left);
//     int rightSum = sum(root->right);
//     return leftSum + rightSum + (root->data);
// }

// int main(){
//     vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
//     Node* root = buildTree(preorder);
//     cout<<"Sum of Nodes of the Tree : "<<sum(root)<<endl;
//     return 0;
// }

// Same Tree (Identical Tree)

// #include<iostream>
// #include<vector>
// #include<queue>
// using namespace std;

// class Node{
// public:
//     int data;
//     Node* left;
//     Node* right;

//     Node(int val){
//         data = val;
//         left = right = NULL;
//     }
// };

// static int idx = -1;
// Node* buildTree(vector<int>& preorder){
//     idx++;

//     if(preorder[idx] == -1) return NULL;
//     Node* root = new Node(preorder[idx]);
//     root->left = buildTree(preorder);
//     root->right = buildTree(preorder);
//     return root;
// }

// bool isSameTree(Node* p, Node* q) {
//         if(p == NULL || q == NULL){
//             return p == q;
//         }
//         bool isLeftSame = isSameTree(p->left, q->left);
//         bool isRightSame = isSameTree(p->right, q->right);
//         return isLeftSame && isRightSame && (p->data == q->data);
//     }

// int main(){
//     vector<int> preorder1 = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
//     vector<int> preorder2 = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
//     idx = -1;
//     Node* p = buildTree(preorder1);
//     idx = -1;
//     Node* q = buildTree(preorder2);
//     if(isSameTree(p,q)){
//         cout<<"The Trees are Identcal."<<endl;
//     }
//     else{
//         cout<<"The Trees are not Identical"<<endl;
//     }
//     return 0;
// }

// Subtree of Another Tree

// #include<iostream>
// #include<vector>
// #include<queue>
// using namespace std;

// class Node{
// public:
//     int data;
//     Node* left;
//     Node* right;

//     Node(int val){
//         data = val;
//         left = right = NULL;
//     }
// };

// static int idx = -1;
// Node* buildTree(vector<int>& preorder){
//     idx++;

//     if(preorder[idx] == -1) return NULL;
//     Node* root = new Node(preorder[idx]);
//     root->left = buildTree(preorder);
//     root->right = buildTree(preorder);
//     return root;
// }

// bool isIdentical(Node* root, Node* subRoot){
//         if(root == NULL || subRoot == NULL){
//             return root == subRoot;
//         }
//         return (root->data == subRoot->data) 
//                 && isIdentical(root->left, subRoot->left) 
//                 && isIdentical(root->right, subRoot->right); 
//     }
//     bool isSubtree(Node* root, Node* subRoot) {
//         if(root == NULL || subRoot == NULL){
//             return root == subRoot;
//         }
//         if(root->data == subRoot->data && isIdentical(root,subRoot)){
//             return true;
//         }
//         return (isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot));
//     }

// int main(){
//     vector<int> preorder1 = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
//     vector<int> preorder2 = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
//     idx = -1;
//     Node* root = buildTree(preorder1);
//     idx = -1;
//     Node* subRoot = buildTree(preorder2);
//     if(isSubtree(root,subRoot)){
//         cout<<"True"<<endl;
//     }
//     else{
//         cout<<"False"<<endl;
//     }
//     return 0;
// }

// Diameter of a Binary Tree

// #include<iostream>
// #include<vector>
// #include<queue>
// using namespace std;

// class Node{
// public:
//     int data;
//     Node* left;
//     Node* right;

//     Node(int val){
//         data = val;
//         left = right = NULL;
//     }
// };

// static int idx = -1;
// Node* buildTree(vector<int>& preorder){
//     idx++;

//     if(preorder[idx] == -1) return NULL;
//     Node* root = new Node(preorder[idx]);
//     root->left = buildTree(preorder);
//     root->right = buildTree(preorder);
//     return root;
// }

//     int ans = 0;
//     int height(Node* root){
//         if(root == NULL){
//             return 0;
//         }
//         int leftHt = height(root->left);
//         int rightHt = height(root->right);
//         ans = max(ans, (rightHt+leftHt));
//         return max(leftHt, rightHt) +1;
//     }
//     int diameterOfBinaryTree(Node* root) {
//         height(root);
//         return ans;
//     }

// int main(){
//     vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
//     Node* root = buildTree(preorder);
//     cout<<"The Diameter of the Tree : "<<diameterOfBinaryTree(root)<<endl;
//     return 0;
// }

// Top View of a Tree

// #include<iostream>
// #include<vector>
// #include<queue>
// #include<map>
// using namespace std;

// class Node{
// public:
//     int data;
//     Node* left;
//     Node* right;
//     Node(int val){ 
//         data = val;
//         left = right = NULL;
//     }
// };

// static int idx = -1;
// Node* buildTree(vector<int>& preorder){
//     idx++;

//     if(preorder[idx] == -1) return NULL;
//     Node* root = new Node(preorder[idx]);
//     root->left = buildTree(preorder);
//     root->right = buildTree(preorder);
//     return root;
// }

// void topView(Node* root){
//     queue<pair<Node*, int>> q;
//     map<int, int> m;
//     q.push({root,0});
//     while(q.size() > 0){
//         Node* curr = q.front().first;
//         int currHD = q.front().second;
//         q.pop();

//         if(m.find(currHD) == m.end()){
//             m[currHD] = curr->data;
//         }
//         if(curr->left != NULL){
//             q.push({curr->left, currHD-1});
//         }
//         if(curr->right != NULL){
//             q.push({curr->right, currHD+1});
//         }
//     }

//     for(auto it : m){
//         cout<<it.second<<" ";
//     }
//     cout<<endl;
// }

// int main(){
//     vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
//     Node* root = buildTree(preorder);
//     cout<<"Top View of the Tree : ";
//     topView(root);
//     return 0;
// }

// Kth level of a Binary Tree

// #include<iostream>
// #include<vector>
// #include<queue>
// #include<map>
// using namespace std;

// class Node{
// public:
//     int data;
//     Node* left;
//     Node* right;
//     Node(int val){ 
//         data = val;
//         left = right = NULL;
//     }
// };

// static int idx = -1;
// Node* buildTree(vector<int>& preorder){
//     idx++;

//     if(preorder[idx] == -1) return NULL;
//     Node* root = new Node(preorder[idx]);
//     root->left = buildTree(preorder);
//     root->right = buildTree(preorder);
//     return root;
// }

// void kthLevel(Node* root, int k){
//     if(root == NULL){
//         return; 
//     }
//     if(k == 1){
//         cout<<root->data<<" ";
//         return;
//     }
//     kthLevel(root->left, k-1);
//     kthLevel(root->right, k-1);
// }

// int main(){
//     vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
//     Node* root = buildTree(preorder);
//     kthLevel(root,2);
//     return 0;
// }

// Lowest Common Ancestor of a Binary Tree

// #include<iostream>
// #include<vector>
// #include<queue>
// #include<map>
// using namespace std;

// class Node{
// public:
//     int data;
//     Node* left;
//     Node* right;
//     Node(int val){ 
//         data = val;
//         left = right = NULL;
//     }
// };

// static int idx = -1;
// Node* buildTree(vector<int>& preorder){
//     idx++;

//     if(preorder[idx] == -1) return NULL;
//     Node* root = new Node(preorder[idx]);
//     root->left = buildTree(preorder);
//     root->right = buildTree(preorder);
//     return root;
// }

// Node* lowestCommonAncestor(Node* root, Node* p, Node* q) {
//         if(root == NULL){
//             return NULL;
//         }
//         if(root->data == p->data || root->data == q->data){
//             return root;
//         }
//         Node* leftLCA = lowestCommonAncestor(root->left, p, q);
//         Node* rightLCA = lowestCommonAncestor(root->right, p, q);
//         if(leftLCA && rightLCA){
//             return root;
//         }
//         else if(leftLCA != NULL){
//             return leftLCA;
//         }
//         else{
//             return rightLCA;
//         }
//     }

// int main(){
//     vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
//     Node* root = buildTree(preorder);
//     Node* p = new Node(4);
//     Node* q = new Node(5);
//     Node* ancestor = lowestCommonAncestor(root,p,q);
//     cout<<"Ancestor : "<<ancestor->data<<endl;
//     return 0;
// }

// Sum Tree

// #include<iostream>
// #include<vector>
// #include<queue>
// #include<map>
// using namespace std;

// class Node{
// public:
//     int data;
//     Node* left;
//     Node* right;
//     Node(int val){ 
//         data = val;
//         left = right = NULL;
//     }
// };

// static int idx = -1;
// Node* buildTree(vector<int>& preorder){
//     idx++;

//     if(preorder[idx] == -1) return NULL;
//     Node* root = new Node(preorder[idx]);
//     root->left = buildTree(preorder);
//     root->right = buildTree(preorder);
//     return root;
// }

// void preorder(Node* root){
//     if(root == NULL){
//         return;
//     }
//     cout<<root->data<<" ";
//     preorder(root->left);
//     preorder(root->right);
// }

// int sumTree(Node* root){
//     if(root == NULL){
//         return 0;
//     }
//     int leftSum = sumTree(root->left);
//     int rightSum = sumTree(root->right);
//     root->data += leftSum+rightSum;
//     return root->data;
// }

// int main(){
//     vector<int> preOrder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
//     Node* root = buildTree(preOrder);
//     preorder(root);
//     cout<<endl;
//     sumTree(root);
//     preorder(root);
//     cout<<endl;
//     return 0;
// }

// Maximum Width of a Binary Tree

// #include<iostream>
// #include<vector>
// #include<queue>
// #include<map>
// using namespace std;

// class Node{
// public:
//     int data;
//     Node* left;
//     Node* right;
//     Node(int val){ 
//         data = val;
//         left = right = NULL;
//     }
// };

// static int idx = -1;
// Node* buildTree(vector<int>& preorder){
//     idx++;

//     if(preorder[idx] == -1) return NULL;
//     Node* root = new Node(preorder[idx]);
//     root->left = buildTree(preorder);
//     root->right = buildTree(preorder);
//     return root;
// }

// int widthOfBinaryTree(Node* root) {
//         queue<pair<Node*, unsigned long long>> q;
//         q.push({root, 0});
//         int maxWidth = 0;
//         while (q.size() > 0) {
//             int currLevelSize = q.size();
//             unsigned long long stIdx = q.front().second;
//             unsigned long long endIdx = q.back().second;
//             maxWidth = max(maxWidth, (int)(endIdx - stIdx + 1));

//             for (int i = 0; i < currLevelSize; i++) {
//                 auto curr = q.front();
//                 q.pop();
//                 if (curr.first->left) {
//                     q.push({curr.first->left, curr.second * 2 + 1});
//                 }
//                 if (curr.first->right) {
//                     q.push({curr.first->right, curr.second * 2 + 2});
//                 }
//             }
//         }
//         return maxWidth;
//     }

// int main(){
//     vector<int> preOrder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
//     Node* root = buildTree(preOrder);
//     cout<<"Width of the Binary Tree : "<< widthOfBinaryTree(root)<<endl;
//     return 0;
// }

// Binary Tree Inorder Traversal

// #include<iostream>
// #include<vector>
// #include<queue>
// #include<map>
// using namespace std;

// class Node{
// public:
//     int data;
//     Node* left;
//     Node* right;
//     Node(int val){ 
//         data = val;
//         left = right = NULL;
//     }
// };

// static int idx = -1;
// Node* buildTree(vector<int>& preorder){
//     idx++;

//     if(preorder[idx] == -1) return NULL;
//     Node* root = new Node(preorder[idx]);
//     root->left = buildTree(preorder);
//     root->right = buildTree(preorder);
//     return root;
// }

// vector<int> inorderTraversal(Node* root) {
//         vector<int> ans;
//         Node* curr = root;
//         while(curr != NULL){
//             if(curr->left == NULL){
//                 ans.push_back(curr->data);
//                 curr = curr->right;
//             }
//             else{
//                 Node* IP = curr->left;
//                 while(IP->right != NULL && IP->right != curr){
//                     IP = IP->right;
//                 }
//                 if(IP->right == NULL){
//                     IP->right = curr;
//                     curr = curr->left;
//                 }
//                 else{
//                     IP->right = NULL;
//                     ans.push_back(curr->data);
//                     curr = curr->right;
//                 }
//             }
//         }
//         return ans;
//     }

// int main(){
//     vector<int> preOrder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
//     Node* root = buildTree(preOrder);
//     vector<int> ans = inorderTraversal(root);
//     cout<<"Tree in Inorder Traversal : ";
//     for(int val : ans){
//         cout<< val <<" ";
//     }
//     cout<<endl;
//     return 0;
// }

// Flatten Binary Tree to Linked List

// #include<iostream>
// #include<vector>
// using namespace std;

// class Node{
// public:
//     int data;
//     Node* left;
//     Node* right;
//     Node(int val){ 
//         data = val;
//         left = right = NULL;
//     }
// };

// static int idx = -1;
// Node* buildTree(vector<int>& preorder){
//     idx++;

//     if(preorder[idx] == -1) return NULL;
//     Node* root = new Node(preorder[idx]);
//     root->left = buildTree(preorder);
//     root->right = buildTree(preorder);
//     return root;
// }

// Node* nextRight = NULL;
// void flatten(Node* root) {
//     if(root == NULL){
//         return;
//     }
//     flatten(root->right);
//     flatten(root->left);
//     root->left = NULL;
//     root->right = nextRight;
//     nextRight = root;
// }

// int main(){
//     vector<int> preOrder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
//     Node* root = buildTree(preOrder);
//     flatten(root);
//     cout<<"Flatten Tree (Right-Skewed) : ";
//     Node* curr = root;
//     while(curr != NULL){
//         cout<<curr->data<<" ";
//         curr = curr->right;
//     }
//     cout<<endl;
//     return 0;
// }


// Detect Capital

// #include<iostream>
// #include<string>
// using namespace std;

// bool detectCapitalUse(string word) {
//         int n = word.size();
//         if(n == 1){
//             return true;
//         }

//         bool firstIsUpper = isupper(word[0]);
//         bool secondIsUpper = isupper(word[1]);

//         if(firstIsUpper && secondIsUpper){
//             for(int i=2; i<n; i++){
//                 if(!isupper(word[i])){
//                     return false;
//                 }
//             }
//             return true;    
//         }
//         for(int i=1; i<n; i++){
//             if(!islower(word[i])){
//                 return false;
//             }
//         }
//         return true;
//     }

// int main(){
//     string s1 = "Google";
//     string s2 = "AMAZON";
//     string s3 = "FaceBook";
//     cout<<detectCapitalUse(s1)<<endl;
//     cout<<detectCapitalUse(s2)<<endl;
//     cout<<detectCapitalUse(s3)<<endl;
//     return 0;
// }    

// Binary Search Tree 

// #include<iostream>
// #include<vector>
// using namespace std;

// class Node{
// public:
//     int data;
//     Node* right;
//     Node* left;

//     Node(int val){
//         data = val;
//         right = left = NULL;
//     }
// };

// Node* insert(Node* root, int val){
//     if(root == NULL){
//         return new Node(val);
//     }
//     if(val < root->data){
//         root->left = insert(root->left, val);
//     }
//     else{
//         root->right = insert(root->right, val);
//     }
//     return root;
// }

// Node* buildBST(vector<int> arr){
//     Node* root = NULL;
//     for(int val : arr){
//         root = insert(root, val);
//     }
//     return root;
// }

// void inorder(Node* root){
//     if(root == NULL){
//         return;
//     }
//     inorder(root->left);
//     cout<<root->data<<" ";
//     inorder(root->right);
// }

// int main(){
//     vector<int> arr = {3,2,1,5,4,6};
//     Node* root = buildBST(arr);
//     inorder(root);
//     cout<<endl;
//     return 0;
// }

// Search in Binary Search Tree

#include<iostream>
#include<vector>
using namespace std;

class Node{
public:
    int data;
    Node* right;
    Node* left;

    Node(int val){
        data = val;
        right = left = NULL;
    }
};

Node* insert(Node* root, int val){
    if(root == NULL){
        return new Node(val);
    }
    if(val < root->data){
        root->left = insert(root->left, val);
    }
    else{
        root->right = insert(root->right, val);
    }
    return root;
}

Node* buildBST(vector<int> arr){
    Node* root = NULL;
    for(int val : arr){
        root = insert(root, val);
    }
    return root;
}

bool search(Node* root, int key){
    if(root == NULL){
        return false;
    }
    if(root->data == key){
        return true;
    }
    if(root->data > key){
        return search(root->left, key);
    }
    else{
        return search(root->right, key);
    }
}

int main(){
    vector<int> arr = {3,2,1,5,4,6};
    Node* root = buildBST(arr);
    int key = 5;
    if(search(root,key)){
        cout<<"The Key is present in the Tree."<<endl;
    }
    else{
        cout<<"The Key is not present in the Tree."<<endl;
    }
    return 0;
}