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