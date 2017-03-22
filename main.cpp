#include <iostream>
#include <clocale>
#include <fstream>
#include <string>
#include <cstring>
#include <cstdlib>

using namespace std;
int main()
{
    setlocale(LC_ALL, "rus"); // вызов функции настройки локали

    string line;
    ifstream myfile ("config.txt");
    if (myfile.is_open())
    {
        while ( myfile.good() )
        {
            getline (myfile,line);

            if (line.substr(0, strlen("NITRO_EFFECT = ")) == "NITRO_EFFECT = ") {
                int nitro = atoi(line.substr(strlen("NITRO_EFFECT = "), 100).c_str());

                //cout << "nitro = " << nitro << endl;
            }
            cout << line << endl;
        }
        myfile.close();
    }

    return 0;
}
