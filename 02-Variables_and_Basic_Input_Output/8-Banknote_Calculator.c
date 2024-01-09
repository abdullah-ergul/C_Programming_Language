/**
 * @file 8-Banknote_Calculator.c
 * @author Abdullah Ergul
 * @version 2.0
 * @date 26-11-2023
 * 
 * @copyright MIT License - Copyright (c) 2023 Abdullah Ergül
 * 
 * 
 // ? Question: Write a program that calculates the number of banknotes used for the amount of money entered by the user.
 */

#include <stdio.h>


int main() {
	int money, hundred, hundred_bill, fifty, fifty_bill, twenty, twenty_bill, ten;
	
	printf("Enter the amount of money: ");
	scanf("%d", &money);
	
	// We can calculate the number of banknotes by using the divide and mod operator.
	// For example, 125/100=1 and 125%100=25. So, we have 1 banknote of 100 TL and 25 TL left.
	hundred = money/100;
	hundred_bill = money%100;	// "%" means mod. It gives the remainder of the division. For example, 5%2=1, 10%3=1, 15%4=3
	fifty = hundred_bill/50;
	fifty_bill = hundred_bill%50;
	twenty = fifty_bill/20;
	twenty_bill = fifty_bill%20;
	ten = twenty_bill/10;
	
	printf("\n%d banknotes of 100 TL\n%d banknotes of 50 TL\n%d banknotes of 20 TL\n%d banknotes of 10 TL", hundred, fifty, twenty, ten);	
	
	
	return 0;
}