#include <string>
#include "Struct.h"

void free_memory()
{
    members.clear();
}



vector<man> members;

int main()
{
    int i = 1;
    string s = "";
    do
    {
        bool ext = true;
        cout << ">"; sin >> s
        switch (s)
        case "!add": ;// func add;
        case "!del": ;// func delete;
        case "!chg": ;// func change;
        case "!prt": ;// func print;
        case "!frd": ;// func fileRead;
        case "!fwr": ;// func fileWriter;
        case "!hpl": print_menuhelp();// func hlp;
        case "!ext": ext = false;// func ext;
        default cout << "Wrong argement" << endl;
    }
    while(ext);
    free_memory;
    return 0;
}