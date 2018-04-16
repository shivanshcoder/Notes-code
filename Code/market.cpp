/*
	Program 8
	A program for Shop using classes
	Saving Prices of item, Searching and making bill
*/

#include<iostream>
#include<conio.h>
using namespace std;

struct item {
	int itemcode;
	int    price;
};

class Shop{
	item a[50];
	int Number_items;
	int totbill;
public:
	Shop() { Number_items = 0; totbill = 0; }

	void getdata();
	int search(int id);
	void deldata();
	void putdata();
	void menu();
	void total(); 

	};

//Prints the Total Bill
void Shop::total() {
	system("cls");
	cout << "Total bill is: " << totbill; 
	_getch();
}

//Searches the specified Item
int Shop::search(int id) {
	for (int i =0; i < 50; i++)
	{
		if (a[i].itemcode == id)
			return i;
	}
}

//Enters the Data fot Items
void Shop::getdata() {
	system("cls");
	
	if (Number_items >= 50)
	{
		cout << " no space";
		return;
	}

	cout << " Enter Itemno & price" << endl;
	cin >> a[Number_items].itemcode >> a[Number_items].price;
	
	totbill += a[Number_items].price;
	Number_items++;
}


void Shop::putdata() {
	system("cls");
	cout << "ItemCode    Item Price\n";
	for (int i = 0; i < Number_items; i++)
		cout << a[i].itemcode << "\t\t" << a[i].price << endl;
	_getch();
}
void Shop::deldata() {
	system("cls");
	int i, id;
	
	cout << " enter ID of product you want to delete";
	cin >> id;
	
	i = search(id);
	a[i].itemcode = 0;
	totbill -= a[i].price;
	a[i].price = 0;
}

//Main Menu for Using Program
void Shop::menu() {
	system("cls");

	cout << "                  Menu\n"
		<< "1. Add Item\n"
		<< "2. Remove Item\n"
		<< "3. Display Items\n"
		<< "4. Display Total Bill\n"
		<< "5. Exit\n";

	int choice;
	cin >> choice;
	
	switch (choice)
	{
	case 1:
		getdata();
		break;
	case 2:
		deldata();
		break;
	case 3:
		putdata();
		break;
	case 4:
		total();
		break;
	case 5:
		return;
	default:
		cout << "Enter a valid Choice";
	}
	menu();
}

int main() {
	Shop s1;
	s1.menu();
}