#include "Paladin.h"

Paladin::Paladin()
{
    damage = 15;
    health = 25;
    intellect = 20;
    strenght = 20;
}

void Paladin::GetInfo()
{
    Warrior::GetInfo();
    cout << "��������� - " << intellect << endl;
    cout << "��������� ���������� � ����� ���������� - ";
    for (int i = 0; i < lvl; i++)
    {
        cout << spell[i] << endl;
    }
}

void Paladin::Create()
{
    cout << "�� ������� ��������" << endl;
    cout << "������� ��� ���������\t";
    cin >> name;
    GetInfo();
    GetWeapons();
    CastSpell();
}

Paladin::~Paladin()
{
    cout << name << " ���������� � �������� " << endl;
}