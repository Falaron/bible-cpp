# include <vector>
# include <iostream>
using namespace std;

class First {			/* CLASS WITHOUT DETAILS START AS PRIVATE (called class) */
	//private
	int x;

public:
	void method();
};

struct Second {			/* CLASS WITHOUT DETAILS START AS PRIVATE (called struct) */
	//public
	void method();

private:
	int x;
};




/* CLASS WITHOUT DETAILS START AS PRIVATE (called class) */
class Initialisation {			
	//private
	int x;
	int y;

public:
	Initialisation(int, int);
	~Initialisation();
};