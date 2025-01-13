// Operators.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std; 
int main()
{
	//int a = 1, b = 1, c; 
	//cout << (c = a + b, a = b,b = c) << endl; // using comma aperator ,
	//cout << "a : " << a << " b : " << b << " c : " << c;
	// 
	double a{ 3.0 / 7.0 };
	double b{ 1 + 3.0 / 7.0 - 1 };

	//0.428571 0.428571 0 SURPRISE SOMETIMES not 1
	//cout << a << " " << b << " " << (a == b) << "\n";

	//a = 5.0, b = 4.99999999999999999;

	//5 5 1 SURPRISE SOMETIMES not 0
	//cout << a << " " << b << " " << (a == b) << "\n";

	// Never compare doubles for equality directly



	/*cout << int('a') << "  " << int('z'); */



	/*int num1, num2, num3, num4, num5; 
	cin >> num1 >> num2 >> num3 >> num4 >> num5;
	float avg = (num1 + num2 + num3 + num4 + num5) / 5; 
	cout << "Average is : " << avg<<endl; 

	float  sum1 = num1 + num2 + num3; 
	float av1 = sum1 / 3; 
	
	float sum2 = num4 + num5; 
	float av2 = sum2 / 2;
	cout << "Average 2 : " << float(sum1 / sum2)<<endl; 
	cout << "Average 3 : " << av1 /av2 <<endl*/
;	
	/*int n1, n2; 
	cin >> n1 >> n2; 
	double mod = n1 % n2; 
	float div =  mod / n1; 
	cout << mod;*/


// task 1 on Homework 2 

//int num; 
//cin >> num; 
//bool is_even = num % 2 == 0; 
//
//cout << is_even << endl; 
//int div = num / 2; 
//
//bool is_even2 = (num - div*2) == 0; 
//
//cout<<is_even2<<endl
//; 
//
//int last_digit = num % 10 ; 
//
//bool is_even3 = last_digit == 0 || last_digit == 2 || last_digit == 4 || last_digit == 6 || last_digit == 8; 
//cout << is_even3<<endl; 

//=====================================//
/// Problem 2 : Homework 2 
//int num; 
//cin >> num; 
//
//int digit1 = num % 10; 
//num = num / 10; 
//int digit2 = num % 10 ;
//num = num / 10; 
//int digit3 = num % 10 ; 
//cout << digit1 + digit2 + digit3;


//============================//

//Problem 3 : Homework 2 
//int x; 
//cin >> x; 
//x = x / 1000; 
//cout << x % 10; 

///===================================////
//54. Homework 3: P#1 
//int n;
//cin >> n; 
//bool is_even = (n % 2 == 0);
//bool is_not_even = (n % 2 != 0);
//
//cout << is_even * 100 + is_not_even * 7  ;


///+++++++++++++++++++++++++++++++++++++++////

///Homework 3 : P#2

int n; 
cin >> n; 
int num_of_years = n / 360; 
n = n % 360; 
int num_of_months = n / 30; 
n = n % 30; 

cout<< num_of_years <<" "<< num_of_months <<" " << n  ;








	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
