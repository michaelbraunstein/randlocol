/*
Michael Braunstein
August 3, 2018
CISS 290 320
Rand L Col
Wohlleber



Correctly complete the following assignment.  Follow all directions.
The main purpose is to show the STL - the list functions along with the
iterator and algorithms.

The final .cpp file and a separate output .txt text file (copied and
pasted from the console screen) should be submitted.

Hint: Good Guides:  6-3 on lists, 6-6 on algorithms.
randllocol.docx

List Random Numbers

Write a program that will insert random integers between 1
and 150 into a list and perform some calculations.  You will
prompt the user to ask them the number of elements in your
list.  You will then get that many random numbers between
1 and 150 and put them in the list.

You will use a function to sort the numbers in your list.
Now, use an iterator to the screen to print the elements in your list.

Let’s work with the list to perform some calculations.
Use iterators, algorithms, and list functions (not the user's
input variable) to find the sum (iterate through to sum up
the elements), mean (average is sum divided by size of list),
median (middle value - find the size and use the iterator to
move up half way by iterating the iterator half the size
times), and range (use algorithms to find the highest and
lowest and then take the difference between highest and
lowest).  Then print the labeled values (with the mean
to three decimal places).

Output:
List of sorted List numbers on separate lines.
The sum, average to three decimal places, median,
and range of the numbers in your list.

Document your program with at least 4 lines of
comments at the top and at least 5 comments
throughout the code for all of the not easily understandable
lines of code.  Run your program twice using the following
number of elements.  Submit your main program and submit
the output text file of results.

1st run: 5 numbers
2nd run: 25 numbers


*/


#include<iostream>
#include<cstdlib>
#include<list>
#include<iterator>
#include<algorithm>
#include<ctime>
#include<cmath>



using namespace std;


int main() {
	list<int> ls,  lt;
	int j, k, r, m, n, o, p, s, a, sum =0, size;
	double i;
	srand(time(NULL));
	ostream_iterator<int> osit(cout, "\n");
	list<int>::iterator listi , listj ;


	// first round
	cout << " \n Set of five random numers generated between 1 and 150: \n " << endl;


	for (i = 0; i<5; i++) {
		r = rand() % 150 + 1;
		ls.push_back(r);

	}

	cout << "\n original list of elements \n " << endl;
	copy(ls.begin(), ls.end(), osit);


	cout << "\n sorted list of elements \n" << endl;
	ls.sort();
	copy(ls.begin(), ls.end(), osit);


	cout << "\n" << "ls.size " << ls.size() << " \n " << endl;

	//sum elements sum (iterate through to sum up the elements)
	cout << "\n Sum of elements \n " << endl;


	for (listi = ls.begin(); listi != ls.end(); listi++) {
		sum += *listi;
	}
		cout << " sum of list is:  " << sum << "\n" << endl;

	


	// mean average elements mean (average is sum divided by size of list), 
	cout << "\n Average of elements \n " << endl;

	for (listi = ls.begin(); listi != ls.end(); listi++) {
		sum += *listi;
	}
		n = (sum / ls.size() );
		cout << " Average of list is:  " << n << "\n" << endl;
	

	// median elements median (middle value - find the size and use 
	//the iterator to move up half way by iterating the iterator half the size times)


	cout << "\n Median of elements \n " << endl;


	listi = ls.begin();
	for (i = 0; i < (ls.size() / 2); i++) {
		listi++;
	}
		cout << " Median number of list is:  " << *listi << "\n" << endl;
	

	//range (use algorithms to find the highest and lowest and then take the difference between highest and lowest).  
	cout << "\n Range of elements \n " << endl;
 


	listi = max_element(ls.begin(), ls.end());
	listj = min_element(ls.begin(), ls.end());
	p = *listi - *listj;
	cout << " Range of list is:  " << p << "\n" << endl;

	
	/*
	{}
	[]
	[]
	[]
	[]
	[]
	SECOND ROUND
	[]
	[]
	[]
	[]
	[]
	{}
	*/

	cout << "second round" << " \n" << endl;


	cout << "\n Set of twenty five random numers generated between 1 and 150: " << endl;

	for (j = 0; j < 25; j++) {
		m = rand() % 150 + 1;
		lt.push_back(m);
	}

	cout << "\n original \n " << endl;
	copy(lt.begin(), lt.end(), osit);

	cout << "\n sorted \n" << endl;
	lt.sort();
	copy(lt.begin(), lt.end(), osit);



	cout << "\n" << "lt.size " << lt.size() << " \n " << endl;

	//sum elements sum (iterate through to sum up the elements)
	cout << "\n Sum of elements \n " << endl;


	for (listi = lt.begin(); listi != lt.end(); listi++) {
		sum += *listi;
	}
		cout << " sum of list is:  " << sum << "\n" << endl;

	


	// mean average elements mean (average is sum divided by size of list), 
	cout << "\n Average of elements \n " << endl;

	for (listi = lt.begin(); listi != lt.end(); listi++) {
		sum += *listi;
		n = (sum / 25);}
		cout << " Average of list is:  " << n << "\n" << endl;
	

	// median elements median (middle value - find the size and use 
	//the iterator to move up half way by iterating the iterator half the size times)


	cout << "\n Median of elements \n " << endl;

	listi = lt.begin();
	for (i = 0; i < (lt.size() / 2); i++) {
		 listi++;}
		cout << " Median number of list is:  " << *listi << "\n" << endl;
	

	//range (use algorithms to find the highest and lowest and then take the difference between highest and lowest).  
	cout << "\n Range of elements \n " << endl;

	 
	listi = max_element (lt.begin(), lt.end());
	listj = min_element (lt.begin(), lt.end());
	p = *listi - *listj;
	cout << " Range of list is:  " << p << "\n" << endl;




	cout << " \n End of application \n" << endl;
	system("pause");
	return 0;


};
