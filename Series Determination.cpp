#include<iostream>
using namespace std;

int main()
{
	int x1=0,x2=0,x0=0;
	while(scanf("%d%d%d",&x0,&x1,&x2)!=EOF)
	{
		double A=0,B=0,C=0;
		A=(double)(x2-2*x1+x0)/2;
		B=(4*x1-3*x0-x2)/2;
		C=x0;
		cout<<A*9+3*B+C<<" "<<A*16+4*B+C<<" "<<A*25+5*B+C<<endl;
	}
	return 0;
}
/*
已知f(0),f(1),f(2),求f(3),f(4),f(5);先利用f(0),f(1),f(2)求得A,B,C；然后解题；
*/
/*
 Problem description
 Boudreaux and Thibodeaux aren't very good at math, so they need you to write a program that can determine the second degree polynomial used to generate a given sequence of three integers. As proof that you've figured out the polynomial, they want your program to print out the next 3 integers in the sequence.
 You know that each sequence is generated by a polynomial of the form f(x) = Ax2 + Bx + C, where A, B, and C are integers in the range (-103 ≤ (A, B, C) ≤ 103). You are given the values f(0), f(1), f(2) and are to determine the values f(3), f(4), f(5). 
 
 
 Input
 Input to this problem will consist of a (non-empty) series of up to 100 data sets. Each data set will be formatted according to the following description, and there will be no blank lines separating data sets.
 Each data set consists of a single line containing the space-separated integer values of the polynomial evaluated at 0, 1, and 2 (in that order). These values will be in the range (-103 ≤ (f(0), f(1), f(2)) ≤ 103). 
 
 
 Output
 For each data set, there will be exactly one line of output containing the space-separated integer values of the polynomial evaluated at 3, 4, and 5 (in that order). These values will be in the range (-104 ≤ (f(3), f(4), f(5)) ≤ 104). 
 
 Sample Input
 0 0 0
 1 1 1
 1 2 3
 0 1 4
 0 2 8
 Sample Output
 0 0 0
 1 1 1
 4 5 6
 9 16 25
 18 32 50
*/