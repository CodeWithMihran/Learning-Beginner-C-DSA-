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

#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int> &nums, int target){
    int n = nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0; i<n; i++){
            int j = i+1, k = n-1;
            if(i>0 && nums[i] == nums[i-1]){ continue; }
            while(j<k){
                int sum = nums[i]+nums[j]+nums[k];
                if(sum < target){
                    j++;
                }
                else if(sum > target){
                    k--;
                }
                else{
                    ans.push_back({nums[i],nums[j],nums[k]});
                    j++; k--;
                    while(j<k && nums[j] == nums[j-1]){
                        j++;
                    }
                }
            }
        }
        return ans;
}

int main(){
    vector<int> nums = {-1,0,1,2,-1,-4};
    int target = -6;
    vector<vector<int>> ans = threeSum(nums, target);
    for(int i=0; i<ans.size(); i++){
        cout<<"{";
        for(int j=0; j<ans[0].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"}"<<endl;
    }
    return 0;
}