#include "Wizard.h"

Wizard::Wizard()
{
    cout << "����������� ���������� �� ���������" << endl;
    name = "���������";
    health = 23;
    damage = 15;
}

Wizard::Wizard(string name, unsigned int health, float damage)
{
    cout << "��������� ����������� ����������" << endl;
    this->name = name;
    this->health = health;
    this->damage = damage;
}

void Wizard::GetInfo()
{
    Npc::GetInfo();
    cout << "��������� - " << intellect << endl;
    cout << "��������� ���������� � ����� ���������� - ";
    for (int i = 0; i < lvl; i++)
    {
        cout << spell[i] << endl;
    }
}

void Wizard::CastSpell()
{
    cout << name << " ��������� " << spell[lvl - 1] << endl;
}

void Wizard::Create()
{
    cout << "�� ������� ����������" << endl;
    cout << "������� ��� ���������\t";
    cin >> name;
    GetInfo();
    CastSpell();
}

Wizard::~Wizard()
{
    cout << name << " �������� ���" << endl;
}

