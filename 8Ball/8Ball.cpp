// 8Ball.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <ctime>
#include <stdlib.h>

using namespace std;

string getAnswer()
{
	string answers[20] = { "This could happen","The choice is yours","I doubt it","Only time can tell","Yes","No","The tides are shifting","You may never know","Its a good idea","Take your time","That was a lie","The truth was told","Anything is possible","No response","Thats a hard one","Yes it will come","Protect your feelings","Others do care","To many mistakes" };

	int answerSize = sizeof(answers - 1);

	return answers[rand() % answerSize];
}



int main()
{
	
	srand(time(0));
	string answer;
	string question;

	

	cout << "********* "<< endl;
	cout << "Welcome to Magic 8 Ball\t" << endl;
	cout << "********* " << endl;

	char cgetAnswer = 'y';

	while (cgetAnswer == 'y') 
	{
		
		cout << "Please ask your question: " << endl;
		getline(cin, question);
		

		if (question != "") {
			cout << "Thinking....." << endl;

			cout << getAnswer() << endl;
			cout << "Would you like to ask something else?(y-for yes)(n-for no)" << endl;
			cin >> cgetAnswer;
			cin.ignore();
		}
		
		else if(question=="")
		{
			cout << "You didnt ask a question" << endl;
		}
	}
	
	system("pause");
	return 0;

}

