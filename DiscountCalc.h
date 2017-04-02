//Discount Calculator header

using namespace std;

struct DiscountCalc
{
	float dollarsOff,
	      additionalPerc,
              discountPerc,
	      price,
	      tax;
};

DiscountCalc displayMenu();

float originalPrice(DiscountCalc);

float discountedPrice(DiscountCalc);

