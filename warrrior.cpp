#include "warrrior.h"
#include <iostream>

using namespace std;

Warrior::Warrior()
{
    cout << "����������� ����� �� ���������" << endl;
    name = "����";
    health = 35;
    damage = 10;
}

Warrior::Warrior(string name, unsigned int health, float damage)
{
    cout << "��������� ����������� �����" << endl;
    this->name = name;
    this->health = health;
    this->damage = damage;
}

void Warrior::GetWeapons()
{
    cout << name << " ���� � ���� " << weapons[lvl - 1];
}

void Warrior::GetInfo()
{
    Npc::GetInfo();
    cout << "���� - " << strenght << endl;
    cout << "��������� ������ - ";
    for (int i = 0; i < lvl; i++)
    {
        cout << weapons[i] << endl;
    }
}

void Warrior::Create()
{
    cout << "�� ������� �����" << endl;
    cout << "������� ��� ���������\t";
    cin >> name;
    GetInfo();
    GetWeapons();
}

Warrior::~Warrior()
{
    cout << name << " ��� ������� �������" << endl;
}
