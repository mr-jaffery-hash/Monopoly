using namespace std;
#include"SFML/Graphics.hpp"
#include"SFML/System.hpp"
#include"SFML/Window.hpp"
#include"SFML/Audio.hpp"
#include <stdlib.h>
#include<iostream>
#include <cstring>
#include<time.h>
#include<Windows.h> 

sf::Vector2f getCoordinates(int boxNumber)
{
	sf::Vector2f coordinates;
	if (boxNumber == 0)	//BOX  1 = (1800, 1200)	
	{
		coordinates.x = 1800;
		coordinates.y = 1200;
	}
	else if (boxNumber == 1)	//BOX  2 = (1631, 1180)
	{
		coordinates.x = 1631;
		coordinates.y = 1180;
	}
	else if (boxNumber == 2)//BOX  3 = (1481, 1180)
	{
		coordinates.x = 1481;
		coordinates.y = 1180;
	}
	else if (boxNumber == 3)//BOX  4 = (1325, 1180)		
	{
		coordinates.x = 1325;
		coordinates.y = 1180;
	}
	else if (boxNumber == 4)//BOX  5 = (1161, 1180)		
	{
		coordinates.x = 1161;
		coordinates.y = 1180;
	}
	else if (boxNumber == 5)//BOX  6 = (1001, 1180)	
	{
		coordinates.x = 1001;
		coordinates.y = 1180;
	}
	else if (boxNumber == 6)//BOX  7 = (841, 1180)	
	{
		coordinates.x = 841;
		coordinates.y = 1180;
	}
	else if (boxNumber == 7)//BOX  8 = (679, 1180)	
	{
		coordinates.x = 679;
		coordinates.y = 1180;
	}
	else if (boxNumber == 8)//BOX  9 = (519, 1180)	
	{
		coordinates.x = 519;
		coordinates.y = 1180;
	}
	else if (boxNumber == 9)//BOX 10 = (359, 1180)
	{
		coordinates.x = 359;
		coordinates.y = 1180;
	}
	else if (boxNumber == 10)	//BOX 11 = (129, 1180)		
	{
		coordinates.x = 129;
		coordinates.y = 1180;
	}
	else if (boxNumber == 11)//BOX 12 = (113, 1010)		
	{
		coordinates.x = 113;
		coordinates.y = 1010;
	}
	else if (boxNumber == 12)//BOX 13 = (113, 920)			
	{
		coordinates.x = 113;
		coordinates.y = 920;
	}
	else if (boxNumber == 13)//BOX 14 = (113, 810)			
	{
		coordinates.x = 113;
		coordinates.y = 810;
	}
	else if (boxNumber == 14)//BOX 15 = (113, 710)			
	{
		coordinates.x = 113;
		coordinates.y = 710;
	}
	else if (boxNumber == 15)//BOX 16 = (113, 610)		
	{
		coordinates.x = 113;
		coordinates.y = 610;
	}
	else if (boxNumber == 16)//BOX 17 = (113, 515)		
	{
		coordinates.x = 113;
		coordinates.y = 515;
	}
	else if (boxNumber == 17)//BOX 18 = (113, 410)		
	{
		coordinates.x = 113;
		coordinates.y = 410;
	}
	else if (boxNumber == 18)//BOX 19 = (113, 320)		
	{
		coordinates.x = 113;
		coordinates.y = 320;
	}
	else if (boxNumber == 19)//BOX 20 = (113, 220)

	{
		coordinates.x = 113;
		coordinates.y = 220;
	}
	else if (boxNumber == 20)	//BOX 21 = (359, 60)		
	{
		coordinates.x = 113;
		coordinates.y = 60;
	}
	else if (boxNumber == 21)	//BOX 22 = (356, 60)
	{
		coordinates.x = 356;
		coordinates.y = 60;
	}
	else if (boxNumber == 22)//BOX 23 = (519, 60)			
	{
		coordinates.x = 519;
		coordinates.y = 60;
	}
	else if (boxNumber == 23)//BOX 24 = (679, 60)			
	{
		coordinates.x = 679;
		coordinates.y = 60;
	}
	else if (boxNumber == 24)//BOX 25 = (841, 60)			
	{
		coordinates.x = 841;
		coordinates.y = 60;
	}
	else if (boxNumber == 25)//BOX 26 = (1001, 60)			
	{
		coordinates.x = 1001;
		coordinates.y = 60;
	}
	else if (boxNumber == 26)//BOX 27 = (1161, 60)		
	{
		coordinates.x = 1161;
		coordinates.y = 60;
	}
	else if (boxNumber == 27)//BOX 28 = (1325, 60)		
	{
		coordinates.x = 1325;
		coordinates.y = 60;
	}
	else if (boxNumber == 28)//BOX 29 = (1481, 60)		
	{
		coordinates.x = 1481;
		coordinates.y = 60;
	}
	else if (boxNumber == 29)//BOX 30 = (1631, 60)		
	{
		coordinates.x = 1631;
		coordinates.y = 60;
	}
	else if (boxNumber == 30)//BOX 31 = (1870, 60)

	{
		coordinates.x = 1870;
		coordinates.y = 60;
	}
	else if (boxNumber == 31)	//BOX 32 = (1900, 220)		
	{
		coordinates.x = 1900;
		coordinates.y = 220;
	}
	else if (boxNumber == 32)//BOX 33 = (1900, 320)		
	{
		coordinates.x = 1900;
		coordinates.y = 320;
	}
	else if (boxNumber == 33)//BOX 34 = (1900, 410)		
	{
		coordinates.x = 1900;
		coordinates.y = 410;
	}
	else if (boxNumber == 34)//BOX 35 = (1900, 515)		
	{
		coordinates.x = 1900;
		coordinates.y = 515;
	}
	else if (boxNumber == 35)//BOX 36 = (1900, 610)		
	{
		coordinates.x = 1900;
		coordinates.y = 610;
	}
	else if (boxNumber == 36)//BOX 37 = (113, 710)		
	{
		coordinates.x = 1900;
		coordinates.y = 710;
	}
	else if (boxNumber == 37)//BOX 38 = (113, 810)		
	{
		coordinates.x = 1900;
		coordinates.y = 810;
	}
	else if (boxNumber == 38)//BOX 39 = (1900, 920)	
	{
		coordinates.x = 1900;
		coordinates.y = 920;
	}
	else if (boxNumber == 39)//BOX 40 = (1900, 1010)	
	{
		coordinates.x = 1900;
		coordinates.y = 1010;
	}
	//else if (boxNumber == 0)//BOX 41 = (1900, 1180)

	//{
	//coordinates.x = 1900;
	//coordinates.y = 1180;
	//}

	return coordinates;
}
string PlayerTurnString(int playerTurn)
{
	string toDisplay = "Turn of Player ";
	toDisplay += to_string(playerTurn);
	return toDisplay;
}

class box
{
	int position;//position of box from 1 to 40
	char* name; //full name of box;
	char symbol;
public:
	box()
	{
		position = 0;
		name = nullptr;
		symbol = '\0';
	}
	box(const char* iname, int ipos, char s)
	{
		/*cout << "I was called" << endl;
		cout << "I got" << iname << endl;*/
		name = new char[strlen(iname) + 1];
		for (int i = 0; i < strlen(iname); i++)
		{
			name[i] = iname[i];
		}
		name[strlen(iname)] = '\0';
		position = ipos;
		symbol = s;
	}
	box(const box& obj)
	{
		name = new char[strlen(obj.name) + 1];
		for (int i = 0; i < strlen(obj.name); i++)
		{
			name[i] = obj.name[i];
		}
		name[strlen(obj.name)] = '\0';
		position = obj.position;
		symbol = obj.symbol;
	}

	void SetSymbol(char x)
	{
		symbol = x;
	}
	void initialiseSymbol()
	{
		symbol = '\0';
	}
	int getPosition()
	{
		return position;
	}
	char* getName()
	{
		return name;
	}
};
class property : public box
{
	char* propertyname; //name of property
	float price;//price of the property
	float rent;//rent that is to be taken for that property
	char playersymbol;//will be used to connect players class to property
	bool mortaged; //check if its mortage
public:
	/*default*/
	property()
	{
		propertyname = nullptr;
		price = 0.0;
		rent = 0.0;
		playersymbol = '\0';
		mortaged = false;
	}
	/* parametrized*/
	property(const char* ipname, const char* iname, int iposition, float iprice, float irent, char iplayersymbol) : box(iname, iposition, iplayersymbol) {
		price = iprice;
		rent = irent;
		playersymbol = iplayersymbol;
		propertyname = new char[strlen(ipname) + 1];
		for (int i = 0; i < strlen(ipname); i++)
		{
			propertyname[i] = ipname[i];
		}
		propertyname[strlen(ipname)] = '\0';
	}
	/* copy*/
	property(const property& obj) : box(obj)
	{
		price = obj.price;
		rent = obj.rent;
		playersymbol = obj.playersymbol;
		propertyname = new char[strlen(obj.propertyname) + 1];
		for (int i = 0; i < strlen(obj.propertyname); i++)
		{
			propertyname[i] = obj.propertyname[i];
		}
		propertyname[strlen(obj.propertyname)] = '\0';
	}
	//~property() {
	//	delete[]propertyname;
	//	propertyname = nullptr;
	//}
	/*if property is to be made property*/
	void makemortage()
	{
		mortaged = true;
	}
	/* if player is to be assigned to a property*/
	void assignsymbol(char isymbol)
	{
		playersymbol = isymbol;
	}
	void initialiseSymbol()
	{
		playersymbol = '\0';
	}
	void printpropertyinfo()
	{
		cout << "Property name : " << propertyname << endl;
		cout << "Property price : " << price << endl;
		cout << "Property rent : " << rent << endl;
		cout << "Property owned by : " << playersymbol << endl;
		cout << "Property status : " << endl;
		if (mortaged == 0)
		{
			cout << "Not mortaged" << endl;
		}
		else
		{
			cout << "Mortaged" << endl;
		}
	}
	char* getpropertyname()
	{
		return propertyname;
	}
	float getprice()
	{
		return price;
	}
	float getrent()
	{
		return rent;
	}
	char getplayersymbol()
	{
		return playersymbol;
	}
	bool getmortaged()
	{
		return mortaged;
	}
	char* getfullname()
	{
		return getName();
	}
};
class residential :public property
{
	char block;
	int  house;
	int  shops;
	bool hotel;
	float payrent;

	/* Utilities*/
	bool gas;
	bool wifi;
	bool electricity;
public:
	residential() :property()
	{
		block = '\0';
		house = 0;
		shops = 0;
		hotel = 0;
		payrent = 0;
		gas = 0;
		electricity = 0;
		wifi = 0;

	}
	residential(char iblock, int ihouse, int ishops, bool ihotels, int ipayrent, bool igas, bool iwifi, bool ielectricity, const char* pname, const char* iname, int iposition, float price, float rent, char symbol) :property(pname, iname, iposition, price, rent, symbol)
	{

		block = iblock;
		house = ihouse;
		shops = ishops;
		hotel = ihotels;
		payrent = ipayrent;
		gas = igas;
		wifi = iwifi;
		electricity = ielectricity;
	}
	residential(const residential& s) :property(s)
	{
		shops = s.shops;
		gas = s.gas;
		electricity = s.electricity;
		block = s.block;
		house = s.house;
		hotel = s.hotel;
		wifi = s.wifi;
		payrent = s.payrent;
	}
	bool getwifi()
	{
		return wifi;
	}
	bool getelectricity()
	{
		return electricity;
	}
	bool getgas()
	{
		return gas;
	}
	float getpayrent()
	{
		return payrent;
	}
	char getblock()
	{
		return block;
	}
	int gethouse()
	{
		return house;
	}
	int getshops()
	{
		return shops;
	}
	bool gethotel()
	{
		return hotel;
	}
	void sethouse(int x)
	{
		house = x;
	}
	void setpayrent(int x)
	{
		payrent = x;
	}
	void setshops(int x)
	{
		shops = x;
	}
	void setblock(char x)
	{
		block = x;
	}
	void sethotel(int x)
	{
		hotel = x;
	}
	void setgas(bool x)
	{
		gas = x;
	}
	void setWifi(bool x)
	{
		gas = x;
	}
	void setElectricity(bool x)
	{
		electricity = x;
	}

	//prints all details of residencies
	void printresidential()
	{
		cout << "Your block is " << block << endl;
		cout << "Your property name is " << getpropertyname() << endl;
		cout << "Your price of property is " << getprice() << endl;
		cout << "This property is owned by" << getplayersymbol() << endl;
		cout << "Properties position on the board is " << getPosition() << endl;
		cout << "Properties full address is " << getfullname() << endl;
		if (getmortaged() == true)
		{
			cout << "Property is morgaged" << endl;
		}
		cout << "Your number of houses are " << house << endl;
		cout << "Your number of shops are " << shops;
		if (hotel == true)
		{
			cout << "Your have a hotel on this property" << endl;
		}
		if (gas == true)
		{
			cout << "You have gas connection on this property " << endl;
		}
		if (wifi == true)
		{
			cout << "You have wifi connection on this property" << endl;
		}
		if (electricity == true)
		{
			cout << "You have electrcity connection on this property" << endl;
		}
	}
};
class player
{
	char* playername;
	char symbol;//symbol of the player
	int position;//position on the board relative to 40
	float funds;//how many funds in total does the player have
	property** properties;//these are the properties owned by the player
	int propertyowned;
	residential** residencies;//use to save the residential properties owned by player
	int resowned;//number of residencies owned
	int hotelowned;
	bool getoutofJail;
public:
	/* default constructor*/
	player()
	{
		playername = nullptr;
		symbol = '\0';
		position = 0;
		funds = 0.0;
		properties = nullptr;
		propertyowned = 0;
		getoutofJail = 0;
		hotelowned = 0;
		residencies = nullptr;
		resowned = 0;
	}
	/* parametrized constructor*/
	player(const char* iplayername, char isymbol, int iposition, float ifunds, bool x, int h)
	{
		playername = new char[strlen(iplayername) + 1];
		for (int i = 0; i < strlen(iplayername); i++)
		{
			playername[i] = iplayername[i];
		}
		playername[strlen(iplayername)] = '\0';
		symbol = isymbol;
		position = iposition;
		funds = ifunds;
		propertyowned = 0;
		getoutofJail = 0;
		hotelowned = 0;
	}
	/* copy constructor*/
	player(player& obj)
	{
		playername = new char[strlen(obj.playername) + 1];
		for (int i = 0; i < strlen(obj.playername); i++)
		{
			playername[i] = obj.playername[i];
		}
		propertyowned = obj.propertyowned;
		for (int i = 0; i < propertyowned; i++)
		{
			properties[i] = obj.properties[i];
		}
		resowned = obj.resowned;
		for (int i = 0; i < propertyowned; i++)
		{
			residencies[i] = obj.residencies[i];
		}
		playername[strlen(obj.playername)] = '\0';
		symbol = obj.symbol;
		hotelowned = obj.hotelowned;
		position = obj.position;
		funds = obj.funds;
		propertyowned = obj.propertyowned;
		getoutofJail = obj.getoutofJail;
	}
	/* used to output*/
	friend ostream& operator <<(ostream& out, player& obj)
	{
		out << "Player your info as follows " << endl;
		out << "Your symbol is " << obj.symbol << endl;
		out << "Your position on the board currently is " << obj.position << endl;
		out << "Your amount of funds right now are " << obj.funds << endl;
		out << "Your total no.of properties:" << obj.propertyowned << endl;
		return out;
	}
	void addresidency(const residential& obj)
	{
		if (resowned == 0)
		{
			resowned++;
			residencies = new residential * [1];
			residencies[0] = new residential(obj);
		}
		else
		{

			residential* temp = new residential[resowned];


			for (int i = 0; i < resowned; i++)
			{
				temp[i] = residencies[i][0];
			}
			for (int i = 0; i < resowned; i++)
			{
				delete[] residencies[i];
			}
			delete[]residencies;
			residencies = new residential * [resowned + 1];
			for (int i = 0; i < resowned; i++)
			{
				residencies[i] = new residential(temp[i]);
			}
			delete[]temp;
			temp = nullptr;
			residencies[resowned] = new residential(obj);
			resowned++;
		}
	}
	void addproperty(const property& obj)
	{
		if (propertyowned == 0)
		{
			propertyowned++;
			properties = new property * [1];
			properties[0] = new property(obj);
		}
		else
		{
			property* temp = new property[propertyowned];
			for (int i = 0; i < propertyowned; i++)
			{
				temp[i] = *properties[i];
			}
			for (int i = 0; i < propertyowned; i++)
			{
				delete properties[i];
			}
			delete[]properties;
			properties = nullptr;
			properties = new property * [propertyowned + 1];
			for (int i = 0; i < propertyowned; i++)
			{
				properties[i] = new property(temp[i]);
			}
			delete[]temp;
			temp = nullptr;
			properties[propertyowned] = new property(obj);
			propertyowned++;
		}
	}
	void printplayer()
	{
		cout << "Your player name is " << playername << endl;
		cout << "Your player symbol is " << symbol << endl;
		cout << "Your position on thhe board is " << position << endl;//position on the board relative to 40
		cout << "Your current amount of funds are " << funds << endl;//how many funds in total does the player have
		cout << "Your number of properties are " << propertyowned << endl;
		cout << "They are as follows" << endl;
		for (int i = 0; i < propertyowned; i++)
		{
			properties[i][0].printpropertyinfo();
		}
		cout << "Your number of residencies are " << resowned << endl;
		cout << "They are as follows" << endl;
		for (int i = 0; i < resowned; i++)
		{
			residencies[i][0].printresidential();
		}

		cout << "Number of hotels you have are " << hotelowned << endl;
		// cout<<getoutofJail;//
	}
	int gethotelOwned()
	{
		return hotelowned;
	}
	void sethotelOwned(int x)
	{
		hotelowned = x;
	}
	void incrementHotelOwned()
	{
		hotelowned++;
	}
	void decrementHotelOwned()
	{
		hotelowned--;
	}
	void setGetoutOfJail(bool x)
	{
		getoutofJail = x;
	}
	bool returnGetoutofJail()
	{
		return getoutofJail;
	}
	void incrementpropertyowned()
	{
		propertyowned++;
	}
	void decrementPropertyOwned()
	{
		propertyowned--;
	}
	int getpropertyOwned()
	{
		return propertyowned;
	}
	void setSymbol(char x)
	{
		symbol = x;
	}
	char getSymbol()
	{
		return symbol;
	}
	void setpropertyowned(int x)
	{
		propertyowned = x;
	}
	/* if funds are to be added from the main*/
	void addfund(float add)
	{
		funds = funds + add;
	}
	/*if funds are to be subtracted from the main*/
	void subtractfund(float subtract)
	{
		funds = funds - subtract;
	}
	/* To Set Position On board after Roll of a Dice*/
	void setposition(int a, bool& round)
	{
		position = position + a;
		if (position >= 40)
		{
			position = position % 10;
			round = true;
		}
	}

	/*To Set Postion at specific index*/
	void specific(int b)
	{
		position = 0;
		position = b;
	}
	void stpos(int f)
	{
		position = position - f;
		if (position <= -1)
		{
			position = position + 40;
		}
	}
	int getposition()
	{
		return position;
	}
	void setcash(float x)
	{
		this->funds = x;
	}
	float getcash()
	{
		return funds;
	}
	/* destructor*/
	~player()
	{
		cout << "~Player was called" << endl;
	}
};
class community : public box
{
public:
	community(const char* iname, int iposition) :box(iname, iposition, '\0')
	{
	}

};
void drawnchest(player& obj, int c)
{

	if (c == 1)
	{
		cout << "Advance to Go and Collect 500 PK " << endl;

		obj.specific(0);
		obj.addfund(500);
	}
	if (c == 2)
	{
		cout << "Bank will pay you 200 PKR " << endl;
		obj.addfund(200);
	}
	if (c == 3)
	{
		cout << "Pay Doctor Fee 200 PKR ";
		obj.subtractfund(200);
	}
	if (c == 4)
	{
		cout << "From Sale you got 50 PKR " << endl;
		obj.addfund(50);
	}
	if (c == 5)
	{
		cout << "Income Tax refund collect 150 PKR " << endl;
		obj.addfund(150);
	}
	if (c == 6)
	{
		cout << "Your health insurance matures collect 200 PKR " << endl;
		obj.addfund(200);
	}
	if (c == 7)
	{
		cout << "Pay donation to Hospital 100 PKR " << endl;
		obj.subtractfund(100);
	}
	if (c == 8)
	{
		cout << "Pay Student tax of 200 PKR " << endl;
		obj.subtractfund(200);
	}
	if (c == 9)
	{
		cout << "Collect 50 PKR for your services " << endl;
		obj.addfund(50);
	}
	if (c == 10)
	{
		cout << "You won prize money of 300 PKR " << endl;
		obj.addfund(300);
	}
	if (c == 11)
	{
		cout << "Pay water bill of 50 PKR " << endl;
		obj.subtractfund(50);
	}
	if (c == 12)
	{
		cout << "Pay electricity bill of 80 PKR " << endl;
		obj.subtractfund(80);
	}
	if (c == 13)
	{
		cout << "Pay internet bill 50 PKR " << endl;
		obj.subtractfund(50);
	}

}
class chance : public box
{
public:
	chance(const char* iname, int iposition) :box(iname, iposition, '\0')
	{
	}
};
void drawnchance(player* abj, int a, int b, int d, property** prs, int di)    // d for random no to select a card//  a  means total no of players, b means current player index on array
{
	if (d == 1)
	{
		cout << "Advance to Go and Collect 300 PKR " << endl;
		abj[b].specific(0);
		abj[b].addfund(300);
	}
	if (d == 2)
	{
		cout << "Advance to DHA Phase A " << endl;
		abj[b].specific(26);
	}
	if (d == 3)
	{
		cout << "Advance token to nearest utility.If unowned by from Bank.If owned, pay to owner 5X the amount shown on dice" << endl;
		if (abj[b].getposition() == 7)
		{
			cout << "Your Nearest Utility is Lesco " << endl;
			abj[b].specific(12);
			if (prs[4][0].getplayersymbol() != '\0')
			{
				abj[b].subtractfund((di * 5));
				for (int da = 0; da < a; ++da)
				{
					if (abj[da].getSymbol() == prs[4][0].getplayersymbol())
					{
						abj[da].addfund(5 * di);
					}
				}
			}
		}

		if (abj[b].getposition() == 22)
		{
			cout << "Your Nearest Utility is Ptcl " << endl;
			abj[b].specific(28);
			if (prs[5][0].getplayersymbol() != '\0')
			{
				abj[b].subtractfund((di * 5));
				for (int da = 0; da < a; ++da)
				{
					if (abj[da].getSymbol() == prs[5][0].getplayersymbol())
					{
						abj[da].addfund(5 * di);
					}
				}
			}
		}
		if (abj[b].getposition() == 36)
		{
			cout << "Your Nearest Utility is Wasa " << endl;
			abj[b].specific(37);
			if (prs[6][0].getplayersymbol() != '\0')
			{
				abj[b].subtractfund((di * 5));
				for (int da = 0; da < a; ++da)
				{
					if (abj[da].getSymbol() == prs[6][0].getplayersymbol())
					{
						abj[da].addfund(5 * di);
					}
				}
			}
		}
	}

	if (d == 4)
	{
		cout << "Advance token to nearest Station.If unowned by from Bank.If owned, pay to owner the double amount" << endl;
		if (abj[b].getposition() == 7)
		{
			cout << "Your Nearest Station is Metro Station " << endl;
			abj[b].specific(5);
			if (prs[0][0].getplayersymbol() != '\0')
			{
				abj[b].subtractfund(200);
				for (int da = 0; da < a; ++da)
				{
					if (abj[da].getSymbol() == prs[0][0].getplayersymbol())
					{
						abj[da].addfund(200);
					}
				}
			}
		}

		if (abj[b].getposition() == 22)
		{
			cout << "Your Nearest Station is Railway Station " << endl;
			abj[b].specific(25);
			if (prs[2][0].getplayersymbol() != '\0')
			{
				abj[b].subtractfund(350);
				for (int da = 0; da < a; ++da)
				{
					if (abj[da].getSymbol() == prs[2][0].getplayersymbol())
					{
						abj[da].addfund(350);
					}
				}
			}
		}
		if (abj[b].getposition() == 36)
		{
			cout << "Your Nearest Station is Orange Station " << endl;
			abj[b].specific(35);
			if (prs[3][0].getplayersymbol() != '\0')
			{
				abj[b].subtractfund(350);
				for (int da = 0; da < a; ++da)
				{
					if (abj[da].getSymbol() == prs[3][0].getplayersymbol())
					{
						abj[da].addfund(350);
					}
				}
			}
		}

	}
	if (d == 5)
	{
		cout << "Advance token to nearest Station. If unowned by from Bank. If owned, pay to owner the double amount" << endl;
		if (abj[b].getposition() == 7)
		{
			cout << "Your Nearest Station is Metro Station " << endl;
			abj[b].specific(5);
			if (prs[0][0].getplayersymbol() != '\0')
			{
				abj[b].subtractfund(200);
				for (int da = 0; da < a; ++da)
				{
					if (abj[da].getSymbol() == prs[0][0].getplayersymbol())
					{
						abj[da].addfund(200);
					}
				}
			}
		}

		if (abj[b].getposition() == 22)
		{
			cout << "Your Nearest Station is Railway Station " << endl;
			abj[b].specific(25);
			if (prs[2][0].getplayersymbol() != '\0')
			{
				abj[b].subtractfund(350);
				for (int da = 0; da < a; ++da)
				{
					if (abj[da].getSymbol() == prs[2][0].getplayersymbol())
					{
						abj[da].addfund(350);
					}
				}
			}
		}
		if (abj[b].getposition() == 36)
		{
			cout << "Your Nearest Station is Orange Station " << endl;
			abj[b].specific(35);
			if (prs[3][0].getplayersymbol() != '\0')
			{
				abj[b].subtractfund(350);
				for (int da = 0; da < a; ++da)
				{
					if (abj[da].getSymbol() == prs[3][0].getplayersymbol())
					{
						abj[da].addfund(350);
					}
				}
			}
		}

	}
	if (d == 6)
	{
		cout << "Advance to Model Town A. If you pass Go collect 300 PKR " << endl;
		if (abj[b].getposition() >= 17)
		{
			abj[b].addfund(300);
			abj[b].specific(16);
		}
		else
		{
			abj[b].specific(16);
		}
	}
	if (d == 7)
	{
		cout << "Bank pay you 100 PKR " << endl;
		abj[b].addfund(100);
	}
	if (d == 8)
	{
		cout << "Get out of Jail. May be kept until needed or sold for 500 PKR " << endl;

	}
	if (d == 9)
	{
		cout << "Go back 4 blocks " << endl;
		abj[b].stpos(4);
	}
	if (d == 10)
	{
		cout << "Make repair on your property. For each house pay 50 PKR For each hotel pay 100 PKR " << endl;

	}
	if (d == 11)
	{
		cout << "Pay small Tax of 25 PKR " << endl;
		abj[b].subtractfund(25);
	}
	if (d == 12)
	{
		cout << "You have been elected as chairperson. Pay 25 PKR to each player." << endl;
		abj[b].subtractfund(25 * (a - 1));
		for (int q = 0; q < a; ++q)
		{
			if (q != b)
			{
				abj[q].addfund(25);
			}
		}
	}
	if (d == 13)
	{
		cout << "Collect 150 PKR from the Bank " << endl;
		abj[b].addfund(150);
	}
	if (d == 14)
	{
		cout << "Advance to Railway and not pay any Tax there" << endl;
		abj[b].specific(25);
	}
	if (d == 15)
	{
		cout << "Advance token to Metro Station " << endl;
		abj[b].specific(5);
	}
}
class taxes : public box
{
	float amount; //amount of tax to be withdrawn
public:
	taxes()
	{
		amount = 0;
	}
	taxes(float iamount, int iposition, const char* iname) :box(iname, iposition, '\0')
	{
		amount = iamount;
	}
};
class extra : public box
{
	bool startbox;
	bool jailbox;
	bool parkingbox;
	bool setjailbox;
public:
	extra()
	{
		startbox = false;
		jailbox = false;
		parkingbox = false;
		setjailbox = false;
	}
	extra(int iposition, bool istartbox, bool ijailbox, const char* iname, bool iparkingbox, bool isetjailbox) : box(iname, iposition, '\0')
	{
		startbox = istartbox;
		jailbox = ijailbox;
		parkingbox = iparkingbox;
		setjailbox = isetjailbox;
	}
};
bool isstringsame(const char* a, const char* b)
{
	if (strlen(a) != strlen(b)) {
		return false;
	}
	else if (strlen(a) == strlen(b)) {
		for (int i = 0; i < strlen(a); i++) {
			if (a[i] != b[i]) {
				return false;
			}
		}
	}
	return true;
}
//Index checking functions:
int checkproIndex(int x)
{
	int y;
	if (x == 5)
	{
		y = 0;
		return y;
	}
	else if (x == 12) {
		y = 4;
		return y;
	}
	else if (x == 15) {
		y = 1;
		return y;
	}
	else if (x == 25) {
		y = 2;
		return y;
	}
	else if (x == 28) {
		y = 5;
		return y;
	}
	else if (x == 35) {
		y = 3;
		return y;
	}
	else if (x == 37) {
		y = 6;
		return y;
	}
	else if (x == 39) {
		y = 7;
		return y;
	}

}
int checkResPos(int x) {
	int y;
	if (x == 1) {
		y = 0;
		return y;
	}
	else if (x == 3) {
		y = 1;
		return y;
	}
	else if (x == 6) {
		y = 2;
		return y;
	}
	else if (x == 8) {
		y = 3;
		return y;
	}
	else if (x == 9) {
		y = 4;
		return y;
	}
	else if (x == 11) {
		y = 5;
		return y;
	}
	else if (x == 13) {
		y = 6;
		return y;
	}
	else if (x == 14) {
		y = 7;
		return y;
	}
	else if (x == 16) {
		y = 8;
		return y;
	}
	else if (x == 18) {
		y = 9;
		return y;
	}
	else if (x == 19) {
		y = 10;
		return y;
	}
	else if (x == 21) {
		y = 11;
		return y;
	}
	else if (x == 23) {
		y = 12;
		return y;
	}
	else if (x == 24) {
		y = 13;
		return y;
	}
	else if (x == 26) {
		y = 14;
		return y;
	}
	else if (x == 27) {
		y = 15;
		return y;
	}
	else if (x == 29) {
		y = 16;
		return y;
	}
	else if (x == 31) {
		y = 17;
		return y;
	}
	else if (x == 32) {
		y = 18;
		return y;
	}
	else if (x == 34)
	{
		y = 19;
		return y;
	}

}
int checkExtrasPos(int x)
{
	int y;
	if (x == 0) {
		y = 0;
		return y;
	}
	else if (x == 10) {
		y = 1;
		return y;
	}
	else if (x == 20) {
		y = 2;
		return y;
	}
	else if (x == 30) {
		y = 3;
		return y;
	}
}
int checkTaxPos(int x) {
	int y;
	if (x == 4) {
		y = 0;
		return y;
	}
	else if (x == 38) {
		y = 1;
		return y;
	}
}
int checkCommunityPos(int x) {
	int y;
	if (x == 2) {
		y = 0;
		return y;
	}
	else if (x == 17) {
		y = 1;
		return y;
	}
	else if (x == 33) {
		y = 2;
		return y;
	}
}
int checkChancePos(int x) {
	int y;
	if (x == 7) {
		y = 0;
		return y;
	}
	else if (x == 22) {
		y = 1;
		return y;
	}
	else if (x == 36) {
		y = 2;
		return y;
	}
}
//MOVEMENT FEATURES:
int rollDice() {
	int x = 0;
	//srand(time(NULL));
	//x = rand() % 6 + 1;
	cin >> x;
	return x;
}
int menu1()
{
	cout << "1.Play game!" << endl;
	cout << "2.Quit!" << endl;
	int x;
	cin >> x;
	return x;
}
//MENUS:
//if residency is free
void purchaseMenu(player& p, residential& y) {
	cout << "Buy this property? 1.Yes 2.No" << endl;
	int choice;
	cin >> choice;
	if (choice == 1)
	{
		if (y.getprice() > p.getcash()) {
			cout << "Cant buy this not enough cash!" << endl;
		}
		else {
			y.assignsymbol(p.getSymbol());
			p.subtractfund(y.getprice());
			//p.incrementpropertyowned();
			p.addresidency(y);

		}
	}


}
bool checkPropGroupStat(player& x, char* arr, residential** arr2)
{
	bool same = true;
	for (int i = 0; i < 20; i++) {
		if (strcmp(arr2[i][0].getpropertyname(), arr) == true) {
			int j = i;
			if (arr2[j]->getplayersymbol() == x.getSymbol())
			{
				same = true;
			}
			else
			{
				same = false;
				return same;
			}
		}

	}

	return same;
}
void upgrade(player& x, residential& y, residential** arr)
{
	cout << "For property: " << y.getpropertyname() << endl;
	//add groupsame check here
	bool groupsame = false;
	groupsame = checkPropGroupStat(x, y.getpropertyname(), arr);
	if (groupsame == true) {
		cout << "Build a property(1) or Add Utility(2) " << endl;
		int select = 0;
		cin >> select;
		if (select == 1) {

			if (y.gethouse() == 0) {
				// building first time//
				y.sethouse(y.gethouse() + 1);
				y.setpayrent(y.getpayrent() + (y.getrent() / 100) * 30);
				x.setcash(x.getcash() - 100);
				cout << "House added!" << endl;
			}
			else 
			{
				if (y.gethouse() == 3) 
				{
					y.setshops(y.getshops() + 1);
					y.setpayrent(y.getpayrent() + 2 * y.getpayrent());
					x.setcash(x.getcash() - 300);
					cout << "Shops added!" << endl;
				}
				if (y.gethouse() == 4 && y.getshops() == 2) {
					y.sethotel(1);
					y.setpayrent(y.getpayrent() + (y.getpayrent() / 100) * 20);
					x.setcash(x.getcash() - 300);
					cout << "Hotel added!" << endl;
				}
				if (y.gethouse() < 3) {
					y.sethouse(y.gethouse() + 1);
					y.setpayrent(y.getpayrent() + (y.getpayrent() / 100) * 30);
					x.setcash(x.getcash() - 100);
					cout << "House added!" << endl;
				}
			}
		}
		else if (select == 2) {
			cout << "Which utility ? " << endl;
			cout << "1. GAS " << endl;
			cout << "2. Electricity " << endl;
			cout << "3. WiFi " << endl;
			int which = 0;
			cin >> which;
			if (which == 1) 
			{
				if (!y.getgas())
				{
					y.setgas(1);
					y.setpayrent(y.getpayrent() + (y.getpayrent() / 100) * 20);
					x.setcash(x.getcash() - 50);
				}
				if (y.getgas())
				{
					cout << "Already added " << endl;
				}
			}
			if (which == 2) 
			{
				if (!y.getelectricity()) 
				{
					y.setElectricity(1);
					y.setpayrent(y.getpayrent() + (y.getpayrent() / 100) * 20);
					x.setcash(x.getcash() - 50);
				}
				if (y.getelectricity()) 
				{
					cout << "Already added " << endl;
				}
			}
			if (which == 3) 
			{
				if (!y.getwifi())
				{
					y.setWifi(1);
					y.setpayrent(y.getpayrent() + (y.getpayrent() / 100) * 10);
					x.setcash(x.getcash() - 30);
				}
				if (y.getwifi()) 
				{
					cout << "Already added " << endl;
				}
			}
		}
	}
	else
	{
		cout << "First acquire all sets of this property to build houses/shops/hotels!" << endl;
	}
}
//if property is free
void purchaseMenu2(player& p, property& y) {
	cout << "Buy this property? 1.Yes 2.No" << endl;
	int x;
	cin >> x;
	if (x == 1)
	{
		if (y.getprice() > p.getcash()) {
			cout << "Cant buy this not enough funds!" << endl;
		}
		else {
			y.assignsymbol(p.getSymbol());
			p.subtractfund(y.getprice());
			//p.incrementpropertyowned();
			p.addproperty(y);
		}
	}
}
//if residence is owned by another player
void purchaseMenu3(player& p, player& p2, residential& y) {
	cout << "1.Buy this residency from other player/ 2.Pay rent!" << endl;
	int choice;
	cin >> choice;
	if (choice == 1) {
		int price;//price
		cout << "Enter desired price:" << endl;
		cin >> price;

		if (p.getcash() >= price) {
			y.assignsymbol(p.getSymbol());
			p.subtractfund(price);
			p.addresidency(y);
			//remove function required
		}
		else {
			cout << "Not enough cash!" << endl;
		}
	}
	else {
		cout << "Property already owned by another player! Pay rent" << endl;
		cout << "Rent Deducted " << endl;
		p.subtractfund(y.getpayrent());
		p2.addfund(y.getpayrent());
	}


}
void purchaseMenu4(player& p, player& p2, property& y) {
	cout << "Property already owned by another player!  Pay rent" << endl;

	cout << "Rent Deducted " << endl;
	p.subtractfund(y.getrent());
	p2.addfund(y.getrent());

}
/*void upgradeMenu(player& p, residential& y, residential** arr) 
{
y.upgrade(p, arr);
}*/
//CHECKING FUNCTIONS
bool checkTYPE(char** arr, const char* a, int pos) {
	bool found = true;
	for (int i = 0; arr[pos][i] != '\0'; i++) {
		if (arr[pos][i] != a[i]) {
			found = false;
			break;
		}
	}
	return found;
}
//CHECKING BANKRUPTCY
bool checkBankrupt(player& x, residential** arr, property** arr2, int& resSoldCheck, int& proSoldCheck) {
	bool bankrupt = false;
	if (x.getcash() <= 0) {
		if (x.getpropertyOwned() > 0) {
			cout << "Selling property to keep in game!" << endl;
			cout << "You have the following properties:" << endl;
			for (int i = 0; i < 20; i++) 
			{
				if (arr[i]->getplayersymbol() == x.getSymbol())
				{
					cout << arr[i]->getpropertyname() << arr[i]->getblock() << endl;
				}
			}
			for (int i = 0; i < 8; i++) {
				if (arr2[i]->getplayersymbol() == x.getSymbol()) {
					cout << arr2[i]->getpropertyname() << endl;;
				}
			}
			cout << "Which of these should we sell? 1.Residential 2.Property" << endl;
			int u;
			cin >> u;
			cout << "Name?" << endl;
			char temp[20];
			cin >> temp;
			int l = 0;
			char* name;
			for (int i = 0; temp[i] != '\0'; i++) {
				l++;
			}
			name = new char[l + 1];
			for (int i = 0; i < l; i++) {
				name[i] = temp[i];
			}
			name[l] = '\0';
			if (u == 1) {
				cout << "Block?" << endl;
				char b;
				cin >> b;
				for (int i = 0; i < 20; i++)
				{	
					if (isstringsame(arr[i][0].getpropertyname(), name) == true && arr[i][0].getblock() == b) {
						arr[i]->assignsymbol('\0');
						resSoldCheck = i;
						x.addfund(arr[i]->getprice());
					}
				}
			}
			else 
			{
				for (int i = 0; i < 8; i++) 
				{
					if (isstringsame(arr2[i][0].getpropertyname(), name) == true) 
					{
						arr2[i]->assignsymbol('\0');
						proSoldCheck = i;
						x.addfund(arr2[i]->getprice());
					}
				}
			}
			bankrupt = false;
			return bankrupt;
		}
		else {
			bankrupt = true;
			return bankrupt;
		}

	}
}
//CREATING NEW PLAYER ARRAY AFTER 1 PLAYER IS REMOVED:
void createArr(player* arr, int index, int& noofp, bool r) {
	int j = noofp - 1;
	player* parr = new player[noofp];

	for (int i = 0, x = 0; i < noofp; i++) {
		if (i != index) {
			parr[x].setcash(arr[i].getcash());
			parr[x].setGetoutOfJail(arr[i].returnGetoutofJail());
			parr[x].setposition(arr[i].getposition(), r);
			parr[x].setSymbol(arr[i].getSymbol());
			parr[x].sethotelOwned(arr[i].gethotelOwned());
			parr[x].setpropertyowned(arr[i].getpropertyOwned());
			x++;
		}
	}
	delete[]arr;
	arr = parr;
	noofp--;
}

//Print Funtion of Graphics
string PlayerCashString(int currentplayer, player* playerarray)
{
	string toDisplay = "Cash: ";
	toDisplay += to_string(playerarray[currentplayer - 1].getcash());
	return toDisplay;
}
//Player Symbol At Owned Property 
void setPlayerAtOwnedPropertyRes(sf::Sprite& n1, sf::Sprite& n3, sf::Sprite& n6, sf::Sprite& n8, sf::Sprite& n9, sf::Sprite& n11, sf::Sprite& n13, sf::Sprite& n14, sf::Sprite& n16, sf::Sprite& n18, sf::Sprite& n19, sf::Sprite& n21, sf::Sprite& n23, sf::Sprite& n24, sf::Sprite& n26, sf::Sprite& n28, sf::Sprite& n27, sf::Sprite& n29, sf::Sprite& n31, sf::Sprite& n32, sf::Sprite& n34, int maalikMakaan, int plaatNumber)
{
	if (plaatNumber == 1)
	{
		if (maalikMakaan == 1)
		{
			n1.setColor(sf::Color(189, 179, 29));
		}
		if (maalikMakaan == 2)
		{
			n1.setColor(sf::Color(205, 121, 59));
		}
		if (maalikMakaan == 3)
		{
			n1.setColor(sf::Color(54, 143, 87));
		}
		if (maalikMakaan == 4)
		{
			n1.setColor(sf::Color(193, 39, 49));
		}
		if (maalikMakaan == 5)
		{
			n1.setColor(sf::Color(45, 73, 156));
		}
	}
	else if (plaatNumber == 3)
	{
		if (maalikMakaan == 1)
		{
			n3.setColor(sf::Color(189, 179, 29));
		}
		if (maalikMakaan == 2)
		{
			n3.setColor(sf::Color(205, 121, 59));
		}
		if (maalikMakaan == 3)
		{
			n3.setColor(sf::Color(54, 143, 87));
		}
		if (maalikMakaan == 4)
		{
			n3.setColor(sf::Color(193, 39, 49));
		}
		if (maalikMakaan == 5)
		{
			n3.setColor(sf::Color(45, 73, 156));
		}
	}
	else if (plaatNumber == 6)
	{
		if (maalikMakaan == 1)
		{
			n6.setColor(sf::Color(189, 179, 29));
		}
		if (maalikMakaan == 2)
		{
			n6.setColor(sf::Color(205, 121, 59));
		}
		if (maalikMakaan == 3)
		{
			n6.setColor(sf::Color(54, 143, 87));
		}
		if (maalikMakaan == 4)
		{
			n6.setColor(sf::Color(193, 39, 49));
		}
		if (maalikMakaan == 5)
		{
			n6.setColor(sf::Color(45, 73, 156));
		}
	}
	else if (plaatNumber == 8)
	{
		if (maalikMakaan == 1)
		{
			n8.setColor(sf::Color(189, 179, 29));
		}
		if (maalikMakaan == 2)
		{
			n8.setColor(sf::Color(205, 121, 59));
		}
		if (maalikMakaan == 3)
		{
			n8.setColor(sf::Color(54, 143, 87));
		}
		if (maalikMakaan == 4)
		{
			n8.setColor(sf::Color(193, 39, 49));
		}
		if (maalikMakaan == 5)
		{
			n8.setColor(sf::Color(45, 73, 156));
		}
	}
	else if (plaatNumber == 9)
	{
		if (maalikMakaan == 1)
		{
			n9.setColor(sf::Color(189, 179, 29));
		}
		if (maalikMakaan == 2)
		{
			n9.setColor(sf::Color(205, 121, 59));
		}
		if (maalikMakaan == 3)
		{
			n9.setColor(sf::Color(54, 143, 87));
		}
		if (maalikMakaan == 4)
		{
			n9.setColor(sf::Color(193, 39, 49));
		}
		if (maalikMakaan == 5)
		{
			n9.setColor(sf::Color(45, 73, 156));
		}
	}
	else if (plaatNumber == 11)
	{
		if (maalikMakaan == 1)
		{
			n11.setColor(sf::Color(189, 179, 29));
		}
		if (maalikMakaan == 2)
		{
			n11.setColor(sf::Color(205, 121, 59));
		}
		if (maalikMakaan == 3)
		{
			n11.setColor(sf::Color(54, 143, 87));
		}
		if (maalikMakaan == 4)
		{
			n11.setColor(sf::Color(193, 39, 49));
		}
		if (maalikMakaan == 5)
		{
			n11.setColor(sf::Color(45, 73, 156));
		}
	}
	else if (plaatNumber == 13)
	{
		if (maalikMakaan == 1)
		{
			n13.setColor(sf::Color(189, 179, 29));
		}
		if (maalikMakaan == 2)
		{
			n13.setColor(sf::Color(205, 121, 59));
		}
		if (maalikMakaan == 3)
		{
			n13.setColor(sf::Color(54, 143, 87));
		}
		if (maalikMakaan == 4)
		{
			n13.setColor(sf::Color(193, 39, 49));
		}
		if (maalikMakaan == 5)
		{
			n13.setColor(sf::Color(45, 73, 156));
		}
	}
	else if (plaatNumber == 14)
	{
		if (maalikMakaan == 1)
		{
			n14.setColor(sf::Color(189, 179, 29));
		}
		if (maalikMakaan == 2)
		{
			n14.setColor(sf::Color(205, 121, 59));
		}
		if (maalikMakaan == 3)
		{
			n14.setColor(sf::Color(54, 143, 87));
		}
		if (maalikMakaan == 4)
		{
			n14.setColor(sf::Color(193, 39, 49));
		}
		if (maalikMakaan == 5)
		{
			n14.setColor(sf::Color(45, 73, 156));
		}
	}
	else if (plaatNumber == 16)
	{
		if (maalikMakaan == 1)
		{
			n16.setColor(sf::Color(189, 179, 29));
		}
		if (maalikMakaan == 2)
		{
			n16.setColor(sf::Color(205, 121, 59));
		}
		if (maalikMakaan == 3)
		{
			n16.setColor(sf::Color(54, 143, 87));
		}
		if (maalikMakaan == 4)
		{
			n16.setColor(sf::Color(193, 39, 49));
		}
		if (maalikMakaan == 5)
		{
			n16.setColor(sf::Color(45, 73, 156));
		}
	}
	else if (plaatNumber == 18)
	{
		if (maalikMakaan == 1)
		{
			n18.setColor(sf::Color(189, 179, 29));
		}
		if (maalikMakaan == 2)
		{
			n18.setColor(sf::Color(205, 121, 59));
		}
		if (maalikMakaan == 3)
		{
			n18.setColor(sf::Color(54, 143, 87));
		}
		if (maalikMakaan == 4)
		{
			n18.setColor(sf::Color(193, 39, 49));
		}
		if (maalikMakaan == 5)
		{
			n18.setColor(sf::Color(45, 73, 156));
		}
	}
	else if (plaatNumber == 19)
	{
		if (maalikMakaan == 1)
		{
			n19.setColor(sf::Color(189, 179, 29));
		}
		if (maalikMakaan == 2)
		{
			n19.setColor(sf::Color(205, 121, 59));
		}
		if (maalikMakaan == 3)
		{
			n19.setColor(sf::Color(54, 143, 87));
		}
		if (maalikMakaan == 4)
		{
			n19.setColor(sf::Color(193, 39, 49));
		}
		if (maalikMakaan == 5)
		{
			n19.setColor(sf::Color(45, 73, 156));
		}
	}
	else if (plaatNumber == 21)
	{
		if (maalikMakaan == 1)
		{
			n21.setColor(sf::Color(189, 179, 29));
		}
		if (maalikMakaan == 2)
		{
			n21.setColor(sf::Color(205, 121, 59));
		}
		if (maalikMakaan == 3)
		{
			n21.setColor(sf::Color(54, 143, 87));
		}
		if (maalikMakaan == 4)
		{
			n21.setColor(sf::Color(193, 39, 49));
		}
		if (maalikMakaan == 5)
		{
			n21.setColor(sf::Color(45, 73, 156));
		}
	}
	else if (plaatNumber == 23)
	{
		if (maalikMakaan == 1)
		{
			n23.setColor(sf::Color(189, 179, 29));
		}
		if (maalikMakaan == 2)
		{
			n23.setColor(sf::Color(205, 121, 59));
		}
		if (maalikMakaan == 3)
		{
			n23.setColor(sf::Color(54, 143, 87));
		}
		if (maalikMakaan == 4)
		{
			n23.setColor(sf::Color(193, 39, 49));
		}
		if (maalikMakaan == 5)
		{
			n23.setColor(sf::Color(45, 73, 156));
		}
	}
	else if (plaatNumber == 24)
	{
		if (maalikMakaan == 1)
		{
			n24.setColor(sf::Color(189, 179, 29));
		}
		if (maalikMakaan == 2)
		{
			n24.setColor(sf::Color(205, 121, 59));
		}
		if (maalikMakaan == 3)
		{
			n24.setColor(sf::Color(54, 143, 87));
		}
		if (maalikMakaan == 4)
		{
			n24.setColor(sf::Color(193, 39, 49));
		}
		if (maalikMakaan == 5)
		{
			n24.setColor(sf::Color(45, 73, 156));
		}
	}
	else if (plaatNumber == 26)
	{
		if (maalikMakaan == 1)
		{
			n26.setColor(sf::Color(189, 179, 29));
		}
		if (maalikMakaan == 2)
		{
			n26.setColor(sf::Color(205, 121, 59));
		}
		if (maalikMakaan == 3)
		{
			n26.setColor(sf::Color(54, 143, 87));
		}
		if (maalikMakaan == 4)
		{
			n26.setColor(sf::Color(193, 39, 49));
		}
		if (maalikMakaan == 5)
		{
			n26.setColor(sf::Color(45, 73, 156));
		}
	}
	else if (plaatNumber == 27)
	{
		if (maalikMakaan == 1)
		{
			n27.setColor(sf::Color(189, 179, 29));
		}
		if (maalikMakaan == 2)
		{
			n27.setColor(sf::Color(205, 121, 59));
		}
		if (maalikMakaan == 3)
		{
			n27.setColor(sf::Color(54, 143, 87));
		}
		if (maalikMakaan == 4)
		{
			n27.setColor(sf::Color(193, 39, 49));
		}
		if (maalikMakaan == 5)
		{
			n27.setColor(sf::Color(45, 73, 156));
		}
	}
	else if (plaatNumber == 29)
	{
		if (maalikMakaan == 1)
		{
			n29.setColor(sf::Color(189, 179, 29));
		}
		if (maalikMakaan == 2)
		{
			n29.setColor(sf::Color(205, 121, 59));
		}
		if (maalikMakaan == 3)
		{
			n29.setColor(sf::Color(54, 143, 87));
		}
		if (maalikMakaan == 4)
		{
			n29.setColor(sf::Color(193, 39, 49));
		}
		if (maalikMakaan == 5)
		{
			n29.setColor(sf::Color(45, 73, 156));
		}
	}
	else if (plaatNumber == 31)
	{
		if (maalikMakaan == 1)
		{
			n31.setColor(sf::Color(189, 179, 29));
		}
		if (maalikMakaan == 2)
		{
			n31.setColor(sf::Color(205, 121, 59));
		}
		if (maalikMakaan == 3)
		{
			n31.setColor(sf::Color(54, 143, 87));
		}
		if (maalikMakaan == 4)
		{
			n31.setColor(sf::Color(193, 39, 49));
		}
		if (maalikMakaan == 5)
		{
			n31.setColor(sf::Color(45, 73, 156));
		}
	}
	else if (plaatNumber == 32)
	{
		if (maalikMakaan == 1)
		{
			n32.setColor(sf::Color(189, 179, 29));
		}
		if (maalikMakaan == 2)
		{
			n32.setColor(sf::Color(205, 121, 59));
		}
		if (maalikMakaan == 3)
		{
			n32.setColor(sf::Color(54, 143, 87));
		}
		if (maalikMakaan == 4)
		{
			n32.setColor(sf::Color(193, 39, 49));
		}
		if (maalikMakaan == 5)
		{
			n32.setColor(sf::Color(45, 73, 156));
		}
	}
	else if (plaatNumber == 34)
	{
		if (maalikMakaan == 1)
		{
			n34.setColor(sf::Color(189, 179, 29));
		}
		if (maalikMakaan == 2)
		{
			n34.setColor(sf::Color(205, 121, 59));
		}
		if (maalikMakaan == 3)
		{
			n34.setColor(sf::Color(54, 143, 87));
		}
		if (maalikMakaan == 4)
		{
			n34.setColor(sf::Color(193, 39, 49));
		}
		if (maalikMakaan == 5)
		{
			n34.setColor(sf::Color(45, 73, 156));
		}
	}
}
void setPlayerAtOwnedPropertyNonRes(sf::Sprite& n5, sf::Sprite& n12, sf::Sprite& n15, sf::Sprite& n25, sf::Sprite& n28, sf::Sprite& n35, sf::Sprite& n37, sf::Sprite& n39, int maalikMakaan, int plaatNumber)
{
	if (plaatNumber == 5)
	{
		if (maalikMakaan == 1)
		{
			n5.setColor(sf::Color(189, 179, 29));
		}
		if (maalikMakaan == 2)
		{
			n5.setColor(sf::Color(205, 121, 59));
		}
		if (maalikMakaan == 3)
		{
			n5.setColor(sf::Color(54, 143, 87));
		}
		if (maalikMakaan == 4)
		{
			n5.setColor(sf::Color(193, 39, 49));
		}
		if (maalikMakaan == 5)
		{
			n5.setColor(sf::Color(45, 73, 156));
		}
	}
	else if (plaatNumber == 12)
	{
		if (maalikMakaan == 1)
		{
			n12.setColor(sf::Color(189, 179, 29));
		}
		if (maalikMakaan == 2)
		{
			n12.setColor(sf::Color(205, 121, 59));
		}
		if (maalikMakaan == 3)
		{
			n12.setColor(sf::Color(54, 143, 87));
		}
		if (maalikMakaan == 4)
		{
			n12.setColor(sf::Color(193, 39, 49));
		}
		if (maalikMakaan == 5)
		{
			n12.setColor(sf::Color(45, 73, 156));
		}
	}
	else if (plaatNumber == 15)
	{
		if (maalikMakaan == 1)
		{
			n15.setColor(sf::Color(189, 179, 29));
		}
		if (maalikMakaan == 2)
		{
			n15.setColor(sf::Color(205, 121, 59));
		}
		if (maalikMakaan == 3)
		{
			n15.setColor(sf::Color(54, 143, 87));
		}
		if (maalikMakaan == 4)
		{
			n15.setColor(sf::Color(193, 39, 49));
		}
		if (maalikMakaan == 5)
		{
			n15.setColor(sf::Color(45, 73, 156));
		}
	}
	else if (plaatNumber == 25)
	{
		if (maalikMakaan == 1)
		{
			n25.setColor(sf::Color(189, 179, 29));
		}
		if (maalikMakaan == 2)
		{
			n25.setColor(sf::Color(205, 121, 59));
		}
		if (maalikMakaan == 3)
		{
			n25.setColor(sf::Color(54, 143, 87));
		}
		if (maalikMakaan == 4)
		{
			n25.setColor(sf::Color(193, 39, 49));
		}
		if (maalikMakaan == 5)
		{
			n25.setColor(sf::Color(45, 73, 156));
		}
	}
	else if (plaatNumber == 28)
	{
		if (maalikMakaan == 1)
		{
			n28.setColor(sf::Color(189, 179, 29));
		}
		if (maalikMakaan == 2)
		{
			n28.setColor(sf::Color(205, 121, 59));
		}
		if (maalikMakaan == 3)
		{
			n28.setColor(sf::Color(54, 143, 87));
		}
		if (maalikMakaan == 4)
		{
			n28.setColor(sf::Color(193, 39, 49));
		}
		if (maalikMakaan == 5)
		{
			n28.setColor(sf::Color(45, 73, 156));
		}
	}
	else if (plaatNumber == 35)
	{
		if (maalikMakaan == 1)
		{
			n35.setColor(sf::Color(189, 179, 29));
		}
		if (maalikMakaan == 2)
		{
			n35.setColor(sf::Color(205, 121, 59));
		}
		if (maalikMakaan == 3)
		{
			n35.setColor(sf::Color(54, 143, 87));
		}
		if (maalikMakaan == 4)
		{
			n35.setColor(sf::Color(193, 39, 49));
		}
		if (maalikMakaan == 5)
		{
			n35.setColor(sf::Color(45, 73, 156));
		}
	}
	else if (plaatNumber == 37)
	{
		if (maalikMakaan == 1)
		{
			n37.setColor(sf::Color(189, 179, 29));
		}
		if (maalikMakaan == 2)
		{
			n37.setColor(sf::Color(205, 121, 59));
		}
		if (maalikMakaan == 3)
		{
			n37.setColor(sf::Color(54, 143, 87));
		}
		if (maalikMakaan == 4)
		{
			n37.setColor(sf::Color(193, 39, 49));
		}
		if (maalikMakaan == 5)
		{
			n37.setColor(sf::Color(45, 73, 156));
		}
	}
	else if (plaatNumber == 39)
	{
		if (maalikMakaan == 1)
		{
			n39.setColor(sf::Color(189, 179, 29));
		}
		if (maalikMakaan == 2)
		{
			n39.setColor(sf::Color(205, 121, 59));
		}
		if (maalikMakaan == 3)
		{
			n39.setColor(sf::Color(54, 143, 87));
		}
		if (maalikMakaan == 4)
		{
			n39.setColor(sf::Color(193, 39, 49));
		}
		if (maalikMakaan == 5)
		{
			n39.setColor(sf::Color(45, 73, 156));
		}
	}
}
void RemovePlayerFromSoldPropertyRes(sf::Sprite& n1, sf::Sprite& n3, sf::Sprite& n6, sf::Sprite& n8, sf::Sprite& n9, sf::Sprite& n11, sf::Sprite& n13, sf::Sprite& n14, sf::Sprite& n16, sf::Sprite& n18, sf::Sprite& n19, sf::Sprite& n21, sf::Sprite& n23, sf::Sprite& n24, sf::Sprite& n26, sf::Sprite& n28, sf::Sprite& n27, sf::Sprite& n29, sf::Sprite& n31, sf::Sprite& n32, sf::Sprite& n34, int plaatNumber)
{
	if (plaatNumber == 0)
	{
		n1.setColor(sf::Color::White);
	}
	else if (plaatNumber == 1)
	{
		n3.setColor(sf::Color::White);
	}
	else if (plaatNumber == 2)
	{
		n6.setColor(sf::Color::White);
	}
	else if (plaatNumber == 3)
	{
		n8.setColor(sf::Color::White);
	}
	else if (plaatNumber == 4)
	{
		n9.setColor(sf::Color::White);
	}
	else if (plaatNumber == 5)
	{
		n11.setColor(sf::Color::White);
	}
	else if (plaatNumber == 6)
	{
		n13.setColor(sf::Color::White);
	}
	else if (plaatNumber == 7)
	{
		n14.setColor(sf::Color::White);
	}
	else if (plaatNumber == 8)
	{
		n16.setColor(sf::Color::White);
	}
	else if (plaatNumber == 9)
	{
		n18.setColor(sf::Color::White);
	}
	else if (plaatNumber == 10)
	{
		n19.setColor(sf::Color::White);
	}
	else if (plaatNumber == 11)
	{
		n21.setColor(sf::Color::White);
	}
	else if (plaatNumber == 12)
	{
		n23.setColor(sf::Color::White);
	}
	else if (plaatNumber == 13)
	{
		n24.setColor(sf::Color::White);
	}
	else if (plaatNumber == 14)
	{
		n26.setColor(sf::Color::White);
	}
	else if (plaatNumber == 15)
	{
		n27.setColor(sf::Color::White);
	}
	else if (plaatNumber == 16)
	{
		n29.setColor(sf::Color::White);
	}
	else if (plaatNumber == 17)
	{
		n31.setColor(sf::Color::White);
	}
	else if (plaatNumber == 18)
	{
		n32.setColor(sf::Color::White);
	}
	else if (plaatNumber == 19)
	{
		n34.setColor(sf::Color::White);
	}
}
void RemovePlaterFromSoldPropertyNonRes(sf::Sprite& n5, sf::Sprite& n12, sf::Sprite& n15, sf::Sprite& n25, sf::Sprite& n28, sf::Sprite& n35, sf::Sprite& n37, sf::Sprite& n39, int plaatNumber)
{
	if (plaatNumber == 0)
	{
		n5.setColor(sf::Color::White);
	}
	else if (plaatNumber == 1)
	{
		n12.setColor(sf::Color::White);
	}
	else if (plaatNumber == 2)
	{
		n15.setColor(sf::Color::White);
	}
	else if (plaatNumber == 3)
	{
		n25.setColor(sf::Color::White);
	}
	else if (plaatNumber == 4)
	{
		n28.setColor(sf::Color::White);
	}
	else if (plaatNumber == 5)
	{
		n35.setColor(sf::Color::White);
	}
	else if (plaatNumber == 6)
	{
		n37.setColor(sf::Color::White);
	}
	else if (plaatNumber == 7)
	{
		n39.setColor(sf::Color::White);
	}
}
void setPlayerFromFileRes(sf::Sprite& n1, sf::Sprite& n3, sf::Sprite& n6, sf::Sprite& n8, sf::Sprite& n9, sf::Sprite& n11, sf::Sprite& n13, sf::Sprite& n14, sf::Sprite& n16, sf::Sprite& n18, sf::Sprite& n19, sf::Sprite& n21, sf::Sprite& n23, sf::Sprite& n24, sf::Sprite& n26, sf::Sprite& n28, sf::Sprite& n27, sf::Sprite& n29, sf::Sprite& n31, sf::Sprite& n32, sf::Sprite& n34, char symbol, int residenceNumber)
{
	int plaatNumber = residenceNumber;
	int maalikMakaan;
	if (symbol == '#')
	{
		maalikMakaan = 1;
	}
	else if (symbol == '$')
	{
		maalikMakaan = 2;
	}
	else if (symbol == '%')
	{
		maalikMakaan = 3;
	}
	else if (symbol == '&')
	{
		maalikMakaan = 4;
	}
	else if (symbol == '\'')
	{
		maalikMakaan = 5;
	}

	if (plaatNumber == 0)
	{
		if (maalikMakaan == 1)
		{
			n1.setColor(sf::Color(189, 179, 29));
		}
		if (maalikMakaan == 2)
		{
			n1.setColor(sf::Color(205, 121, 59));
		}
		if (maalikMakaan == 3)
		{
			n1.setColor(sf::Color(54, 143, 87));
		}
		if (maalikMakaan == 4)
		{
			n1.setColor(sf::Color(193, 39, 49));
		}
		if (maalikMakaan == 5)
		{
			n1.setColor(sf::Color(45, 73, 156));
		}
	}
	else if (plaatNumber == 1)
	{
		if (maalikMakaan == 1)
		{
			n3.setColor(sf::Color(189, 179, 29));
		}
		if (maalikMakaan == 2)
		{
			n3.setColor(sf::Color(205, 121, 59));
		}
		if (maalikMakaan == 3)
		{
			n3.setColor(sf::Color(54, 143, 87));
		}
		if (maalikMakaan == 4)
		{
			n3.setColor(sf::Color(193, 39, 49));
		}
		if (maalikMakaan == 5)
		{
			n3.setColor(sf::Color(45, 73, 156));
		}
	}
	else if (plaatNumber == 2)
	{
		if (maalikMakaan == 1)
		{
			n6.setColor(sf::Color(189, 179, 29));
		}
		if (maalikMakaan == 2)
		{
			n6.setColor(sf::Color(205, 121, 59));
		}
		if (maalikMakaan == 3)
		{
			n6.setColor(sf::Color(54, 143, 87));
		}
		if (maalikMakaan == 4)
		{
			n6.setColor(sf::Color(193, 39, 49));
		}
		if (maalikMakaan == 5)
		{
			n6.setColor(sf::Color(45, 73, 156));
		}
	}
	else if (plaatNumber == 3)
	{
		if (maalikMakaan == 1)
		{
			n8.setColor(sf::Color(189, 179, 29));
		}
		if (maalikMakaan == 2)
		{
			n8.setColor(sf::Color(205, 121, 59));
		}
		if (maalikMakaan == 3)
		{
			n8.setColor(sf::Color(54, 143, 87));
		}
		if (maalikMakaan == 4)
		{
			n8.setColor(sf::Color(193, 39, 49));
		}
		if (maalikMakaan == 5)
		{
			n8.setColor(sf::Color(45, 73, 156));
		}
	}
	else if (plaatNumber == 4)
	{
		if (maalikMakaan == 1)
		{
			n9.setColor(sf::Color(189, 179, 29));
		}
		if (maalikMakaan == 2)
		{
			n9.setColor(sf::Color(205, 121, 59));
		}
		if (maalikMakaan == 3)
		{
			n9.setColor(sf::Color(54, 143, 87));
		}
		if (maalikMakaan == 4)
		{
			n9.setColor(sf::Color(193, 39, 49));
		}
		if (maalikMakaan == 5)
		{
			n9.setColor(sf::Color(45, 73, 156));
		}
	}
	else if (plaatNumber == 5)
	{
		if (maalikMakaan == 1)
		{
			n11.setColor(sf::Color(189, 179, 29));
		}
		if (maalikMakaan == 2)
		{
			n11.setColor(sf::Color(205, 121, 59));
		}
		if (maalikMakaan == 3)
		{
			n11.setColor(sf::Color(54, 143, 87));
		}
		if (maalikMakaan == 4)
		{
			n11.setColor(sf::Color(193, 39, 49));
		}
		if (maalikMakaan == 5)
		{
			n11.setColor(sf::Color(45, 73, 156));
		}
	}
	else if (plaatNumber == 6)
	{
		if (maalikMakaan == 1)
		{
			n13.setColor(sf::Color(189, 179, 29));
		}
		if (maalikMakaan == 2)
		{
			n13.setColor(sf::Color(205, 121, 59));
		}
		if (maalikMakaan == 3)
		{
			n13.setColor(sf::Color(54, 143, 87));
		}
		if (maalikMakaan == 4)
		{
			n13.setColor(sf::Color(193, 39, 49));
		}
		if (maalikMakaan == 5)
		{
			n13.setColor(sf::Color(45, 73, 156));
		}
	}
	else if (plaatNumber == 7)
	{
		if (maalikMakaan == 1)
		{
			n14.setColor(sf::Color(189, 179, 29));
		}
		if (maalikMakaan == 2)
		{
			n14.setColor(sf::Color(205, 121, 59));
		}
		if (maalikMakaan == 3)
		{
			n14.setColor(sf::Color(54, 143, 87));
		}
		if (maalikMakaan == 4)
		{
			n14.setColor(sf::Color(193, 39, 49));
		}
		if (maalikMakaan == 5)
		{
			n14.setColor(sf::Color(45, 73, 156));
		}
	}
	else if (plaatNumber == 8)
	{
		if (maalikMakaan == 1)
		{
			n16.setColor(sf::Color(189, 179, 29));
		}
		if (maalikMakaan == 2)
		{
			n16.setColor(sf::Color(205, 121, 59));
		}
		if (maalikMakaan == 3)
		{
			n16.setColor(sf::Color(54, 143, 87));
		}
		if (maalikMakaan == 4)
		{
			n16.setColor(sf::Color(193, 39, 49));
		}
		if (maalikMakaan == 5)
		{
			n16.setColor(sf::Color(45, 73, 156));
		}
	}
	else if (plaatNumber == 9)
	{
		if (maalikMakaan == 1)
		{
			n18.setColor(sf::Color(189, 179, 29));
		}
		if (maalikMakaan == 2)
		{
			n18.setColor(sf::Color(205, 121, 59));
		}
		if (maalikMakaan == 3)
		{
			n18.setColor(sf::Color(54, 143, 87));
		}
		if (maalikMakaan == 4)
		{
			n18.setColor(sf::Color(193, 39, 49));
		}
		if (maalikMakaan == 5)
		{
			n18.setColor(sf::Color(45, 73, 156));
		}
	}
	else if (plaatNumber == 10)
	{
		if (maalikMakaan == 1)
		{
			n19.setColor(sf::Color(189, 179, 29));
		}
		if (maalikMakaan == 2)
		{
			n19.setColor(sf::Color(205, 121, 59));
		}
		if (maalikMakaan == 3)
		{
			n19.setColor(sf::Color(54, 143, 87));
		}
		if (maalikMakaan == 4)
		{
			n19.setColor(sf::Color(193, 39, 49));
		}
		if (maalikMakaan == 5)
		{
			n19.setColor(sf::Color(45, 73, 156));
		}
	}
	else if (plaatNumber == 11)
	{
		if (maalikMakaan == 1)
		{
			n21.setColor(sf::Color(189, 179, 29));
		}
		if (maalikMakaan == 2)
		{
			n21.setColor(sf::Color(205, 121, 59));
		}
		if (maalikMakaan == 3)
		{
			n21.setColor(sf::Color(54, 143, 87));
		}
		if (maalikMakaan == 4)
		{
			n21.setColor(sf::Color(193, 39, 49));
		}
		if (maalikMakaan == 5)
		{
			n21.setColor(sf::Color(45, 73, 156));
		}
	}
	else if (plaatNumber == 12)
	{
		if (maalikMakaan == 1)
		{
			n23.setColor(sf::Color(189, 179, 29));
		}
		if (maalikMakaan == 2)
		{
			n23.setColor(sf::Color(205, 121, 59));
		}
		if (maalikMakaan == 3)
		{
			n23.setColor(sf::Color(54, 143, 87));
		}
		if (maalikMakaan == 4)
		{
			n23.setColor(sf::Color(193, 39, 49));
		}
		if (maalikMakaan == 5)
		{
			n23.setColor(sf::Color(45, 73, 156));
		}
	}
	else if (plaatNumber == 13)
	{
		if (maalikMakaan == 1)
		{
			n24.setColor(sf::Color(189, 179, 29));
		}
		if (maalikMakaan == 2)
		{
			n24.setColor(sf::Color(205, 121, 59));
		}
		if (maalikMakaan == 3)
		{
			n24.setColor(sf::Color(54, 143, 87));
		}
		if (maalikMakaan == 4)
		{
			n24.setColor(sf::Color(193, 39, 49));
		}
		if (maalikMakaan == 5)
		{
			n24.setColor(sf::Color(45, 73, 156));
		}
	}
	else if (plaatNumber == 14)
	{
		if (maalikMakaan == 1)
		{
			n26.setColor(sf::Color(189, 179, 29));
		}
		if (maalikMakaan == 2)
		{
			n26.setColor(sf::Color(205, 121, 59));
		}
		if (maalikMakaan == 3)
		{
			n26.setColor(sf::Color(54, 143, 87));
		}
		if (maalikMakaan == 4)
		{
			n26.setColor(sf::Color(193, 39, 49));
		}
		if (maalikMakaan == 5)
		{
			n26.setColor(sf::Color(45, 73, 156));
		}
	}
	else if (plaatNumber == 15)
	{
		if (maalikMakaan == 1)
		{
			n27.setColor(sf::Color(189, 179, 29));
		}
		if (maalikMakaan == 2)
		{
			n27.setColor(sf::Color(205, 121, 59));
		}
		if (maalikMakaan == 3)
		{
			n27.setColor(sf::Color(54, 143, 87));
		}
		if (maalikMakaan == 4)
		{
			n27.setColor(sf::Color(193, 39, 49));
		}
		if (maalikMakaan == 5)
		{
			n27.setColor(sf::Color(45, 73, 156));
		}
	}
	else if (plaatNumber == 16)
	{
		if (maalikMakaan == 1)
		{
			n29.setColor(sf::Color(189, 179, 29));
		}
		if (maalikMakaan == 2)
		{
			n29.setColor(sf::Color(205, 121, 59));
		}
		if (maalikMakaan == 3)
		{
			n29.setColor(sf::Color(54, 143, 87));
		}
		if (maalikMakaan == 4)
		{
			n29.setColor(sf::Color(193, 39, 49));
		}
		if (maalikMakaan == 5)
		{
			n29.setColor(sf::Color(45, 73, 156));
		}
	}
	else if (plaatNumber == 17)
	{
		if (maalikMakaan == 1)
		{
			n31.setColor(sf::Color(189, 179, 29));
		}
		if (maalikMakaan == 2)
		{
			n31.setColor(sf::Color(205, 121, 59));
		}
		if (maalikMakaan == 3)
		{
			n31.setColor(sf::Color(54, 143, 87));
		}
		if (maalikMakaan == 4)
		{
			n31.setColor(sf::Color(193, 39, 49));
		}
		if (maalikMakaan == 5)
		{
			n31.setColor(sf::Color(45, 73, 156));
		}
	}
	else if (plaatNumber == 18)
	{
		if (maalikMakaan == 1)
		{
			n32.setColor(sf::Color(189, 179, 29));
		}
		if (maalikMakaan == 2)
		{
			n32.setColor(sf::Color(205, 121, 59));
		}
		if (maalikMakaan == 3)
		{
			n32.setColor(sf::Color(54, 143, 87));
		}
		if (maalikMakaan == 4)
		{
			n32.setColor(sf::Color(193, 39, 49));
		}
		if (maalikMakaan == 5)
		{
			n32.setColor(sf::Color(45, 73, 156));
		}
	}
	else if (plaatNumber == 19)
	{
		if (maalikMakaan == 1)
		{
			n34.setColor(sf::Color(189, 179, 29));
		}
		if (maalikMakaan == 2)
		{
			n34.setColor(sf::Color(205, 121, 59));
		}
		if (maalikMakaan == 3)
		{
			n34.setColor(sf::Color(54, 143, 87));
		}
		if (maalikMakaan == 4)
		{
			n34.setColor(sf::Color(193, 39, 49));
		}
		if (maalikMakaan == 5)
		{
			n34.setColor(sf::Color(45, 73, 156));
		}
	}
}
void setPlayerFromFileNonRes(sf::Sprite& n5, sf::Sprite& n12, sf::Sprite& n15, sf::Sprite& n25, sf::Sprite& n28, sf::Sprite& n35, sf::Sprite& n37, sf::Sprite& n39, char symbol, int residenceNumber)
{
	int plaatNumber = residenceNumber;
	int maalikMakaan;
	if (symbol == '#')
	{
		maalikMakaan = 1;
	}
	else if (symbol == '$')
	{
		maalikMakaan = 2;
	}
	else if (symbol == '%')
	{
		maalikMakaan = 3;
	}
	else if (symbol == '&')
	{
		maalikMakaan = 4;
	}
	else if (symbol == '\'')
	{
		maalikMakaan = 5;
	}

	if (plaatNumber == 0)
	{
		if (maalikMakaan == 1)
		{
			n5.setColor(sf::Color(189, 179, 29));
		}
		if (maalikMakaan == 2)
		{
			n5.setColor(sf::Color(205, 121, 59));
		}
		if (maalikMakaan == 3)
		{
			n5.setColor(sf::Color(54, 143, 87));
		}
		if (maalikMakaan == 4)
		{
			n5.setColor(sf::Color(193, 39, 49));
		}
		if (maalikMakaan == 5)
		{
			n5.setColor(sf::Color(45, 73, 156));
		}
	}
	else if (plaatNumber == 1)
	{
		if (maalikMakaan == 1)
		{
			n12.setColor(sf::Color(189, 179, 29));
		}
		if (maalikMakaan == 2)
		{
			n12.setColor(sf::Color(205, 121, 59));
		}
		if (maalikMakaan == 3)
		{
			n12.setColor(sf::Color(54, 143, 87));
		}
		if (maalikMakaan == 4)
		{
			n12.setColor(sf::Color(193, 39, 49));
		}
		if (maalikMakaan == 5)
		{
			n12.setColor(sf::Color(45, 73, 156));
		}
	}
	else if (plaatNumber == 2)
	{
		if (maalikMakaan == 1)
		{
			n15.setColor(sf::Color(189, 179, 29));
		}
		if (maalikMakaan == 2)
		{
			n15.setColor(sf::Color(205, 121, 59));
		}
		if (maalikMakaan == 3)
		{
			n15.setColor(sf::Color(54, 143, 87));
		}
		if (maalikMakaan == 4)
		{
			n15.setColor(sf::Color(193, 39, 49));
		}
		if (maalikMakaan == 5)
		{
			n15.setColor(sf::Color(45, 73, 156));
		}
	}
	else if (plaatNumber == 3)
	{
		if (maalikMakaan == 1)
		{
			n25.setColor(sf::Color(189, 179, 29));
		}
		if (maalikMakaan == 2)
		{
			n25.setColor(sf::Color(205, 121, 59));
		}
		if (maalikMakaan == 3)
		{
			n25.setColor(sf::Color(54, 143, 87));
		}
		if (maalikMakaan == 4)
		{
			n25.setColor(sf::Color(193, 39, 49));
		}
		if (maalikMakaan == 5)
		{
			n25.setColor(sf::Color(45, 73, 156));
		}
	}
	else if (plaatNumber == 4)
	{
		if (maalikMakaan == 1)
		{
			n28.setColor(sf::Color(189, 179, 29));
		}
		if (maalikMakaan == 2)
		{
			n28.setColor(sf::Color(205, 121, 59));
		}
		if (maalikMakaan == 3)
		{
			n28.setColor(sf::Color(54, 143, 87));
		}
		if (maalikMakaan == 4)
		{
			n28.setColor(sf::Color(193, 39, 49));
		}
		if (maalikMakaan == 5)
		{
			n28.setColor(sf::Color(45, 73, 156));
		}
	}
	else if (plaatNumber == 5)
	{
		if (maalikMakaan == 1)
		{
			n35.setColor(sf::Color(189, 179, 29));
		}
		if (maalikMakaan == 2)
		{
			n35.setColor(sf::Color(205, 121, 59));
		}
		if (maalikMakaan == 3)
		{
			n35.setColor(sf::Color(54, 143, 87));
		}
		if (maalikMakaan == 4)
		{
			n35.setColor(sf::Color(193, 39, 49));
		}
		if (maalikMakaan == 5)
		{
			n35.setColor(sf::Color(45, 73, 156));
		}
	}
	else if (plaatNumber == 6)
	{
		if (maalikMakaan == 1)
		{
			n37.setColor(sf::Color(189, 179, 29));
		}
		if (maalikMakaan == 2)
		{
			n37.setColor(sf::Color(205, 121, 59));
		}
		if (maalikMakaan == 3)
		{
			n37.setColor(sf::Color(54, 143, 87));
		}
		if (maalikMakaan == 4)
		{
			n37.setColor(sf::Color(193, 39, 49));
		}
		if (maalikMakaan == 5)
		{
			n37.setColor(sf::Color(45, 73, 156));
		}
	}
	else if (plaatNumber == 7)
	{
		if (maalikMakaan == 1)
		{
			n39.setColor(sf::Color(189, 179, 29));
		}
		if (maalikMakaan == 2)
		{
			n39.setColor(sf::Color(205, 121, 59));
		}
		if (maalikMakaan == 3)
		{
			n39.setColor(sf::Color(54, 143, 87));
		}
		if (maalikMakaan == 4)
		{
			n39.setColor(sf::Color(193, 39, 49));
		}
		if (maalikMakaan == 5)
		{
			n39.setColor(sf::Color(45, 73, 156));
		}
	}
}
void wholeFunctionality(player* playerarray, int& currentplayer, int& roll, bool& round, bool& bankrupt, residential** res, property** pro, int& p, sf::Text& Player1CashText, sf::Text& Player2CashText, sf::Text& Player3CashText, sf::Text& Player4CashText, sf::Text& Player5CashText, int& resIndex, int& proIndex, bool& cashSound, int& resSoldCheck, int& proSoldCheck)
{
	playerarray[currentplayer - 1].setposition(roll, round);
	cout << "Now Player Index On Board ";
	cout << playerarray[currentplayer - 1].getposition();
	cout << endl;
	cout << "Player Remaing Balance " << playerarray[currentplayer - 1].getcash() << endl;
	if (playerarray[currentplayer - 1].getposition() >= 0 && round == true)
	{
		cout << "Collect 500 from bank" << endl;
		cashSound = true;
		playerarray[currentplayer - 1].addfund(500);
		round = false;
	}
	if (playerarray[currentplayer - 1].getposition() == 10)
	{
		bankrupt = checkBankrupt(playerarray[currentplayer - 1], res, pro, resSoldCheck, proSoldCheck);
		if (bankrupt == 1)
		{
			cout << "Game over for player:" << currentplayer << endl;
			createArr(playerarray, currentplayer - 1, p, round);
		}
		else
		{
			if (playerarray[currentplayer - 1].returnGetoutofJail() == 1)
			{
				cout << "Get out of jail card used" << endl;
				playerarray[currentplayer - 1].setGetoutOfJail(0);
			}
			else
			{
				cout << "You went to jail pay 50$ fine" << endl;
				playerarray[currentplayer - 1].subtractfund(50);
			}
		}
	}
	if (playerarray[currentplayer - 1].getposition() == 20)
	{
		bankrupt = checkBankrupt(playerarray[currentplayer - 1], res, pro, resSoldCheck, proSoldCheck);
		if (bankrupt == 1)
		{
			cout << "Game over for player:" << currentplayer << endl;
			createArr(playerarray, currentplayer - 1, p, round);
		}
		else
		{
			cout << "Pay parking fine!" << endl;
			playerarray[currentplayer - 1].subtractfund(20);
			cout << "Done!" << endl;
		}
	}
	if (playerarray[currentplayer - 1].getposition() == 30)
	{
		if (playerarray[currentplayer - 1].returnGetoutofJail() == 1)
		{
			cout << "Get out of jail card used" << endl;
			playerarray[currentplayer - 1].setGetoutOfJail(0);
		}
		else
		{
			bankrupt = checkBankrupt(playerarray[currentplayer - 1], res, pro, resSoldCheck, proSoldCheck);
			if (bankrupt == 1)
			{
				cout << "Game over for player:" << currentplayer << endl;
				createArr(playerarray, currentplayer - 1, p, round);
			}
			else
			{
				cout << "You came to the GO TO JAIL TILE. You are now in jail Pay 50$ to escape" << endl;
				playerarray[currentplayer - 1].specific(10);
				playerarray[currentplayer - 1].subtractfund(50);
			}
		}
	}
	if (playerarray[currentplayer - 1].getposition() == 4)
	{
		bankrupt = checkBankrupt(playerarray[currentplayer - 1], res, pro, resSoldCheck, proSoldCheck);
		if (bankrupt == 1)
		{
			cout << "Game over for player:" << currentplayer << endl;
			createArr(playerarray, currentplayer - 1, p, round);
		}
		else
		{
			cout << "Pay Income tax!" << endl;
			playerarray[currentplayer - 1].subtractfund(30);
		}
	}
	if (playerarray[currentplayer - 1].getposition() == 38)
	{
		bankrupt = checkBankrupt(playerarray[currentplayer - 1], res, pro, resSoldCheck, proSoldCheck);
		if (bankrupt == 1)
		{
			cout << "Game over for player:" << currentplayer << endl;
			createArr(playerarray, currentplayer - 1, p, round);
		}
		else
		{
			cout << "Pay Property tax!" << endl;
			playerarray[currentplayer - 1].subtractfund(30);
		}
	}
	if (playerarray[currentplayer - 1].getposition() == 2 || playerarray[currentplayer - 1].getposition() == 17 || playerarray[currentplayer - 1].getposition() == 33)
	{
		srand(time(NULL));
		int r = rand() % 13 + 1;
		drawnchest(playerarray[currentplayer - 1], r);
	}
	if (playerarray[currentplayer - 1].getposition() == 7 || playerarray[currentplayer - 1].getposition() == 22 || playerarray[currentplayer - 1].getposition() == 36)
	{
		cout << "Flip a chance card!" << endl;
		//srand(time(NULL));
		int r = rand() % 10 + 1;
		// void drawnchance(player **abj, int a, int b, int d);   // d for random no to select a card//  a  means total no of players, b means current player index on array
		int yt = currentplayer - 1;
		drawnchance(playerarray, p, yt, r, pro, roll);
	}
	else
	{
		for (int we = 0; we < 20; ++we) // for Residential property
		{
			if (res[we]->getPosition() == playerarray[currentplayer - 1].getposition())
			{
				res[we]->printresidential();
				{
					resIndex = 0;
					resIndex = checkResPos(playerarray[currentplayer - 1].getposition());
					if (res[resIndex]->getplayersymbol() != '\0')
					{
						for (int ty = 0; ty < p; ++ty)
						{
							if (playerarray[ty].getSymbol() == res[resIndex]->getplayersymbol())
							{
								if (ty != (currentplayer - 1))
								{
									cout << "Rent Deducted " << endl;

									int ret = res[resIndex]->getpayrent();

									playerarray[currentplayer - 1].subtractfund(ret);
									playerarray[ty].addfund(res[resIndex]->getpayrent());
								}
							}
						}
					}
					if (res[resIndex]->getplayersymbol() == playerarray[currentplayer - 1].getSymbol())
					{
						bankrupt = checkBankrupt(playerarray[currentplayer - 1], res, pro, resSoldCheck, proSoldCheck);
						if (bankrupt == 1)
						{
							cout << "Game over for player:" << currentplayer << endl;
							createArr(playerarray, currentplayer - 1, p, round);
						}
						else
						{
							upgrade(playerarray[currentplayer - 1], *res[resIndex], res);
						}           // changes Required
					}
					if (res[resIndex]->getplayersymbol() == '\0')
					{
						bankrupt = checkBankrupt(playerarray[currentplayer - 1], res, pro, resSoldCheck, proSoldCheck);
						if (bankrupt == 1)
						{
							cout << "Game over for player:" << currentplayer << endl;
							createArr(playerarray, currentplayer - 1, p, round);
						}
						else
						{
							purchaseMenu(playerarray[currentplayer - 1], *res[resIndex]);
						}
					}
				}
				we = 50;
			}
		}
		for (int re = 0; re < 8; ++re) // For Utlitiy and Station   Index
		{
			if (pro[re]->getPosition() == playerarray[currentplayer - 1].getposition())
			{
				proIndex = 0;
				proIndex = checkproIndex(playerarray[currentplayer - 1].getposition());
				pro[proIndex]->printpropertyinfo();
				if (pro[proIndex]->getplayersymbol() != '\0')
				{
					for (int uy = 0; uy < p; ++uy)
					{
						if (playerarray[uy].getSymbol() == pro[proIndex]->getplayersymbol())
						{
							if (uy != (currentplayer - 1))
							{
								cout << "Rent Deducted " << endl;

								int rt = pro[proIndex]->getrent();

								playerarray[currentplayer - 1].subtractfund(rt);
								playerarray[uy].addfund(pro[proIndex]->getrent());
							}
						}
					}
				}
				if (pro[proIndex]->getplayersymbol() == '\0')
				{
					bankrupt = checkBankrupt(playerarray[currentplayer - 1], res, pro, resSoldCheck, proSoldCheck);
					if (bankrupt == 1) {
						cout << "Game over for player:" << currentplayer << endl;
						createArr(playerarray, currentplayer - 1, p, round);
					}
					else
					{
						purchaseMenu2(playerarray[currentplayer - 1], *pro[proIndex]);
					}
				}
			}
		}
	}
	bankrupt = checkBankrupt(playerarray[currentplayer - 1], res, pro, resSoldCheck, proSoldCheck);
	if (bankrupt == 1)
	{
		cout << "Game over for player:" << currentplayer << endl;
		createArr(playerarray, currentplayer - 1, p, round);
	}
	
	if (currentplayer == 1)
	{
		Player1CashText.setString(PlayerCashString(currentplayer, playerarray));
	}
	if (currentplayer == 2)
	{
		Player2CashText.setString(PlayerCashString(currentplayer, playerarray));
	}
	if (currentplayer == 3)
	{
		Player3CashText.setString(PlayerCashString(currentplayer, playerarray));
	}
	if (currentplayer == 4)
	{
		Player4CashText.setString(PlayerCashString(currentplayer, playerarray));
	}
	if (currentplayer == 5)
	{
		Player5CashText.setString(PlayerCashString(currentplayer, playerarray));
	}
	cout << "Cash:" << playerarray[currentplayer - 1].getcash() << " Position: " << playerarray[currentplayer - 1].getposition() << endl;
	cout << endl;
}

int main()
{
	int roll = 0;

	sf::RenderWindow window(sf::VideoMode(2525, 1250), "MONOPOLY");

	sf::Font font;
	if (!font.loadFromFile("Quark.otf"))
	{
		cout << "Font not opened" << endl;
	}

	sf::Font font1;
	if(!font1.loadFromFile("Caviar_Dreams_Bold.ttf"))
	{
		cout << "Font Not Opened" << endl;
	}

	sf::Font font2;
	if (!font2.loadFromFile("Natural.otf"))
	{
		cout << "Font not opened" << endl;
	}

	sf::Text Player1Text;
	Player1Text.setFont(font2);
	Player1Text.setPosition(sf::Vector2f(2025, 210));
	Player1Text.setCharacterSize(60);
	Player1Text.setFillColor(sf::Color::Black);
	Player1Text.setString("PLAYER ONE:  ");

	sf::Text Player1CashText;
	Player1CashText.setFont(font1);
	Player1CashText.setPosition(sf::Vector2f(2045, 270));
	Player1CashText.setCharacterSize(25);
	Player1CashText.setFillColor(sf::Color(0,102,51));

	sf::Text Player2Text;
	Player2Text.setFont(font2);
	Player2Text.setPosition(sf::Vector2f(2025, 410));
	Player2Text.setCharacterSize(60);
	Player2Text.setFillColor(sf::Color::Black);
	Player2Text.setString("PLAYER TWO:  ");

	sf::Text Player2CashText;
	Player2CashText.setFont(font1);
	Player2CashText.setPosition(sf::Vector2f(2045, 470));
	Player2CashText.setCharacterSize(25);
	Player2CashText.setFillColor(sf::Color(0, 102, 51));

	sf::Text Player3Text;
	Player3Text.setFont(font2);
	Player3Text.setPosition(sf::Vector2f(2025, 610));
	Player3Text.setCharacterSize(60);
	Player3Text.setFillColor(sf::Color::Black);
	Player3Text.setString("PLAYER THREE:  ");

	sf::Text Player3CashText;
	Player3CashText.setFont(font1);
	Player3CashText.setPosition(sf::Vector2f(2045, 670));
	Player3CashText.setCharacterSize(25);
	Player3CashText.setFillColor(sf::Color(0, 102, 51));

	sf::Text Player4Text;
	Player4Text.setFont(font2);
	Player4Text.setPosition(sf::Vector2f(2025, 810));
	Player4Text.setCharacterSize(60);
	Player4Text.setFillColor(sf::Color::Black);
	Player4Text.setString("PLAYER FOUR:  ");

	sf::Text Player4CashText;
	Player4CashText.setFont(font1);
	Player4CashText.setPosition(sf::Vector2f(2045, 870));
	Player4CashText.setCharacterSize(25);
	Player4CashText.setFillColor(sf::Color(0, 102, 51));

	sf::Text Player5Text;
	Player5Text.setFont(font2);
	Player5Text.setPosition(sf::Vector2f(2025, 1010));
	Player5Text.setCharacterSize(60);
	Player5Text.setFillColor(sf::Color::Black);
	Player5Text.setString("PLAYER FIVE:  ");

	sf::Text Player5CashText;
	Player5CashText.setFont(font1);
	Player5CashText.setPosition(sf::Vector2f(2045, 1070));
	Player5CashText.setCharacterSize(25);
	Player5CashText.setFillColor(sf::Color(0, 102, 51));

	sf::Text PlayerTurnText;
	PlayerTurnText.setFont(font);
	PlayerTurnText.setPosition(sf::Vector2f(350, 850));
	PlayerTurnText.setCharacterSize(50);
	PlayerTurnText.setFillColor(sf::Color::Blue);

	sf::Text ScoreBoardText;
	ScoreBoardText.setFont(font);
	ScoreBoardText.setPosition(sf::Vector2f(2025, 35));
	ScoreBoardText.setFillColor(sf::Color::Black);
	ScoreBoardText.setCharacterSize(70);
	ScoreBoardText.setString("Detail Board");

	sf::Music DiceRollMusic;
	if (!DiceRollMusic.openFromFile("DiceRollMusic.WAV"))
	{
		cout << "Dice Roll Music Not Opened" << endl;
	}

	sf::Music CashMusic;
	if (!CashMusic.openFromFile("cash.WAV"))
	{
		cout << "Cash Music Not Found" << endl;
	}

	sf::Texture ScoreBoardTexture;
	if (!ScoreBoardTexture.loadFromFile("score.jpg"))
	{
		cout << "Score Board Not Opened" << endl;
	}
	sf::Sprite ScoreBoardSprite;
	ScoreBoardSprite.setTexture(ScoreBoardTexture);
	ScoreBoardSprite.setPosition(sf::Vector2f(1870, 0));
	ScoreBoardSprite.setScale(0.55, 1);

	sf::Texture DiceN1Texture;
	if (!DiceN1Texture.loadFromFile("1.png"))
	{
		cout << "Dice Image 1 not opened!" << endl;
	}

	sf::Texture DiceN2Texture;
	if (!DiceN2Texture.loadFromFile("2.png"))
	{
		cout << "Dice Image 2 not opened!" << endl;
	}

	sf::Texture DiceN3Texture;
	if (!DiceN3Texture.loadFromFile("3.png"))
	{
		cout << "Dice Image 3 not opened!" << endl;
	}

	sf::Texture DiceN4Texture;
	if (!DiceN4Texture.loadFromFile("4.png"))
	{
		cout << "Dice Image 4 not opened!" << endl;
	}

	sf::Texture DiceN5Texture;
	if (!DiceN5Texture.loadFromFile("5.png"))
	{
		cout << "Dice Image 5 not opened!" << endl;
	}

	sf::Texture DiceN6Texture;
	if (!DiceN6Texture.loadFromFile("6.png"))
	{
		cout << "Dice Image 6 not opened!" << endl;
	}

	sf::Texture DiceRoll;
	if (!DiceRoll.loadFromFile("roll.png"))
	{
		cout << "Dice Roll not Opened" << endl;
	}
	sf::Sprite RollSprite;
	RollSprite.setTexture(DiceRoll);
	RollSprite.setPosition(sf::Vector2f(420, 960));
	RollSprite.setScale(0.4, 0.4);


	sf::Texture BoardTexture;
	if (!BoardTexture.loadFromFile("BOARD2.jpg"))
	{
		cout << "Board not opened" << endl;
	}
	sf::Sprite Boardsprite;
	Boardsprite.setTexture(BoardTexture);
	Boardsprite.setScale(sf::Vector2f(0.36, 0.24));


	sf::Texture Player_1_Texture;
	if (!Player_1_Texture.loadFromFile("player1.png"))
	{
		cout << "Player 1 image not opened" << endl;
	}
	sf::Sprite Player_1_Sprite;
	Player_1_Sprite.setTexture(Player_1_Texture);
	Player_1_Sprite.setScale(0.04, 0.04);
	Player_1_Sprite.setPosition(sf::Vector2f(1800, 1200));


	sf::Texture Player_2_Texture;
	if (!Player_2_Texture.loadFromFile("player2.png"))
	{
		cout << "Player 2 image not opened" << endl;
	}
	sf::Sprite Player_2_Sprite;
	Player_2_Sprite.setTexture(Player_2_Texture);
	Player_2_Sprite.setScale(0.04, 0.04);
	Player_2_Sprite.setPosition(sf::Vector2f(1800, 1200));


	sf::Texture Player_3_Texture;
	if (!Player_3_Texture.loadFromFile("player3.png"))
	{
		cout << "Player 3 image not opened" << endl;
	}
	sf::Sprite Player_3_Sprite;
	Player_3_Sprite.setTexture(Player_3_Texture);
	Player_3_Sprite.setScale(0.04, 0.04);
	Player_3_Sprite.setPosition(sf::Vector2f(1800, 1200));


	sf::Texture Player_4_Texture;
	if (!Player_4_Texture.loadFromFile("player4.png"))
	{
		cout << "Player 4 image not opened" << endl;
	}
	sf::Sprite Player_4_Sprite;
	Player_4_Sprite.setTexture(Player_4_Texture);
	Player_4_Sprite.setScale(0.04, 0.04);
	Player_4_Sprite.setPosition(sf::Vector2f(1800, 1200));


	sf::Texture Player_5_Texture;
	if (!Player_5_Texture.loadFromFile("player5.png"))
	{
		cout << "Player 5 image not opened" << endl;
	}
	sf::Sprite Player_5_Sprite;
	Player_5_Sprite.setTexture(Player_5_Texture);
	Player_5_Sprite.setScale(0.04, 0.04);
	Player_5_Sprite.setPosition(sf::Vector2f(1800, 1200));


	sf::Sprite DiceSprite;

	sf::Texture starTexture;
	if (!starTexture.loadFromFile("star2.png"))
	{
		cout << "Star not opened" << endl;
	}

	sf::Sprite Box1Star;
	Box1Star.setTexture(starTexture);
	Box1Star.setScale(0.1, 0.1);
	Box1Star.setPosition(sf::Vector2f(1626, 1170));
	sf::Sprite Box3Star;
	Box3Star.setTexture(starTexture);
	Box3Star.setScale(0.1, 0.1);
	Box3Star.setPosition(sf::Vector2f(1313, 1170));
	sf::Sprite Box5Star;
	Box5Star.setTexture(starTexture);
	Box5Star.setScale(0.1, 0.1);
	Box5Star.setPosition(sf::Vector2f(993, 1170)); //993
	sf::Sprite Box6Star;
	Box6Star.setTexture(starTexture);
	Box6Star.setScale(0.1, 0.1);
	Box6Star.setPosition(sf::Vector2f(833, 1170));
	sf::Sprite Box8Star;
	Box8Star.setTexture(starTexture);
	Box8Star.setScale(0.1, 0.1);
	Box8Star.setPosition(sf::Vector2f(503, 1170));
	sf::Sprite Box9Star;
	Box9Star.setTexture(starTexture);
	Box9Star.setScale(0.1, 0.1);
	Box9Star.setPosition(sf::Vector2f(343, 1170));
	sf::Sprite Box11Star;
	Box11Star.setTexture(starTexture);
	Box11Star.setScale(0.1, 0.1);
	Box11Star.setPosition(sf::Vector2f(94, 1000));
	sf::Sprite Box12Star;
	Box12Star.setTexture(starTexture);
	Box12Star.setScale(0.1, 0.1);
	Box12Star.setPosition(sf::Vector2f(190, 900));
	sf::Sprite Box13Star;
	Box13Star.setTexture(starTexture);
	Box13Star.setScale(0.1, 0.1);
	Box13Star.setPosition(sf::Vector2f(94, 805));
	sf::Sprite Box14Star;
	Box14Star.setTexture(starTexture);
	Box14Star.setScale(0.1, 0.1);
	Box14Star.setPosition(sf::Vector2f(94, 705));
	sf::Sprite Box15Star;
	Box15Star.setTexture(starTexture);
	Box15Star.setScale(0.1, 0.1);
	Box15Star.setPosition(sf::Vector2f(94, 603));
	sf::Sprite Box16Star;
	Box16Star.setTexture(starTexture);
	Box16Star.setScale(0.1, 0.1);
	Box16Star.setPosition(sf::Vector2f(94, 500));
	sf::Sprite Box18Star;
	Box18Star.setTexture(starTexture);
	Box18Star.setScale(0.1, 0.1);
	Box18Star.setPosition(sf::Vector2f(94, 305));
	sf::Sprite Box19Star;
	Box19Star.setTexture(starTexture);
	Box19Star.setScale(0.1, 0.1);
	Box19Star.setPosition(sf::Vector2f(94, 205));
	sf::Sprite Box21Star;
	Box21Star.setTexture(starTexture);
	Box21Star.setScale(0.1, 0.1);
	Box21Star.setPosition(sf::Vector2f(348, 50)); //356-348=8
	sf::Sprite Box23Star;
	Box23Star.setTexture(starTexture);
	Box23Star.setScale(0.1, 0.1);
	Box23Star.setPosition(sf::Vector2f(668, 50));
	sf::Sprite Box24Star;
	Box24Star.setTexture(starTexture);
	Box24Star.setScale(0.1, 0.1);
	Box24Star.setPosition(sf::Vector2f(833, 50));
	sf::Sprite Box25Star;
	Box25Star.setTexture(starTexture);
	Box25Star.setScale(0.1, 0.1);
	Box25Star.setPosition(sf::Vector2f(993, 85));
	sf::Sprite Box26Star;
	Box26Star.setTexture(starTexture);
	Box26Star.setScale(0.1, 0.1);
	Box26Star.setPosition(sf::Vector2f(1153, 60));
	sf::Sprite Box27Star;
	Box27Star.setTexture(starTexture);
	Box27Star.setScale(0.1, 0.1);
	Box27Star.setPosition(sf::Vector2f(1317, 60));
	sf::Sprite Box28Star;
	Box28Star.setTexture(starTexture);
	Box28Star.setScale(0.1, 0.1);
	Box28Star.setPosition(sf::Vector2f(1468, 100));
	sf::Sprite Box29Star;
	Box29Star.setTexture(starTexture);
	Box29Star.setScale(0.1, 0.1);
	Box29Star.setPosition(sf::Vector2f(1631, 60));
	sf::Sprite Box31Star;
	Box31Star.setTexture(starTexture);
	Box31Star.setScale(0.1, 0.1);
	Box31Star.setPosition(sf::Vector2f(1900, 205));
	sf::Sprite Box32Star;
	Box32Star.setTexture(starTexture);
	Box32Star.setScale(0.1, 0.1);
	Box32Star.setPosition(sf::Vector2f(1900, 305));
	sf::Sprite Box34Star;
	Box34Star.setTexture(starTexture);
	Box34Star.setScale(0.1, 0.1);
	Box34Star.setPosition(sf::Vector2f(1900, 505));
	sf::Sprite Box35Star;
	Box35Star.setTexture(starTexture);
	Box35Star.setScale(0.1, 0.1);
	Box35Star.setPosition(sf::Vector2f(1810, 600));
	sf::Sprite Box37Star;
	Box37Star.setTexture(starTexture);
	Box37Star.setScale(0.1, 0.1);
	Box37Star.setPosition(sf::Vector2f(1830, 800));
	sf::Sprite Box39Star;
	Box39Star.setTexture(starTexture);
	Box39Star.setScale(0.1, 0.1);
	Box39Star.setPosition(sf::Vector2f(1820, 995));


	residential** res;//an array of how many residential areas are there
	const int noofres = 20;//number of residential areas
	res = new residential * [noofres];

	res[0] = new residential('A', 0, 0, false, 80, false, false, false, "JoharTown", "jt-a", 1, 200.0, 80.0, '\0');
	res[1] = new residential('B', 0, 0, false, 90, false, false, false, "JoharTown", "jt-b", 3, 250.0, 90.0, '\0');
	res[2] = new residential('A', 0, 0, false, 60, false, false, false, "IqbalTown", "it-a", 6, 250.0, 60.0, '\0');
	res[3] = new residential('B', 0, 0, false, 70, false, false, false, "IqbalTown", "it-b", 8, 300.0, 70.0, '\0');
	res[4] = new residential('C', 0, 0, false, 100, false, false, false, "IqbalTown", "it-c", 9, 400.0, 100.0, '\0');
	res[5] = new residential('A', 0, 0, false, 100, false, false, false, "FaisalTown", "ft-a", 11, 300.0, 100.0, '\0');
	res[6] = new residential('B', 0, 0, false, 130, false, false, false, "FaisalTown", "ft-b", 13, 400.0, 130.0, '\0');
	res[7] = new residential('C', 0, 0, false, 130, false, false, false, "FaisalTown", "ft-c", 14, 400.0, 130.0, '\0');
	res[8] = new residential('A', 0, 0, false, 200, false, false, false, "ModelTown", "mt-a", 16, 800.0, 200.0, '\0');
	res[9] = new residential('B', 0, 0, false, 200, false, false, false, "ModelTown", "mt-b", 18, 850.0, 200.0, '\0');
	res[10] = new residential('C', 0, 0, false, 500, false, false, false, "ModelTown", "mt-c", 19, 2000.0, 500.0, '\0');
	res[11] = new residential('A', 0, 0, false, 300, false, false, false, "Gulberg", "gt-a", 21, 1000.0, 300.0, '\0');
	res[12] = new residential('B', 0, 0, false, 350, false, false, false, "Gulberg", "gt-b", 23, 1200.0, 350.0, '\0');
	res[13] = new residential('C', 0, 0, false, 600, false, false, false, "Gulberg", "gt-c", 24, 2500.0, 600.0, '\0');
	res[14] = new residential('A', 0, 0, false, 500, false, false, false, "DHA", "dt-a", 26, 2000.0, 500.0, '\0');
	res[15] = new residential('B', 0, 0, false, 500, false, false, false, "DHA", "dt-b", 27, 2000.0, 500.0, '\0');
	res[16] = new residential('Y', 0, 0, false, 1000, false, false, false, "DHA", "dt-y", 29, 2500.0, 1000.0, '\0');
	res[17] = new residential('A', 0, 0, false, 800, false, false, false, "BahriaTown", "bt-a", 31, 2500.0, 800.0, '\0');
	res[18] = new residential('B', 0, 0, false, 900, false, false, false, "BahriaTown", "bt-b", 32, 3000.0, 900.0, '\0');
	res[19] = new residential('C', 0, 0, false, 1000, false, false, false, "BahriaTown", "bt-c", 34, 3000.0, 1000.0, '\0');

	property** pro;
	pro = new property * [8];
	pro[0] = new property("MetroStation", "st-1", 5, 2000, 200, '\0');
	pro[1] = new property("BusStation", "st-2", 15, 2000, 200, '\0');
	pro[2] = new property("RailwayStation", "st-3", 25, 2500, 350, '\0');
	pro[3] = new property("OrangeStation", "st-4", 35, 2500, 350, '\0');
	pro[4] = new property("Lesco", "ut-1", 12, 5000, 450, '\0');
	pro[5] = new property("Ptcl", "ut-2", 28, 8000, 500, '\0');
	pro[6] = new property("Wasa", "ut-3", 37, 4000, 400, '\0');
	pro[7] = new property("SuiGas", "ut-4", 39, 2500, 350, '\0');

	const int noofextras = 4;
	extra** extras = new extra * [noofextras];
	extras[0] = new extra(0, true, false, "GO!", false, false);
	extras[1] = new extra(10, false, true, "Jail", false, false);
	extras[2] = new extra(20, false, false, "Free Parking", true, false);
	extras[3] = new extra(30, false, false, "GO to Jail", false, true);
	const int nooftax = 2;
	taxes** tax = new taxes * [2];
	tax[0] = new taxes(0.0, 4, "Income Tax");
	tax[1] = new taxes(0.0, 38, "Property Tax");

	chance** chan;
	chan = new chance * [3];
	chan[0] = new chance("Chance", 7);
	chan[1] = new chance("Chance", 22);
	chan[2] = new chance("Chance", 36);
	community** comm;
	comm = new community * [3];
	comm[0] = new community("Community chest", 2);
	comm[1] = new community("Community chest", 17);
	comm[2] = new community("Community chest", 33);

	const char** arr;
	arr = new const char* [40];
	for (int i = 0; i < 40; i++)
	{
		arr[i] = new char[11];
	}
	arr[0] = "extra";
	arr[1] = "residential";
	arr[2] = "community";
	arr[3] = "residential";
	arr[4] = "taxes";
	arr[5] = "property";
	arr[6] = "residential";
	arr[7] = "chance";
	arr[8] = "residential";
	arr[9] = "residential";
	arr[10] = "extra";
	arr[11] = "residential";
	arr[12] = "property";
	arr[13] = "residential";
	arr[14] = "residential";
	arr[15] = "property";
	arr[16] = "residential";
	arr[17] = "community";
	arr[18] = "residential";
	arr[19] = "residential";
	arr[20] = "extra";
	arr[21] = "residential";
	arr[22] = "chance";
	arr[23] = "residential";
	arr[24] = "residential";
	arr[25] = "property";
	arr[26] = "residential";
	arr[27] = "residential";
	arr[28] = "property";
	arr[29] = "residential";
	arr[30] = "extra";
	arr[31] = "residential";
	arr[32] = "residential";
	arr[33] = "community";
	arr[34] = "residential";
	arr[35] = "property";
	arr[36] = "chance";
	arr[37] = "property";
	arr[38] = "taxes";
	arr[39] = "property";
	int proIndex = 0;
	int communityIndex = 0;
	int chanceIndex = 0;
	int taxIndex = 0;
	int resIndex = 0;
	bool bankrupt = false;
	int resSoldCheck = -99;
	int  proSoldCheck = -99;
	for (int i = 0; i < 20; i++)
	{
		res[i][0].initialiseSymbol();
		//cout << "Your player is" << res[i][0].getplayersymbol() << endl;
	}
	for (int i = 0; i < 8; i++)
	{
		pro[i][0].initialiseSymbol();
		//cout << "Your player is" << pro[i][0].getplayersymbol() << endl;
	}

	cout << "Enter number of players:" << endl;
	int p;
	cin >> p;
	char s;
	while (p < 2 || p>5)
	{
		cout << "max number of player is 5 minimum is 2" << endl;
		cout << "enter again" << endl;
		cin >> p;
	}
	player* playerarray = new player[p];
	for (int i = 0; i < p; i++)
	{
		s = i + 35;
		playerarray[i].setSymbol(char(s));
	}
	cout << "Initial amount set!" << endl;
	for (int i = 0; i < p; i++)
	{
		playerarray[i].setcash(5000);
	}
	int currentplayer = 1;//current player

	int choice = 0;

	bool cashSoundCheck;

	bool round = false;//has player gone around the board

	while (window.isOpen())
	{
		PlayerTurnText.setString(PlayerTurnString(currentplayer));
		window.setMouseCursorVisible(true);
		//window.setKeyRepeatEnabled(false);
		sf::Event event;
		while (window.pollEvent(event))
		{
			switch (event.type)
			{
			case sf::Event::Closed:
				window.close();
				break;
			case sf::Event::MouseButtonPressed:
				auto mouse_pos = sf::Mouse::getPosition(window); // Mouse position relative to the window
				auto translated_pos = window.mapPixelToCoords(mouse_pos); // Mouse position translated into world coordinates
				if (RollSprite.getGlobalBounds().contains(translated_pos)) // Rectangle-contains-point check 	// Mouse is inside the sprite.
				{
					cin>>roll;
					DiceRollMusic.setPlayingOffset(sf::seconds(0));
					DiceRollMusic.play();
					{

						if (roll == 1)
						{
							DiceSprite.setTexture(DiceN1Texture);
							DiceSprite.setPosition(sf::Vector2f(320, 960));
							DiceSprite.setScale(0.25, 0.25);
						}
						else if (roll == 2)
						{
							DiceSprite.setTexture(DiceN2Texture);
							DiceSprite.setPosition(sf::Vector2f(320, 960));
							DiceSprite.setScale(0.25, 0.25);
						}
						else if (roll == 3)
						{
							DiceSprite.setTexture(DiceN3Texture);
							DiceSprite.setPosition(sf::Vector2f(320, 960));
							DiceSprite.setScale(0.25, 0.25);
						}
						else if (roll == 4)
						{
							DiceSprite.setTexture(DiceN4Texture);
							DiceSprite.setPosition(sf::Vector2f(320, 960));
							DiceSprite.setScale(0.25, 0.25);
						}
						else if (roll == 5)
						{
							DiceSprite.setTexture(DiceN5Texture);
							DiceSprite.setPosition(sf::Vector2f(320, 960));
							DiceSprite.setScale(0.25, 0.25);
						}
						else if (roll == 6)
						{
							DiceSprite.setTexture(DiceN6Texture);
							DiceSprite.setPosition(sf::Vector2f(320, 960));
							DiceSprite.setScale(0.25, 0.25);
						}
						window.draw(DiceSprite);
						window.display();
					}
					wholeFunctionality(playerarray, currentplayer, roll, round, bankrupt, res, pro, p, Player1CashText, Player2CashText, Player3CashText, Player4CashText, Player5CashText, resIndex, proIndex, cashSoundCheck, resSoldCheck, proSoldCheck);
					if (proSoldCheck != -99)
					{
						RemovePlaterFromSoldPropertyNonRes(Box5Star, Box12Star, Box15Star, Box25Star, Box28Star, Box35Star, Box37Star, Box39Star, proSoldCheck);
						proSoldCheck = -99;
					}
					if (resSoldCheck != -99)
					{
						RemovePlayerFromSoldPropertyRes(Box1Star, Box3Star, Box6Star, Box8Star, Box9Star, Box11Star, Box13Star, Box14Star, Box16Star, Box18Star, Box19Star, Box21Star, Box23Star, Box24Star, Box26Star, Box28Star, Box27Star, Box29Star, Box31Star, Box32Star, Box34Star, resSoldCheck);
						resSoldCheck = -99;
					}
					if (cashSoundCheck == true)
					{
						CashMusic.setPlayingOffset(sf::seconds(0));
						CashMusic.play();
						cashSoundCheck = false;
					}
					if (playerarray[currentplayer - 1].getposition() == res[resIndex]->getPosition()) 
					{
						if (playerarray[currentplayer - 1].getSymbol() == res[resIndex]->getplayersymbol()) 
						{
							setPlayerAtOwnedPropertyRes(Box1Star, Box3Star, Box6Star, Box8Star, Box9Star, Box11Star, Box13Star, Box14Star, Box16Star, Box18Star, Box19Star, Box21Star, Box23Star, Box24Star, Box26Star, Box28Star, Box27Star, Box29Star, Box31Star, Box32Star, Box34Star, currentplayer, playerarray[currentplayer - 1].getposition());
						}
					}
					if (playerarray[currentplayer - 1].getposition() == pro[proIndex]->getPosition()) 
					{
						if (playerarray[currentplayer - 1].getSymbol() == pro[proIndex]->getplayersymbol()) 
						{
							setPlayerAtOwnedPropertyNonRes(Box5Star, Box12Star, Box15Star, Box25Star, Box28Star, Box35Star, Box37Star, Box39Star, currentplayer, playerarray[currentplayer - 1].getposition());
						}
					}
					if (currentplayer == 1)
					{
						Player_1_Sprite.setPosition(sf::Vector2f(getCoordinates(playerarray[currentplayer - 1].getposition())));
					}
					else if (currentplayer == 2)
					{
						Player_2_Sprite.setPosition(sf::Vector2f(getCoordinates(playerarray[currentplayer - 1].getposition())));
					}
					else if (currentplayer == 3)
					{
						Player_3_Sprite.setPosition(sf::Vector2f(getCoordinates(playerarray[currentplayer - 1].getposition())));
					}
					else if (currentplayer == 4)
					{
						Player_4_Sprite.setPosition(sf::Vector2f(getCoordinates(playerarray[currentplayer - 1].getposition())));
					}
					else if (currentplayer == 5)
					{
						Player_5_Sprite.setPosition(sf::Vector2f(getCoordinates(playerarray[currentplayer - 1].getposition())));
					}
					currentplayer++;
					if (currentplayer > p)
					{
						currentplayer = 1;
					}
				}
			}
		}

		window.clear();
		window.draw(ScoreBoardSprite);
		window.draw(Boardsprite);
		window.draw(RollSprite);
		window.draw(DiceSprite);
		window.draw(Player_1_Sprite);
		window.draw(Player_2_Sprite);
		window.draw(Player_3_Sprite);
		window.draw(Player_4_Sprite);
		window.draw(Player_5_Sprite);
		window.draw(PlayerTurnText);
		window.draw(Box1Star);
		window.draw(Box3Star);
		window.draw(Box5Star);
		window.draw(Box6Star);
		window.draw(Box8Star);
		window.draw(Box9Star);
		window.draw(Box11Star);
		window.draw(Box12Star);
		window.draw(Box13Star);
		window.draw(Box14Star);
		window.draw(Box15Star);
		window.draw(Box16Star);
		window.draw(Box18Star);
		window.draw(Box19Star);
		window.draw(Box21Star);
		window.draw(Box23Star);
		window.draw(Box24Star);
		window.draw(Box25Star);
		window.draw(Box26Star);
		window.draw(Box27Star);
		window.draw(Box28Star);
		window.draw(Box29Star);
		window.draw(Box31Star);
		window.draw(Box32Star);
		window.draw(Box34Star);
		window.draw(Box35Star);
		window.draw(Box37Star);
		window.draw(Box39Star);
		window.draw(ScoreBoardText);
		window.draw(Player1Text);
		window.draw(Player2Text);
		window.draw(Player3Text);
		window.draw(Player4Text);
		window.draw(Player5Text);
		window.draw(Player1CashText);
		window.draw(Player2CashText);
		window.draw(Player3CashText);
		window.draw(Player4CashText);
		window.draw(Player5CashText);
		window.display();
	}
}
