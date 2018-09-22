#include "std_lib_facilities.h"
// 1 yen = 0.1 usd
// 1 euro = 1.1 usd
// 1 pound = 1.25 usd

int main()
{
constexpr double yen = 0.1;
constexpr double euro = 1.1;
constexpr double pound = 1.25;

double amount;
char currency;
cout<<"+++++Yen, euro, pound to dollar converter+++++\n";
cout<<"Please enter an amount followed by a space and a currency! (y, e or p)\n";
cin>>amount>>currency;

if (currency == 'y')
cout<<amount<<" yen == "<<amount*yen<<" dollar(s)\n";
else if (currency == 'e')
cout<<amount<<" euro(s) == "<<amount*euro<<" dollar(s)\n";
else if (currency == 'p')
cout<<amount<<" pound(s) == "<<amount*pound<<" dollar(s)\n";
else
cout<<"Sorry, your currency hasn't supported yet.\nPlease come back later!\n";
}
