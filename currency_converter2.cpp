#include "std_lib_facilities.h"

int main()
{
constexpr double yen = 0.1;
constexpr double euro = 1.1;
constexpr double pound = 1.25;
constexpr double chinese_yuan = 0.145821;
constexpr double korner = 0.15;
double amount;
char currency;

cout<<"+++++Dollar converter+++++\n";
cout<<"Please enter an amount followed by a currency! (y, e, p, c, k)\n";

cin>>amount>>currency;

switch (currency){
	case 'y':
		cout<<amount<<" yen == "<<amount*yen<<" dollar(s)\n";
		break;
	case 'e':
		cout<<amount<<" euro(s) == "<<amount*euro<<" dollar(s)\n";
		break;
	case 'p':
		cout<<amount<<" pound(s) == "<<amount*pound<<" dollar(s)\n";
		break;
	case 'c':
		cout<<amount<<" yuan == "<<amount*chinese_yuan<<" dollar(s)\n";
		break;
	case 'k':
		cout<<amount<<" korner == "<<amount*korner<<" dollar(s)\n";
		
	default:
		cout<<"Sorry, your currency hasn't supported yet.\nPlease come back later!\n";
		break;
	}
}
