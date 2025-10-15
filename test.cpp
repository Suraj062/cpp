// 1. Read two integers and print their sum.

#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout << "Enter two integers: ";
    cin >> a;
    cin>> b;
    cout << " sum is : "<< a+b ;

    return 0;
}

// 2.Read three numbers and print the largest.

#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    if (a >= b && a >= c) {
        cout << " a is the largest number." << endl;
    } else if ( b >= a && b >=c){
        cout << " b is the largest number." << endl;
    } else {
        cout << " c is the largest number." << endl;
    }
    return 0;
}

// 3. Check whether a number is even or odd.

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << " Enter a number: ";
    cin >> num;
    if (num%2 == 0) {
        cout << num << " is even.\n";
    } else {
        cout << num << " is odd.";
    } 
    return 0;
}

// 4. Determine if a year is a leap year.

#include <iostream>
using namespace std;

int main() {
    int year;
    cout << " Enter a year: ";
    cin >> year;

    if ( year % 4== 0 && year % 100 != 0){
        cout << year << " is a leap year.\n";
    } else if ( year % 400 == 0) {
        cout << year << " is a leap year.\n";
    } else {
        cout << year << " is not a leap year.\n";
    }
    return 0;
}

// 5. Print the multiplication table of a given number.

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << " Enter a number: " << endl;
    cin >> num;

    for ( int i = 1; i <=10; i++){
        //cout << num *i << endl; --simple like 2,4,6,8...
        cout << num << " * " << i << " = " << num*i << endl;
    }
    return 0;
}

//6. Calculate the factorial of a number using a loop

#include  <iostream>
using namespace std;

int main(){
    int num, factorial;
    int fact = 1;
    cout << " Enter a number: ";
    cin >> num;

    for ( int i = 1; i <= num; i++ ){
        factorial = fact *i;
    
    }
    cout << " factorial of " << num << " is " << factorial << endl; 
    return 0;
}

//7. Print the first N Fibonacci numbers

#include <iostream>
using namespace std;

int main(){
    int a;

}

// 8. Count the digits in a number

#include <iostream>
using namespace std;

int main() {
    int num;
    int count = 0;
    cout << " Enter a number: ";
    cin >> num;

    while ( num != 0) {
        num = num / 10;
        count++;
    }
}


// 9. Compute the sum of all even numbers from 1 to N.

#include <iostream>
using namespace std;

int main(){
    int num, sum = 0;
    cout << " Enter a number: ";
    cin >> num;
    for (int i = 2; i<= num; i+=2){
        sum =  sum+i;
    }
    cout << " Sum of the all even numbers from 1 to N is: " << sum;
    return 0;
}


// 10. Find the largest element in an array.

#include <iostream>
using namespace std;

int main() {
    int arr[] = {34, 67, 23, 89, 12};
    int largest = arr[0];

    for( int i = 1; i<5; i++){
        if ( arr[i] > largest){
            largest = arr[i];
        }
    }
    cout << " The largest element in the array is: " << largest << endl;
    return 0;
}

// 11. Compute the average of elements in an array

#include <iostream>
using namespace std;

int main() {
    int arr[5] = {34, 67, 23, 89, 12};
    int sum = 0;

    for ( int i = 0; i < 5; i++){
        sum += arr[i];
    }
    double average = sum / 5;
    cout << " The average of the elements in the array is: " << average << endl;
    return 0;
}