// CommandLineArguments_Animaker.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include<string>
#include <iostream>
#include<Windows.h>
#include<thread>

using namespace std;
bool stopingvalue = false;

void start()
{
    string startString, stopString;
    cout << "start function" << endl;
    while (1)
    {
        cin >> startString;
        stopString = "stop";
       
        if (stopString.compare(startString) == 0) {
            stopingvalue = true;
            cout << " ActionTerminated" << endl;
            exit(1);
        }
    }

    cout << "stop" << endl;
}


int main()
{
    int count = 0;
    thread t1;
    cout << "Plase Enter start to perform StartAction " << endl;
    std::string value, startstring;
    std::cin >> value;
    startstring = "start";

    if (startstring.compare(value) == 0) {
        t1 = thread(start);
    }

    while (stopingvalue == false) {

        Sleep(1000);
        count++;
        cout << "count value: " << count << endl;

    }
    t1.join();

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
