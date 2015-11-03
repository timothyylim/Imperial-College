#include <iostream>
#include <struct>

using namespace std;

class Library
{

};

class LibraryUser
{

private:
	string name;
	int itemsBorrowedCount;
	Items *itemsBorrowed[3];
public:
	LibraryUser(string _name) : name(_name);
	itemsBorrowedCount = 0;
	for (int n=0; n<3; n++)
	{
		
	}
}

	bool borrowItem(Items *item);;

class Items 
{
protected:
	string title;
	int location;
	LibraryUser *borrowedBy;

public:
	Items(string _title, int _location) : title(_title), location (_location)
	{
		borrowedBy = NULL;
	}
};

class Book : public Items
{
	private:
		int loanPeriod;
	public:
		// Initializer colon means that when a book is constructed we call constructor for superclass
		Book(string _title, int _location, int _loanPeriod) : Items(_title, _location)
		{
			loanPeriod = _loanPeriod;
		}
};



class Periodical : public Items
{
private:
	static int loanPeriod;
	public:
		Periodical(string _title, int _location) : Items(_title, _location)
		{

		}
};

int Periodical::loanPeriod = 5;

int main()
{
	Book cppwt("C++ without tears",1,10);
	Book hhtic("Hitchikers..",1,10);
	Periodical atww80("Around the ..." , 3);

	LibraryUser georgia("georgia"), ali("ali");

	georgia.borrowItem(cppwt);

}