#pragma once
#ifndef PALADIN_H
#define PALADIN_H
#include "warrrior.h"
#include "Wizard.h"
#include <iostream>

using namespace std;

//2 ���������� �������� � 2 ������ ��� ������ �������. ����������� �������������� �� � ����������� (draw.io)
class Paladin : public Warrior, public Wizard //������������� ������������
    //������ �������� ������������� ����� 
{
public:
    Paladin();
    void GetInfo() override;
    void Create() override;
    ~Paladin();
};

#endif // !PALADIN_H