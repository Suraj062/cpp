// // 1. Read two integers and print their sum.

// #include <iostream>
// using namespace std;

// int main(){
//     int a,b;
//     cout << "Enter two integers: ";
//     cin >> a;
//     cin>> b;
//     cout << " sum is : "<< a+b ;

//     return 0;
// }

// // 2.Read three numbers and print the largest.

// #include <iostream>
// using namespace std;

// int main() {
//     int a,b,c;
//     cout << "Enter three numbers: ";
//     cin >> a >> b >> c;
//     if (a >= b && a >= c) {
//         cout << " a is the largest number." << endl;
//     } else if ( b >= a && b >=c){
//         cout << " b is the largest number." << endl;
//     } else {
//         cout << " c is the largest number." << endl;
//     }
//     return 0;
// }

// // 3. Check whether a number is even or odd.

// #include <iostream>
// using namespace std;

// int main() {
//     int num;
//     cout << " Enter a number: ";
//     cin >> num;
//     if (num%2 == 0) {
//         cout << num << " is even.\n";
//     } else {
//         cout << num << " is odd.";
//     } 
//     return 0;
// }

// // 4. Determine if a year is a leap year.

// #include <iostream>
// using namespace std;

// int main() {
//     int year;
//     cout << " Enter a year: ";
//     cin >> year;

//     if ( year % 4== 0 && year % 100 != 0){
//         cout << year << " is a leap year.\n";
//     } else if ( year % 400 == 0) {
//         cout << year << " is a leap year.\n";
//     } else {
//         cout << year << " is not a leap year.\n";
//     }
//     return 0;
// }

// // 5. Print the multiplication table of a given number.

// #include <iostream>
// using namespace std;

// int main() {
//     int num;
//     cout << " Enter a number: " << endl;
//     cin >> num;

//     for ( int i = 1; i <=10; i++){
//         //cout << num *i << endl; --simple like 2,4,6,8...
//         cout << num << " * " << i << " = " << num*i << endl;
//     }
//     return 0;
// }

// //6. Calculate the factorial of a number using a loop

// #include  <iostream>
// using namespace std;

// int main(){
//     int num, factorial;
//     int fact = 1;
//     cout << " Enter a number: ";
//     cin >> num;

//     for ( int i = 1; i <= num; i++ ){
//         factorial = fact *i;
    
//     }
//     cout << " factorial of " << num << " is " << factorial << endl; 
//     return 0;
// }

// //7. Print the first N Fibonacci numbers

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter the number of terms: ";
//     cin >> n;

//     int a = 0, b = 1;

//     cout << "Fibonacci Series: ";

//     for (int i = 1; i <= n; i++) {
//         cout << a << " ";
//         int next = a + b;
//         a = b;
//         b = next;
//     }

//     return 0;
// }


// // 8. Count the digits in a number

// #include <iostream>
// using namespace std;

// int main() {
//     int num;
//     int count = 0;
//     cout << " Enter a number: ";
//     cin >> num;

//     while ( num != 0) {
//         num = num / 10;
//         count++;
//     }
//     cout << " The number of digits is: " << count << endl;
//     return 0;
// }


// // 9. Compute the sum of all even numbers from 1 to N.

// #include <iostream>
// using namespace std;

// int main(){
//     int num, sum = 0;
//     cout << " Enter a number: ";
//     cin >> num;
//     for (int i = 2; i<= num; i+=2){
//         sum =  sum+i;
//     }
//     cout << " Sum of the all even numbers from 1 to N is: " << sum;
//     return 0;
// }


// // 10. Find the largest element in an array.

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {34, 67, 23, 89, 12};
//     int largest = arr[0];

//     for( int i = 1; i<5; i++){
//         if ( arr[i] > largest){
//             largest = arr[i];
//         }
//     }
//     cout << " The largest element in the array is: " << largest << endl;
//     return 0;
// }

// // 11. Compute the average of elements in an array

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[5] = {34, 67, 23, 89, 12};
//     int sum = 0;

//     for ( int i = 0; i < 5; i++){
//         sum += arr[i];
//     }
//     double average = sum / 5;
//     cout << " The average of the elements in the array is: " << average << endl;
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int add(int x, int y){
//     return x + y ;
// }

// int main(){
//     int result = add(5,3);
//     cout << " The sum is: " << result/2 << endl;  
//     return 0;
// }

// Type casting

// #include <iostream>
// using namespace std;

// int main(){
//     int x;
//     cin>>x;
//     float y = (float)x;
//     cout << y/2;
//     return 0;
// }

// ASCII value 
// char to int
// #include <iostream>
// using namespace std;

// int main(){
//     char x;
//     cin >> x;
//     cout << (int)x; 
//     return 0;
// }

// int to char
// #include <iostream>
// using namespace std;

// int main(){
//     int x;
//     cin >> x;
//     char ch = (char)x;
//     cout << ch;
//     return 0;
//     }

//13. Compute the sum of digits of a number.\

// #include <iostream>
// using namespace std;

// int main(){
//     int num;
//     int sum = 0;
//     cout << " Enter a number: ";
//     cin >> num;
    

//     while(num > 0){
//         int lastDigit = num % 10; // -> to get the last digit
//         sum += lastDigit;
//         num /= 10; // -> to remove the last digit
//     } 
//     cout << " sum of the digits is: " << sum;
//     return 0;
// }

//14.  Check if a given number is prime

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;

//     if (n <= 1) {               // prime number can never be negative
//         cout << "Not Prime";
//         return 0;
//     }

//     bool isPrime = true;
//     for (int i = 2; i * i <= n; i++) {
//         if (n % i == 0) {
//             isPrime = false;
//             break;
//         }
//     }

//     if (isPrime)
//         cout << n <<" is a Prime number";
//     else
//         cout << "Not a prime number";

//     return 0;
// }

//15. Convert Celsius to Fahrenheit

// #include <iostream> 
// using namespace std;

// int main() {
//     float celsius, fahrenheit;
//     cout << "Enter temperature in Celsius: ";
//     cin >> celsius;

//     fahrenheit = (celsius * 9 / 5) + 32;
//     cout << "Temperature in Fahrenheit = " << fahrenheit;
//     return 0;
//}

// 16. Display all factors of a number

// #include <iostream>
// using namespace std;

// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;

//     cout << "Factors of " << num << " are: ";
//     for (int i = 1; i <= num; i++) {
//         if (num % i == 0)
//             cout << i << ",";
//     }

//     return 0;
// }


// 17. Count the number of even and odd elements in an array

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {12, 7, 9, 14, 6, 3};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     int evenCount = 0, oddCount = 0;

//     for (int i = 0; i < n; i++) {
//         if (arr[i] % 2 == 0)
//             evenCount++;
//         else
//             oddCount++;
//     }

//     cout << "Even elements = " << evenCount << endl;
//     cout << "Odd elements = " << oddCount;
//     return 0;
// }


// 18. Search for an element in an array.

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {15, 8, 23, 42, 4};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int key;
//     cout << "Enter element to search: ";
//     cin >> key;

   
//     for (int i = 0; i < n; i++) {
//         if (arr[i] == key) {
//             cout << "Element found at index " << i;
        
//         }
//     }

// }


// // 19. Recursive function to find the factorial of a number

// #include <iostream>
// using namespace std;

// // Recursive function
// int factorial(int n) {
//     if (n == 0 || n == 1)
//         return 1;          // Base case
//     return n * factorial(n - 1);  // Recursive case
// }

// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;

//     cout << "Factorial of " << n << " = " << factorial(n);
//     return 0;
// }
  
 // check whether the area of a rectcangle is greater than the perimeter

    // #include <iostream> 
    // using namespace std;

    // int main(){
    //     float l, b;
    //     cout << " Enter length and width of the rectangle" << endl;
    //     cin >> l >> b;
    //     float area = l*b;
    //     float peri = 2*(l+b);
    //     cout << "Area = " << area << endl;
    //     cout << "Perimeter = " << peri << endl;
    //     if(area > peri){
    //         cout << " Area is greater than perimeter";
    //     } else {
    //         cout << " Area is lesser than perimeter";
    //     }
    //     return 0;

    // }

    // take positive integer input and tell if it is a three digit number or not

    // #include <iostream> 
    // using namespace std;

    // int main(){
    //     int x;
    //     cout << "Enter a number = ";
    //     cin >> x;
    //     if (x > 99 && x < 1000){
    //         cout << " You entered a three digit number"<<endl;
    //     }else {
    //         cout << " Not a three digit number";
    //     }
    //     return 0;
    // }

    // Take a positive integer input and tell if it is divisible by 3 and 5.

    // #include <iostream> 
    // using namespace std;

    // int main(){
    //     int x;
    //     cout << " Enter a number "<< endl;
    //     cin >> x;
    //     if(x%3 == 0 && x%5 ==0){
    //         cout << " The number is divisible by 3 and 5" << endl;

    //     } else {
    //         cout << " Not divisible by 3 and 5";
    //     }
    //     return 0;

    // }

     // Take a positive integer input and tell if it is divisible by 3 or 5

    //  #include <iostream> 
    // using namespace std;

    // int main(){
    //     int x;
    //     cout << " Enter a number "<< endl;
    //     cin >> x;
    //     if(x%3 == 0 || x%5 ==0){
    //         cout << " The number is divisible by 3 or 5" << endl;

    //     } else {
    //         cout << " Not divisible by 3 and 5";
    //     }
    //     return 0;

    // }

    // take three numbers input and tell if they can be the sides of a triangle

    // #include <iostream> 
    // using namespace std;

    // int main(){
    //     int a, b, c;
    //     cout << "Enter three numbers"<<endl;
    //     cin >> a >> b >> c;
    //     if ( a+b > c && b+c > a && c+a > b){ // condition for a triangle
    //         cout << " valid triangle "<< endl;

    //     } else {
    //         cout << " invalid triangle";
    //     }
    //     return 0; 
    // }


    // Take a positive integer input and tell if it is divisible by '3 or 5' but not divisible by 15.

    // #include <iostream> 
    // using namespace std;

    // int main(){
    //     int x;
    //     cout << " Enter a number "<< endl;
    //     cin >> x;
    //     if((x%3 == 0 || x%5 ==0) && x%15 != 0){
    //         cout << " The number is divisible by 3 or 5 but not 15" << endl;

    //     } else {
    //         cout << " divisible by all";
    //     }
    //     return 0;

    // }

    // Nested if else

    // take three input and find the greatest.

    // #include <iostream>
    // using namespace std;

    // int main(){
    //     int a, b, c;
    //     cout << "Enter three numbers"<<endl;
    //     cin>>a>>b>>c;

    //     if(a>b){
    //         if(a>c){
    //             cout<< "a is the greatest";
    //         } else{
    //             cout<< "c is the greatest";
    //         }
    //     }else{
    //         if(b>c){
    //             cout << "b is the greatest";
    //         } else {
    //             cout << " c is the greatest";
    //         }
    //     }
    //     return 0;
    // }

    // If the ages of Ram, Shyam and Ajay are input, Write a program to determine the youngest of the three

    // #include <iostream>
    // using namespace std;

    // int main(){
    //     int R_age,S_age, A_age;
    //     cout << "Enter the age of Ram: ";
    //     cin >> R_age;
    //     cout << "Enter the age of Shyam: ";
    //     cin >> S_age;
    //     cout << "Enter the age of Ajay: ";
    //     cin >> A_age;

    //     if(R_age < S_age){
    //         if(R_age < A_age){
    //             cout<< "Ram is youngest";
    //         }else{
    //             cout << "Ajay is youngest";
    //         }
    //     }else {
    //         if(S_age < A_age){
    //             cout << "Shyam is the youngest";
    //         } else{
    //             cout<< "Ajay is the youngest";
    //         }
    //     }
    //     return 0;
    // }

    // Else if

    // #include <iostream>
    // using namespace std;

    // int main(){
    //     int n;
    //     cout << "Enter your marks: ";
    //     cin >>n;

    //     if(n>=81 && n<=100){
    //         cout << " Very good";
    //     }else if(n >100) {
    //         cout  << "Invalid Marks";  
    //     }else if(n >= 61 && n <= 80){ 
    //         cout << "Good";
    //     }else if(n >= 41 && n <= 60){
    //         cout << "Average";
    //     } else{
    //         cout << "Fail";
    //     }
    //     return 0;
    // }

    /*Ternary operator ( short version of if else)
     (condition)? if true : if false*/ 

    // #include <iostream>
    // using namespace std;

    // int main(){
    //     int n;
    //     cout << "Enter a number: ";
    //     cin >> n;

    //     (n%2 == 0)? cout << "Even Number" : cout << "Odd Number";
    //     return 0;
    // }

    // Switch case 

    // #include <iostream>
    // using namespace std;

    // int main() {
    //     int a , b;
    //     char op;
    //     cout << "Enter first number: ";
    //     cin >> a;
    //     cout << "Enter operator: ";
    //     cin >> op;
    //     cout << "Enter second number: ";
    //     cin >> b;
    //     /*if (op =='+') cout << a+b;
    //     if (op =='-') cout << a-b;
    //     if (op =='*') cout << a*b;
    //     if (op =='/') cout << a/b; -> simple using if statement*/

    //     switch(op){
    //        case '+':
    //             cout << a+b;
    //             break;
    //        case '-':
    //             cout << a-b;
    //             break;
    //        case '*':
    //             cout << a*b;
    //             break;
    //        case '/':
    //             cout << a/b;
    //             break;
    //        default:
    //        cout << "Invalid Parameters";     
            
    //     }        
    //     return 0;
    // }

    // #include <iostream>
    // using namespace std;

    // int main(){
    //     int x = 3,y,z;
    //     y = x = 10;
    //     z = x < 10; // x <10 => condition - either it's true (1) or false (0) 
    //     cout << x << " " << y << " " <<z ;
    //     return 0;
    // }

    
    // LOOPS -> for repetation

    // #include <iostream>
    // using namespace std;

    // int main(){
    //     for(int i = 0; i <= 10; i++){
    //        // cout <<"Hi!";
    //           cout << i << endl;
           
    //     }
    //     return 0;
    // }


    // Print all even numbers from 1 to 100

    // #include <iostream>
    // using namespace std;

    // int main(){
    //     for(int i = 2; i <= 100; i+=2) cout << i<< endl;
    //     return 0;
    // }

    // print the table of 19

    // #include <iostream>
    // using namespace std;

    // int main(){
    //     for(int i = 19; i <= 190; i+=19) cout << i<< endl;
    //     return 0;
    // }

    //Display the AP- 1,3,5,7,...n
      // nth term of an AP l = a+(n-1)d , here a=1, d=2
      // so l = 2n-1 
    // #include <iostream>
    // using namespace std;

    // int main(){
    //     int n;
    //     cout << "Enter n: ";
    //     cin >> n;
    //     for(int i = 1; i <= (2*n-1); i+=2) cout <<i <<"," ;
    //     // cout << "...n";
    //     return 0;
    // }

    // Display the AP- 4,7,10,13,...n
    // l= 4+3n-3 = 3n+1

    // #include <iostream>
    // using namespace std;

    // int main(){
    //     int n;
    //     cout << "Enter n: ";
    //     cin >> n;
    //     for(int i = 4; i <= (3*n+1); i+=3) cout <<i <<"," ;
    //      cout << "...n";
    //     return 0;
    // }

    // GP 1,2,4,8....

    // #include <iostream>
    // using namespace std;

    // int main(){
    //     int n;
    //     cout << "Enter n: ";
    //     cin >> n;
    //     int a=1;
    //     for(int i=1;i<n; i++){
    //     cout << a<<",";
    //     a=a*2;
    //     } 
    // return 0;
    // }
    

    // print all the factors of a number

    // #include <iostream>
    // using namespace std;

    // int main(){
    //     int n;
    //     cout << "Enter n: ";
    //     cin >> n;
    //     for(int i=1;i<n; i++){
    //        if(n%i==0) cout << i<<",";
    //     } 
    // return 0;
    // }

   // print the highest factor of a number excluding number itself.

    // #include <iostream>
    // using namespace std;

    // int main(){
    //     int n;
    //     cout << "Enter n: ";
    //     cin >> n;
    //     int f=1;

    //     for(int i=1;i<n; i++){
    //        if(n%i==0) {
    //             f=i;
    //        } 
             
    //     } cout <<f;
        
    // return 0;
    // }

    