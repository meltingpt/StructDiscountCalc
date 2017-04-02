//Discount Calculator: determines the original price and the final discounted price- after tax and all sales have been applied.

#include <iostream>
#include "DiscountCalc.h"
using namespace std;

DiscountCalc displayMenu() //Display the questions and get the user's input
{
    DiscountCalc myCalc;
		
	cout << "Enter in an initial price: ";
	cin >> myCalc.price;
	
	cout << "How many dollars off? ";
	cin >> myCalc.dollarsOff;
	
	cout <<"What percentage of a discount? ";
	cin >> myCalc.discountPerc;
 
        cout <<"Any additional percentage off? ";
   	cin >> myCalc.additionalPerc;
    	
    	cout <<"What's the tax? ";
    	cin >> myCalc.tax;
	
    return myCalc; //store answers into myCalc
}

float originalPrice(DiscountCalc myCalc) //Calculate the inital price with tax
{
    float totalPrice,
          taxed;

    taxed = 1 + (myCalc.tax / 100); 
	totalPrice = myCalc.price  * taxed; //Calculate the initial price times the tax
	totalPrice = totalPrice + 0.005; //round up totalPrice to 2 decimals

    return totalPrice;	//OriginalPrice
}

float discountedPrice(DiscountCalc myCalc) //Calculate the price after all the discounts
{
	float dollaDiscTotal,
          percentDiscTotal,
          percentage,
	      discountPrice;
	

	dollaDiscTotal = originalPrice(myCalc) - myCalc.dollarsOff; //First subtract the dollars off from the original price
	percentage = (myCalc.discountPerc + myCalc.additionalPerc) / 100; //Calculate the total percentage off
	percentDiscTotal= myCalc.price * percentage; //Calculate the discount taken off determined by the percentage off only
	discountPrice = dollaDiscTotal - percentDiscTotal; //Find the final discounted price

	return discountPrice; //Discounted price	
}
	
