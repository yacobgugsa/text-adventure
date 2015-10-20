#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	bool Dub1 = false;
	bool Syr1 = false;
	bool Mosc1 = false;
	bool Pent1 = false;
	cout << "Osama Bin Laden's body has been exhumed from its secret" << endl
			<< "location by Al Qaida sympathizers! The President of the" << endl
			<< "United States has ordered you to help the U.S. Government" << endl
			<< "retrieve the body on penalty of death. Are you up to the" << endl
			<< "challenge, mah nigga?" << endl << endl;

	char letter;
	do
	{
		cout << "Select the area you want to search first: " << endl << endl;
		cout << "Dubai, stomping grounds for Al Qaida and ISIS sympathizers!" << endl;
		cout << "Syria, to ask Basher al-Assad. Maybe he knows what's going on." << endl;
		cout << "Moscow, to ask Vladimir Putin at the Kremlin." << endl;
		cout << "the Pentagon, in Washington, D.C." << endl;
		cin >> letter;
		switch (letter)
		{
			case 'D':
				Dub1 = true;
				break;
			case 'S':
				Syr1 = true;
				break;
			case 'M':
				Mosc1 = true;
				break;
			case 'P':
				Pent1 = true;
				break;
			default:
				cout << endl << "Invalid selection" << endl << endl;
				break;
		}
	}while (letter != 'D' && letter != 'S' && letter != 'M' && letter != 'P');

	if(Dub1 == true)
	{
		cout << endl << "You decide to go to Dubai. At the airport, you have a poppy seed bagel. Upon" << endl
		<< "landing in Dubai, you test positive for opium, and immediately have your passport" << endl
		<< "confiscated and are thrown into jail. The U.S. Government sentences you to death" << endl
		<< "in absentia for failing to help them." << endl << endl
		<< "THE END" << endl;
		return 0;
	}
	else if (Syr1 == true)
	{
		cout << endl << "You decide to go to Syria. A few hours after your plane lands in Damascus," << endl
		<< "you are headshotted by a Syrian government sniper. President Basher al-Assad" << endl
		<< "blames the rebels, the U.S., and Israel for your death." << endl << endl
		<< "THE END" << endl;
		return 0;
	}
	else if (Mosc1 == true)
	{
		cout << endl << "To your surprise, you are given an audience at the Kremlin with Putin. He declares" << endl
		<< "Russia's support to help you find the body snatchers. You don't notice that your tea" << endl
		<< "has been spiked with Polonium, and you die in your Moscow hotel room a few days later." << endl << endl
		<< "THE END" << endl;
		return 0;
	}
	else if (Pent1 == true)
	{
		cout << endl << "At the Pentagon, you meet Chairman of the Joint Chiefs of Staff, Adm." << endl
		<< "James O. Ellis, former NATO Supreme Allied Commander in southern Europe." << endl
		<< "Admiral Ellis tells you that around midnight" << endl << endl;
	}
	return 0;
}
