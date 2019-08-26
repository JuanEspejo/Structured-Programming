#include<iostream>

using namespace std;

main ()
{
	while (int j = 1; j <= 4; j++)
	{
		switch (j) 
		{
			case 4: cout << "Four calling birds" << endl;
			case 3: cout << "Three french hens" << endl;
			case 2: cout << "Two turtle doves" << endl;
			case 1: cout << "a partridge in a pear tree.";
					cout << endl << endl ; 
		}
	}
}
