#include <windows.h>
#include <iostream>
#include "Header.h"
#include <cmath>
#include "npc.h"
#include "warrrior.h"
#include "Wizard.h"
#include "Paladin.h"
#include "worldevil.h"
//#include "nililay.h"


//������������ �������:
//private - ���������, ����� ������������ ������ ������ ������ ������
//protected - ����������, ������ ������ ��������� � ������� �����������
//public - �������������, ����� ������������ �����, � ��� ����� � �������� ������ ���������

using namespace std;

class Player
{
    public:
        void Create(Npc* player)
        {
            player->Create();
        }
};

int main()
{
    setlocale(LC_ALL, "Rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Warrior* warrior = new Warrior();
    Warrior* warrior2 = new Warrior();

    cout << "\n����� �� �����?(1-��,0-���)\n" << (*warrior == *warrior2) << endl << endl;

    Wizard* wizard = new Wizard();
    Wizard* wizard1 = new Wizard();
    Wizard* wizard2 = new Wizard();
    Wizard* megaWizard = new Wizard();
    *megaWizard = *wizard1 + *wizard2;
    cout << "\n\n***����������***\n";
    megaWizard->GetInfo();
    cout << "***����������***\n\n";
    
    /*
    Paladin* paladin = new Paladin();
    *paladin = *wizard + *warrior;
    cout << "\n\n***Paladin***\n";
    paladin->GetInfo();
    cout << "***Paladin***\n\n";*/

    Player* player = new Player();

    cout << "������, ������\n������� � ������ � �������� � ����\n";
    cout << "�� � ������ ���?(1 - ����� ��������, 2 - ���������)\n";
    unsigned short choise = 1;
    //������� ���������� ������� ��� �������� ������� ������
    cin >> choise;
    while (choise > 2 || choise < 1)
    {
        cout << "��������, �� ������, ������� �����\n";
        cin >> choise;
    }

    if (choise == 1)
    {
        cout << "�������� � ����\n\t1 - ����\n\t2 - ���������\n\t3 - �������";
        //______________________________
        //������� �� ����� ������� ��� �������� ������� ������
        cin >> choise;
        while (choise > 3 || choise < 1)
        {
            cout << "��������, �� ������, ������� �����\n";
            cin >> choise;
        }

        //__________________________
        /*switch (choise)
        {
        case 1: {
        player.Create(&warrior); 
        delete wizard;
        delete paladin;
        }
        case 2: { 
        player.Create(&wizard);
        delete warrior;
        delete paladin;
        }
        case 3: { 
        player.Create(&paladin); 
        delete warrior;
        delete wizard;
        }
        }*/

    }


    //Paladin* player3 = new Paladin();
    //player3->Create();
    //delete player3;

    //cout << "������� �� ������� ����� " << sum(5, 6) << endl;
    //Nililay* Abcd = new Nililay("Bvz");
    //Abcd->HI();
    //delete Abcd;




    return 0;
}