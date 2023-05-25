#include<string>
#include<fstream>

#include <iostream>
using namespace std;

int statemachine(string str, int lenght)
{
    string str1 = "is";
    bool flag = false;
    int counter = 0;
    for (int i = 0; i < lenght; i++)
    {

        if (str1[0] == str[i]) {
            if (str1[1] == str[i + 1]) {
                flag = true;
                counter++;
            }
            else {
                flag = false;
            }
        }
        else {
            flag = false;
        }

        cout << str[i] << endl;

    }
    cout << counter;
    return 0;
}
int main()
{
    string input = "my name is chef is";
    int len = input.length();
    statemachine(input, len);
    return 0;
}
//file i/o
//using namespace std;
//int main()
//{
//	string line;
//	string str = "";
//	fstream myfile;
//	cout << "reading from the test file: " << endl;
//	myfile.open("test_file.txt",ios::in);
//	if (myfile.is_open()) {
//		while(getline(myfile, line)){
//			str += line + "\n";
//		}
//		cout << str;
//		myfile.close();
//	}
//
//}