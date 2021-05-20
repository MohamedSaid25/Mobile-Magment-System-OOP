#include<iostream>
#include <string>
using namespace std;

class phone {                    // Abstraction


public:
	void editmodel() {
		cout << "The model of base model" << endl;
	}
	virtual void setname() = 0;
	virtual void setmodel() = 0;
	virtual void setprice() = 0;
	virtual void setphonenumber() = 0;
	virtual void setdate() = 0;
	virtual void display() = 0;
};
class newphone :public phone {  // inheritance  base is phone and child is newphone
private:
	string name;
	string model;
	string date;
	int phone_n;
	float price;
public:
	void setname() {
		string n;
		cout << "Enter User name \n";
		cin >> n;
		name = n;
		cout << endl;
	}

	void setmodel() {
		string m;
		cout << "Enter phone model" << endl;
		cin >> m;
		model = m;
		cout << endl;
	}
	void setphonenumber() {
		int pn;
		cout << "Enter Phone number of user\n ";
		cin >> pn;
		phone_n = pn;
		cout << endl;
	}
	void setprice() {

		float p;
		cout << "Enter price of Phone \n";
		cin >> p;
		price = p;
		cout << endl;
	}
	void setdate() {
		string d;
		cout << " Enter date of day \n";
		cin >> d;
		date = d;
		cout << endl;
	}
	void display() {
		cout << "\n                                   The All Infomation about User and Phone  \n\n";
		cout <<endl<< " The name of Customer is : " << name << endl << endl;
		cout << " The Model of Phone is : " << model << endl << endl;
		cout << " The price of Phone is : " << price << endl << endl;
		cout << " The Phone Number  of Customer is : " << phone_n << endl << endl;
		cout << " The date of day is  : " << date << endl << endl;
	}
	newphone() {
		cout << "\n                                   Please fill in this information \n\n";

	}

	~newphone() {
		cout << "\n                                             Congratulation \n\n";


	}
};
class modify {

private:
	string model1,model2;
	float price1,price2;
	string date;
public:
	string editmodel() {    // overloading function

		string mod1,mod2;
		cout << " Enter the old model " << endl;
		cin >> mod1;
		model1 = mod1;
		cout << endl << endl << "Enter The new Model\n";
			cin >> mod2;
			model2 = mod2;

			cout << endl;
			return "hjdsj";
	}

	void setprice() {
		float p1, p2;

		cout << " Enter old price \n";
			cin >> p1;
			price1 = p1; cout << endl;

			cout << " Enter New price \n";
			cin >> p2;
			price2 = p2;
			cout << endl;

	}

	void display() {

		cout << endl << "                                        The Date of phone after Modifying \n\n";

		cout << "The Old model of phone was [ " << model1<<" ] \n";
		cout << "\nThe new model of phone become [ " << model2 << " ] \n";
		cout << "                                                  ****************************\n\n";
		cout << "\nThe Old price of phone was [ " << price1 << " ] \n";
		cout << "\nThe new price of phone become [ " << price2 << " ] \n";
	}

	modify() {
		cout << endl << "                                        The modification process is in progress \n\n";

	}
	~modify() {
		cout << endl << "                                        The modification process has done \n\n";

	}
};
class search {

private :
	string model;
public:
	search() {
		cout << "                                          Searching   " << endl << endl;

	}
	~search() {

		cout << "                                              The search has been completed " << endl<<endl;

	}
	void setmodel() {
		string mo;
		cout << "Enter the model of phone \n"<<endl;
		cin >> mo;
		model = mo;

	}
	void display() {

		cout << "Information about phone you search about it \n\n";

		cout << " The Model of Phone is : Apple\n" << endl;
		cout << " The price of phone is : 20000\n" << endl;
		cout << " The color of phone is : Blace\n" << endl;
		cout << " The Date of phone is : 30/5/2020\n" << endl;
		cout << " The Manufacturing place of phone is : USA\n" << endl;
		cout << " The last update of phone was in: 30/5/2020\n" << endl;
	}

};
class buy :public newphone {};
class replace :public modify { //inheritance
private:
	string name;
	int phone_n;
	string date,model1,model2;
	float price1, price2;
public:
	~replace(){
		cout << "\n                                                The replacement has done successfully\n\n";
	}
	void setname() {
		string n;
		cout << "Enter User name \n";
		cin >> n;
		name = n;
		cout << endl;
	}
	void setphonenumber() {
		int pn;
		cout << "Enter Phone number of user\n ";
		cin >> pn;
		phone_n = pn;
		cout << endl;
	}
	void setdate() {
		string d;
		cout << " Enter date of day \n";
		cin >> d;
		date = d;
		cout << endl;
	}
	string editmodel() {    // overloading function

		string mod1, mod2;
		cout << " Enter the old model " << endl;
		cin >> mod1;
		model1 = mod1;
		cout << endl << endl << "Enter The new Model\n";
		cin >> mod2;
		model2 = mod2;

		cout << endl;
		return "hjdsj";      // not number to avoid expection error so return should be any string value
	}
	void setprice() {
		float p1, p2;

		cout << " Enter old price \n";
		cin >> p1;
		price1 = p1; cout << endl;

		cout << " Enter New price \n";
		cin >> p2;
		price2 = p2;
		cout << endl;

	}
	void display() {
		cout << "\nThe name of Customer is : " << name << endl;

		cout << "\nThe Old model of phone was [ " << model1 << " ] \n";
		cout << "\nThe new model of phone become [ " << model2 << " ] \n";
		cout << "\nThe Old price of phone was [ " << price1 << " ] \n";
		cout << "\nThe new price of phone become [ " << price2 << " ] \n";
		cout << "\nThe phone Number of customer is : " << phone_n << endl ;
		cout << "\nThe date of day is :" << date <<" \n";

	}
};
int main() {

	cout << endl<<"                                        Phone Management System \n";

	cout << "  [1]  Add new model of Phone \n\n";
	cout << "  [2]  Modify Phone Data \n\n";
	cout << "  [3]  Search for a phone \n\n";
	cout << "  [4]  Buy new phone \n\n";
	cout << "  [5]  Replacement Section \n\n";
	cout << "  [6]  Exit \n\n";

	int x;
	cout << " Please Choose an order \n";
	cin >> x;
	system("cls");

	if (x==1)
	{
		newphone*ptr;   // relyon polymorphism and overriding

		newphone p;
		ptr = &p;
		ptr->setname();
		ptr->setmodel();
		ptr->setprice();
		ptr->setphonenumber();
		ptr->setdate();
		system("cls");
		ptr->display();
	}
	if (x == 2) {
		modify m1;
		m1.editmodel();
		m1.setprice();
		system("cls");
		m1.display();

	}
	if (x == 3) {

		search s;
		s.setmodel();
		system("cls");
		s.display();


	}
	if (x == 4) {
		buy b;
		b.setname();
		b.setmodel();
		b.setprice();
		b.setphonenumber();
		b.setdate();
		system("cls");
		b.display();
	}
	if (x == 5) {
		replace r;

		r.setname();
		r.editmodel();
		r.setprice();
		r.setphonenumber();
		r.setdate();
		system("cls");
		r.display();

	}
	if (x == 6) {
		return 0;
	}


	system("pause");
	return 0;
}
