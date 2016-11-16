using namespace std;

void print_members(man* mem) 
{
    cout << mem->fam << " " 
         << mem->name << " "
         << mem->surname << endl;
    
    cout << "Stage: " << "  ";
    cout << mem->ages << endl;
 
    cout << "Byke type: " << "  ";
    cout << (mem->typebyke == 1 ? "MTP" : "")
         << (mem->typebyke == 2 ? "Road" : "")
         << (mem->typebyke == 3 ? "Hibrid" : "") 
         << (mem->typebyke == 4 ? "Electro" : "");
}

void print_all()
{
    int i = 1;
    for (man mem : members)
    {
        cout << i++ << ". ";
        print_members(&mem);
        cout << endl;
    }
    
}

void print_menuhelp();
{
    cout << "!add - Меню Добавления "<< endl;
    cout << "!del - Меню удаления" << endl;
    cout << "!chg - Меню изменения" << endl;
    cout << "!prt - Просмотр Базы данных" << endl;
    cout << "!hlp - Подсказка" << endl;
    cout << "!fwr - Запись в файл" << endl;
    cout << "!frd - Чтение из файла" << endl;
    cout << "!ext - Выход" << endl;
}

void addhelp();
{
    cout << " " << endl;
    cout << " " << endl;
    cout << " " << endl;
}

void check_enter(bool *b, bool *e, string str);
{
    switch (str)
    case "!enter": *e = false;
    case "!back":  *b = false;
    case "!help":  ;
}

bool check_vhod(bool b, bool e)
{
    if (b = false || e = false) return false;
    else return true;
}
void add_member(int* i);
{
    string s = "";
    man* item;
    bool b = true;
    bool b = true;
    do
    {
        if (check_vhod(b,e))
        {
            cout << "Enter fam > ";
            cin >> s;
        }
        if (check_vhod(b,e))
        {
            cout << "Enter name > ";
            cin >> s;
        }
        if (check_vhod(b,e))
        {
            cout << "Enter surname > ";
            cin >> s;
        }
        if (check_vhod(b,e))
        {
            cout << "Enter type of byke (1 - MTP, 2 - Road, 3 - Hibrid, 4 - Electro) >";
            cin >> s;
        }
        if (check_vhod(b,e))
        {
            cout << "Stage >";
            cin >> s;
        }
    }
    while (e == true && b = true);
    if (b = false) cout << "Move to menu";
    if (e = false) cout << "Adding item";
}