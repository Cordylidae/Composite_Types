#include<iostream>
#include<string>
#include<cstring>
#include<array>
using namespace std;

/*
int main() // 1
{
	int age;
	char Fname[80], Lname[80], Grade;
	cout << "What is your first name? ";
	cin.getline(Fname, 80);
	cout << "What is your last name? ";
	cin.getline(Lname, 80);
	cout << "What letter grade do you deserve? ";
	cin>>Grade;
	cout << "What is your age? ";
	cin >> age;

	cout << "Name: " << Lname<< ", "<< Fname << endl;
	cout << "Grade: " << char(Grade+1) << endl;
	cout << "Age: " << age << endl;


}*/
/*
int main() // 2
{
	int age;
	string Fname, Lname;
	char Grade;
	cout << "What is your first name? ";
	getline(cin,Fname);
	cout << "What is your last name? ";
	getline(cin,Lname);
	cout << "What letter grade do you deserve? ";
	cin >> Grade;
	cout << "What is your age? ";
	cin >> age;

	cout << "Name: " << Lname + ", " + Fname << endl;
	cout << "Grade: " << char(Grade + 1) << endl;
	cout << "Age: " << age << endl;

	return 0;
}*/
/*
int main() // 3
{
	char Fname[80], Lname[80],Fin[200];
	cout << "Enter your first name: ";
	cin.getline(Fname, 80);
	cout << "Enter your last name: ";
	cin.getline(Lname, 80);
	
	strcpy_s(Fin, Lname);
	strcat_s(Fin, ", ");
	strcat_s(Fin, Fname);

	cout << "Here's the information in a string: " << Fin << endl;

	return 0;
}*/
/*
int main() // 4
{
	
	string Fname, Lname , Fin;
	
	cout << "Enter your first name: ";
	getline(cin,Fname);
	cout << "Enter your last name: ";
	getline(cin,Lname);
	
	Fin = Lname + ", " + Fname;
	cout << "Here's the information in a string: " << Fin << endl;
	

	return 0;
}*/
/*
int main() // 5
{
	struct CandyBar
	{
		std::string name;
		double weight;
		int kkal;
	};

	CandyBar snack = {
		"Mocha Munch",
		2.3,
		350
	};

	cout << "Name of CandyBar: " << snack.name << "\nWeight on gramm: " << snack.weight << "\nKkal in product: " << snack.kkal << endl;

	return 0;
}*/
/*
int main() // 6
{
	struct CandyBar
	{
		std::string name;
		double weight;
		int kkal;
	};

	CandyBar snack[3] = {
		{"Lion", 2.3, 350},
		{"Sneakers", 4.3, 100},
		{"Bounty", 0.1, 999}
	};

	for(int i=0;i<3;i++)
	cout << "Name of CandyBar: " << snack[i].name << "\tWeight on gramm: " << snack[i].weight << "\tKkal in product: " << snack[i].kkal << endl;

	return 0;
}*/
/*
int main() // 7
{
	struct Pizza
	{
		std::string name;
		double diametr;
		double weight;
	};

	Pizza pizza;

	cout << "Enter name of pizza: ";
	getline(cin, pizza.name);
	cout << "Enter diametr of pizza: ";
	cin >> pizza.diametr;
	cout << "Enter weight of pizza: ";
	cin >> pizza.weight;

	cout << "Pizza name`s: "<< pizza.name<<endl;
	cout << "Pizza diametrs is: "<< pizza.diametr<<endl;
	cout << "Pizza weight: "<< pizza.weight<<endl;

	return 0;
}*/
/*
int main() // 8
{
	struct Pizza
	{
		string name;
		double diametr;
		double weight;
	};

	Pizza * pizza = new Pizza;

	cout << "Enter diametr of pizza: ";
	cin >> pizza->diametr;

	cout << "Enter name of pizza: ";
	cin.get();
	getline(cin, pizza->name);

	cout << "Enter weight of pizza: ";
	cin >> pizza->weight;
	

	cout << "Pizza name`s: "<< pizza->name<<endl;
	cout << "Pizza diametrs is: "<< pizza->diametr<<endl;
	cout << "Pizza weight: "<< pizza->weight<<endl;

	delete pizza;

	return 0;
}*/
/*
int main() // 9
{
	struct CandyBar
	{
		std::string name;
		double weight;
		int kkal;
	};

	CandyBar* snack = new CandyBar[3]{
		{"Lion",1,54},
		{"Snake",2,54},
		{"Bounty",3,44}
	};


	CandyBar* snack2 = new CandyBar[3];
	snack2[0] = { "Lion", 2.3, 350 };
	snack2[1] = { "Sneakers", 4.3, 100 };
	snack2[2] = { "Bounty", 0.1, 999 };

	for (int i = 0; i < 3; i++) {
		cout << "Name of CandyBar1: " << snack[i].name << "\tWeight on gramm: " << snack[i].weight << "\tKkal in product: " << snack[i].kkal << endl;
		cout << "Name of CandyBar2: " << snack2[i].name << "\tWeight on gramm: " << snack2[i].weight << "\tKkal in product: " << snack2[i].kkal << endl<<endl;
	}
	return 0;
}
*/
/*
int main() // 10
{
	double ser=0;
	array<double, 3> Run;
	
	for (int i = 0; i < 3; i++) {
		cout << "Enter rezult of " << i + 1 << " try on zabeg 40 metriv: ";
		
		
		//double x;
		//cin >> x;
		//Run[i] = x;
		
		cin >> Run[i];

		ser += Run[i];
	}
	for (int i = 0; i < 3; i++) {
		cout << "Rezult of " << i + 1 << " try: "<<Run[i]<<endl;
	}
	cout <<"Ser rezult is: "<< ser / 3 << endl;
	return 0;
}*/