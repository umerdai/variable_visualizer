#include <iostream>
#include <unordered_set>
#include <cctype>
using namespace std;

class lexer {
private:

    string keyword[4] = { "int","char","float","string" };
    char operators[4] = { '+','-','/','*' };
    char punctation[1] = { ';' };
    string identifier[1] = { "cout" };
    char local_input[100];
    unsigned short keyword_counter = 0;
    int j = 0;
    string temp;
    int local_size = 0;
    bool check = false;
public:
    lexer(const char* input, int size)
    {
        for (int i = 0; i < size; i++)
        {

            local_input[i] = input[i];
            local_size = size;


        }for (int j = 0; j < local_size; j++)
        {
            cout << local_input[j];
        }
        cout << endl;
        checkingkeyword();
    };

    bool isKeyword(string str) {
        bool flag = false;


        for (int i = 0; i <= keyword->size(); i++)
        {
            /*cout << str.length() - 1;*/

            if (str.compare(keyword[i]) == 0)
            {
                flag = true;
                break;
            }
        }
        return flag;
    }

    void checkingkeyword()
    {

        for (int i = 0; i < local_size; i++)
        {

            if (local_input[i] != ' ')
            {
                temp += local_input[i];

            }
            else {

                bool check = isKeyword(temp);
                if (check)
                {
                    cout << temp << " is a keyword: " << endl;
                    temp = "";
                }
                else
                {
                    cout << temp << " is not a keyword: " << endl;
                    temp = "";
                }
            }

        }
        /*
         local_input.erase(std::remove(local_input.begin(), local_input.end(), ' '), local_input.end());

             if (isdigit(c))  {
                 cout << "is a number";
                 keyword_counter++;
             }
             else {
                 cout << c << " is not a number." << std::endl;
             }*/

    }
};

int main()
{

    char str[100] = "int a=3; int b=4; cout<<a+b; char char ";

    lexer l(str, strlen(str));

    return 0;
}