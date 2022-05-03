// EXAMP1. Function Template: (main purpose is for same argument taking different values(int,char,string etc), see example ) 

//#include <iostream>
//#include<conio.h>
//#include <string>
//
//using namespace std;
//
//template <typename T>
//inline T const& Max(T const& a, T const& b)
//{
//	return a < b ? b : a;
//}
//int main()
//{
//
//	int i = 39;
//	int j = 20;
//	cout << "Max(i, j): " << Max(i, j) << endl;
//
//	double f1 = 13.5;
//	double f2 = 20.7;
//	cout << "Max(f1, f2): " << Max(f1, f2) << endl;
//
//	string s1 = "Hello";
//	string s2 = "World";
//	cout << "Max(s1, s2): " << Max(s1, s2) << endl;
//	_getch();
//	return 0;
//}


// EXAMP2. Class Template:
//
//#include <iostream>
//#include <vector>
//#include <cstdlib>
//#include <string>
//#include <stdexcept>
//#include<conio.h>
//using namespace std;
//
//template <class T>
//class Stack {
//private:
//	vector<T> elems;     // elements 
//
//public:
//	void push(T const&);  // push element 
//	void pop();               // pop element 
//	T top() const;            // return top element 
//	bool empty() const {       // return true if empty.
//		return elems.empty();
//	}
//};
//
//template <class T>
//void Stack<T>::push(T const& elem)
//{
//	// append copy of passed element 
//	elems.push_back(elem);
//}
//
//template <class T>
//void Stack<T>::pop()
//{
//	if (elems.empty()) {
//		throw out_of_range("Stack<>::pop(): empty stack");
//	}
//	// remove last element 
//	elems.pop_back();
//}
//
//template <class T>
//T Stack<T>::top() const
//{
//	if (elems.empty()) {
//		throw out_of_range("Stack<>::top(): empty stack");
//	}
//	// return copy of last element 
//	return elems.back();
//}
//
//int main()
//{
//	try {
//		Stack<int>         intStack;  // stack of ints 
//		Stack<string> stringStack;    // stack of strings 
//
//		// manipulate int stack 
//		intStack.push(7);
//		cout << intStack.top() << endl;
//
//		// manipulate string stack 
//		stringStack.push("hello");
//		cout << stringStack.top() << std::endl;
//		stringStack.pop();
//		stringStack.pop();
//	}
//	catch (exception const& ex) {
//		cerr << "Exception: " << ex.what() << endl;
//		_getch();
//		return -1;
//	}
//}




// function template own expl
//#include <iostream>
//#include <string>

//using namespace std;

//template <typename T>
// T const& Max(T const& a, T const& b) {
//	return a < b ? b : a;
//}

//template <typename som>
//som test(som a, som b)
//{
//	if (a < b)
//		return a;
//	else
//	{
//		return b;
//	}
//}
//
//int main() {
//	int i = 39;
//	int j = 20;
//	std::cout << "Max(i, j): " << test(i, j) << std::endl;
//
//	double f1 = 13.5;
//	double f2 = 20.7;
//	std::cout << "Max(f1, f2): " << test(f1, f2) << std::endl;
//
//	std::string s1 = "World";
//	std::string s2 = "Hello";
//	std::cout << "Max(s1, s2): " << test(s1, s2) <<std:: endl;
//
//	return 0;
//}




// class template.


// if else or decision making statements
// 1. if will always come with some condition or condions
// 2. else never come with any condition
//3. else will never come alone, always come with if.
//4. if can come alone but else can't come alone.
// 5. same above rules will be for nested(more then one if else) if else.

////Loops (1. for loop, 2. while loop, 3. do while loop)
//#include<iostream>
//using namespace std;
//void main()
//{
//	//loop
//	int x;
//	for (x=1; x < 10; x++)// 1st is var value declaration, 2nd will be condition, 3rd will be update of var/x
//	{
//		cout << x<<". hello game\n";
//	}
//}



////Loops table 
//#include<iostream>
//using namespace std;
//void main()
//{
//	//loop
//	int x;
//	for (x = 1; x<=10; x++)// 1st is var value declaration, 2nd will be condition, 3rd will be update of var/x
//	{
//		cout <<"2*"<<x<<" == "<<(2*x)<<endl;
//	}
//}


////Loops reverse table 
//#include<iostream>
//using namespace std;
//void main()
//{
//	//loop
//	int x;
//	for (x = 10; x >0; x--)// 1st is var value declaration, 2nd will be condition, 3rd will be update of var/x
//	{
//		cout << "2*" << x << " == " << (2 * x) << endl;
//	}
//}





////while loop
//#include<iostream>
//using namespace std;
//void main()
//{
//	int speed = 11;
//	while (speed <= 10)
//	{
//		cout << " I m running\n";
//		speed++;
//	}
//}


//while loop
//#include<iostream>
//using namespace std;
//void main()
//{
//	int speed = 11;
//	do
//	{
//		cout << " I m running\n";
//		speed++;
//	} 
//	while (speed <= 10);
//}


//string data types
//#include<iostream>
//using namespace std;
//void main()
//{
//	string s;
//	cout << "please enter ur name\n";
//	cin >> s;
//	cout << "u entered string as === " << s << endl;
//}


// Pointer  (*, **, ***)
//#include<iostream>
//#include<string>
//using namespace std;
//void main()
//{	
//	//one ponter
//	int speed = 100;
//	int* p = &speed;// normal pointer var
//	cout << "value of speed var == " << speed<<endl;
//	cout << "address of speed == " << &speed << endl;
//	cout << "value of pointer var ==" << p << endl;
//	cout << "addres of pointer var == " << &p<<endl;
//	cout << "value at pointer var == " << *p << endl;
//
//	// 2-pointers
//	
//	int** y = &p;// pointer inside pointer
//	cout << "value of speed var == " << speed << endl;
//	cout << "address of speed == " << &speed << endl;
//	cout << "value of pointer var ==" << p << endl;
//	cout << "addres of pointer var == " << &p << endl;
//	cout << "value at pointer var == " << *p << endl;
//	cout << "value of y == " << y << endl;
//	cout << "address of y == " << &y << endl;
//	cout << "value at y ==" << *y << endl;
//	cout << "value at y ==" << **y << endl;
//} 


// Test for 2-interger array dynamically
//#include<iostream>
//using namespace std;
//int n;
//
//void main()
//{
//	cout << "hello\n";
//	cout << "enter size of array\n";
//	cin >> n;
//	int* arr = new int[n];
//	cout << "now enter elements in to the arrays\n";
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cout<< arr[i]<<"  ";
//	}
//	for (int i = 0; i < n; i++)
//	{
//		int temp1 = arr[i];
//		for (int j = i + 1; j < n; j++)
//		{
//			int temp2 = arr[j];
//			if ((temp1 + temp2) == 0)
//			{
//				cout << "true\n";
//				break;
//			}
//			else
//				continue;			
//		}			
//	}
//}


// Test for 2-interger array dynamically with function
//#include<iostream>
//#include<conio.h>
//using namespace std;
//int n;
//
//bool IsSumTwoZero(int a)
//{
//	//int b = a;
//	int* arr = new int[a];
//	cout << "now enter elements in to the arrays\n";
//	for (int i = 0; i < a; i++)
//	{
//		cin >> arr[i];
//	}
//	cout << "u entered \n ";
//	for (int i = 0; i < a; i++)
//	{
//		cout << arr[i] << "  ";
//	}
//	for (int i = 0; i < a; i++)
//	{
//		int temp1 = arr[i];
//		for (int j = i + 1; j < a; j++)
//		{
//			int temp2 = arr[j];
//			if ((temp1 + temp2) == 0)
//			{
//				//cout <<endl<< "true";	
//				
//				return true;
//				break;
//			}
//			
//			else
//			{				
//				//continue;
//				//cout << endl << "true";
//				
//				
//			}continue;
//		}
//	}
//	
//}
//void main()
//{
//	cout << "hello\n";
//	cout << "enter size of array\n";
//	cin >> n;	
//	cout<<endl<<IsSumTwoZero(n);
//}

// Test for 3-interger array dynamically
//#include<iostream>
//using namespace std;
//int n;
//
//void main()
//{
//	cout << "hello\n";
//	cout << "enter size of array\n";
//	cin >> n;
//	int* arr = new int[n];
//	cout << "now enter elements in to the arrays\n";
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cout << arr[i] << "  ";
//	}
//	for (int i = 0; i < n; i++)
//	{
//		int temp1 = arr[i];
//		for (int j = i + 1; j < n; j++)
//		{
//			int temp2 = arr[j];
//			for (int k = i + 2; k < n; k++)
//			{
//				int temp3 = arr[k];
//				if ((temp1 + temp2+temp3) == 0)
//				{
//					cout << "true\n";
//					break;
//				}
//				else
//					continue;
//			}
//
//		}
//
//	}
//}


 ////Test for 3-interger array dynamically with function
//#include<iostream>
//#include<conio.h>
//using namespace std;
//int n;
//
//bool IsSumThreeZero(int a)
//{
//	//int b = a;
//	int* arr = new int[a];
//	cout << "now enter elements in to the arrays\n";
//	for (int i = 0; i < a; i++)
//	{
//		cin >> arr[i];
//	}
//	cout << "u entered \n ";
//	for (int i = 0; i < a; i++)
//	{
//		cout << arr[i] << "  ";
//	}
//	for (int i = 0; i < a; i++)
//	{
//		int temp1 = arr[i];
//		for (int j = i + 1; j < a; j++)
//		{
//			int temp2 = arr[j];
//			for (int k = i + 2; k < a; k++)
//			{
//				int temp3 = arr[k];
//				if ((temp1 + temp2 + temp3) == 0)
//				{
//					//cout <<endl<< "true";	
//					return true;
//					break;
//				}
//
//				else
//				{
//					//continue;
//					//cout << endl << "true";
//				}continue;
//			}
//		}
//	}
//	
//}
//void main()
//{
//	cout << "hello\n";
//	cout << "enter size of array\n";
//	cin >> n;	
//	cout<<endl<< IsSumThreeZero(n);
//}

//Test for 3-interger array dynamically with function
//#include<iostream>
//#include<conio.h>
//using namespace std;
//
//int pos = 3;
//class platformer
//{
//public:
//	
//	int arr[];
//	platformer(int n,int pos)
//	{
//		  arr[] = {0,1,2,3,4,5};
//		 for (int i = 0; i < 6; i++)
//		 {
//			 cout << "arr[" << i << "]==" << arr[i] << endl;
//		 }
//		 for (int i = 0; i < 6; i++)
//		 {
//			 jumpL();
//		 }
//
//	}
//
//	~platformer()
//	{
//	}
//	void jumpL()
//	{
//		for (int i = 0; i < 6; i++)
//		{
//			cout << "arr[" << i << "]==" << arr[i] << endl;
//		}
//	}
//	void jumpR()
//	{
//
//	}
//	int posi()
//	{
//
//	}
//};
//
//void main()
//{
//	platformer(6, 3);
//}