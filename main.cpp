#include <iostream>
#include <algorithm>

#define Number		45

using namespace std;

int Lotto[Number] = { 0, };
int Number1;
int Number2;
int Number3;
int Number4;
int Number5;
int Number6;

void Initialize()
{
	srand((unsigned int)time(NULL));

	for (int Index = 0; Index < Number; Index++)
	{
		Lotto[Index] = Index + 1; // 1~45
	}
}

void Shuffle()
{
	int Temp = 0;
	for (int Count = 0; Count < Number * 1000; Count++)
	{
		int First = rand() % Number; // 0~44
		int Second = rand() % Number; // 0~44
		Temp = Lotto[First];
		Lotto[First] = Lotto[Second];
		Lotto[Second] = Temp;
	}
}

void Input()
{
	cout << "Please enter 6 numbers between 1 and 45." <<endl;
	cout << "First Num: ";
	cin >> Number1;
	cout << "Second Num: ";
	cin >> Number2;
	cout << "Third Num:  ";
	cin >> Number3;
	cout << "Fourth Num: ";
	cin >> Number4;
	cout << "Fifth Num ";
	cin >> Number5;
	cout << "Sixth Num: ";
	cin >> Number6;
	cout << endl;
}

void Check()
{
	if (Number1 == Lotto[0] || Number1 == Lotto[1] || Number1 == Lotto[2] || Number1 == Lotto[3] || Number1 == Lotto[4] || Number1 == Lotto[5])
	{
		if (Number2 == Lotto[0] || Number2 == Lotto[1] || Number2 == Lotto[2] || Number2 == Lotto[3] || Number2 == Lotto[4] || Number2 == Lotto[5])
		{
			if (Number3 == Lotto[0] || Number3 == Lotto[1] || Number3 == Lotto[2] || Number3 == Lotto[3] || Number3 == Lotto[4] || Number3 == Lotto[5])
			{
				if (Number4 == Lotto[0] || Number4 == Lotto[1] || Number4 == Lotto[2] || Number4 == Lotto[3] || Number4 == Lotto[4] || Number4 == Lotto[5])
				{
					if (Number5 == Lotto[0] || Number5 == Lotto[1] || Number5 == Lotto[2] || Number5 == Lotto[3] || Number5 == Lotto[4] || Number5 == Lotto[5])
					{
						if (Number6 == Lotto[0] || Number6 == Lotto[1] || Number6 == Lotto[2] || Number6 == Lotto[3] || Number6 == Lotto[4] || Number6 == Lotto[5])
						{
							"You won the lottery!";
						}
					}
				}
			}
		}
	}
}

void Print()
{
	cout << "This week's lottery numbers are : ";
	cout << Lotto[0] << " " << Lotto[1] << " " << Lotto[2] << " " << Lotto[3] << " " << Lotto[4] << " " << Lotto[5] << endl;
}

int main() 
{
	Initialize();
	Shuffle();
	Input();
	Check();
	Print();

	return 0;
}

