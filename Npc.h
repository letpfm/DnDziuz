#pragma once
#ifndef NPC_H
#define NPC_H
#include <iostream>

using namespace std;
//������� ����� (����������� - ���� �� 1 ����� ����� �����������)
class Npc
{
protected: //����������� ������� ���������� (���� ������ ������ ������ �������� � ����������)
    //�� ��� ��� �� ���� ������ � �������� ������ ���������
    string name{ "��������" };
    unsigned int health{ 10 };
    float damage{ 5 };
    unsigned short lvl{ 1 };

public: //��������� ����������� ������ (������������ ����� ����� � ����� �����)

    Npc();

    virtual void GetInfo(); //�������� ����� virtual 

    virtual void Create(); //�������� ����� virtual 

    ~Npc();
};
#endif // !NPC_H