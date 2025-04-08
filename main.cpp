//#include <iostream>
//#include <algorithm>
//
//#define Number		45
//#define Shuffle_Count		1000
//
//using namespace std;
//
//int Lotto[Number] = { 0, };
//int Number1 = 0;
//int Number2 = 0;
//int Number3 = 0;
//int Number4 = 0;
//int Number5 = 0;
//int Number6 = 0;
//
//void Initialize()
//{
//	srand((unsigned int)time(NULL));
//
//	for (int Index = 0; Index < Number; Index++)
//	{
//		Lotto[Index] = Index + 1; // 1~45
//	}
//}
//
//void Shuffle()
//{
//	int Temp = 0;
//	for (int Count = 0; Count < Number * Shuffle_Count; Count++)
//	{
//		int First = rand() % Number; // 0~44
//		int Second = rand() % Number; // 0~44
//		Temp = Lotto[First];
//		Lotto[First] = Lotto[Second];
//		Lotto[Second] = Temp;
//	}
//}
//
//void Input()
//{
//	cout << "Please enter 6 numbers between 1 and 45." <<endl;
//	cout << "First Num: ";
//	cin >> Number1;
//	cout << "Second Num: ";
//	cin >> Number2;
//	cout << "Third Num:  ";
//	cin >> Number3;
//	cout << "Fourth Num: ";
//	cin >> Number4;
//	cout << "Fifth Num ";
//	cin >> Number5;
//	cout << "Sixth Num: ";
//	cin >> Number6;
//	cout << endl;
//}
//
//void Print()
//{
//	cout << "This week's lottery numbers are : ";
//	for (int i = 0; i < 6; ++i)
//	{
//		cout << Lotto[i] << " ";
//	}
//}
//
//void Check()
//{
//	if (Number1 == Lotto[0] || Number1 == Lotto[1] || Number1 == Lotto[2] || Number1 == Lotto[3] || Number1 == Lotto[4] || Number1 == Lotto[5])
//	{
//		if (Number2 == Lotto[0] || Number2 == Lotto[1] || Number2 == Lotto[2] || Number2 == Lotto[3] || Number2 == Lotto[4] || Number2 == Lotto[5])
//		{
//			if (Number3 == Lotto[0] || Number3 == Lotto[1] || Number3 == Lotto[2] || Number3 == Lotto[3] || Number3 == Lotto[4] || Number3 == Lotto[5])
//			{
//				cout << "3 numbers are correct." << endl;
//				if (Number4 == Lotto[0] || Number4 == Lotto[1] || Number4 == Lotto[2] || Number4 == Lotto[3] || Number4 == Lotto[4] || Number4 == Lotto[5])
//				{
//					cout << "4 numbers are correct." << endl;
//					if (Number5 == Lotto[0] || Number5 == Lotto[1] || Number5 == Lotto[2] || Number5 == Lotto[3] || Number5 == Lotto[4] || Number5 == Lotto[5])
//					{
//						cout << "5 numbers are correct." << endl;
//						if (Number6 == Lotto[0] || Number6 == Lotto[1] || Number6 == Lotto[2] || Number6 == Lotto[3] || Number6 == Lotto[4] || Number6 == Lotto[5])
//						{
//							cout << "6 numbers are correct." << endl;
//							cout << "You won the lottery!" << endl;
//						}
//					}
//				}
//			}
//		}
//	}
//}
//
//int main() 
//{
//	Initialize();
//	Shuffle();
//	Input();
//	Print();
//	Check();
//
//	return 0;
//}
//


#include <iostream>

using namespace std;

int Pockets[45] = { 0, };

void Initailize()
{
	for (int i = 0; i < 45; ++i)
	{
		Pockets[i] = i + 1;
	}
}

void Shuffle()
{
	for (int i = 0; i < 45 * 1000; ++i)
	{
		int Temp = 0;
		int First = rand() % 45;
		int Second = rand() % 45;
		Temp = Pockets[First];
		Pockets[First] = Pockets[Second];
		Pockets[Second] = Temp;
	}
}

void Print()
{
	for (int i = 0; i < 6; ++i)
	{
		cout << Pockets[i] << endl;
	}
}

int main()
{
	/*int Pockets[45] = { 0, };
	int* P = Pockets;
	cout << P << endl;
	cout << P[0] << endl;
	cout << &P[0] << endl;
	cout << &P;*/
	//int A = 10;
	//int* PA = &A; // PA = A의 주소
	//cout << A << endl; // 10
	//cout << &A << endl; // &A A의 주소
	//cout << PA << endl; // &A
	//cout << *PA << endl; // A의 주소에 있는 값
	//bool B = true;
	//bool* PB = &B;
	//cout << PB << endl;
	/*int Size = 10;
	int* PA = new int[Size];
	int A[10] = { 0, };*/

	Initailize();
	Shuffle();
	Print();

	return 0;
}