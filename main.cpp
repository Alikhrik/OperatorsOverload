// Перевантаження аоифметичних операторів
//	+	(унарний)
//	-	(унарний)
//	++	(унарний)
//	--	(унарний)
//	+	(бінарний)
//	-	(бінарний)
//	*	(бінарний)
//	/	(бінарний)
//	%	(бінарний)
//	=	(бінарний)

#include <iostream>
#include "Number.h"

int main() {
	Number a(10), b(20);

	std::cout << "a = " << a.GetValue() << std::endl;
	std::cout << "b = " << b.GetValue() << std::endl;
	return 0;
}