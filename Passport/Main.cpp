#include "Passport.h"
#include "ForeignPassport.h"

int main()
{
	Passport a;
	ForeignPassport b;
	Visa c("Germany", "01.02.2023", "05.03.2023", "1");
	b.AddVisa(c);
	b.PrintVisas();
	Visa d("Italy", "01.05.2023", "01.03.2023", "2");
	b.AddVisa(d);
	b.PrintVisas();
}