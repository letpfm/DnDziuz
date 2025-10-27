#pragma once
#ifndef WORLDEVIL_H
#define WORLDEVIL_H
#include <iostream>

using namespace std; 

class worldevil {
protected: //����������� ������� ���������� (���� ������ ������ ������ �������� � ����������)
    //�� ��� ��� �� ���� ������ � �������� ������ ���������
    string name{ "��������" };
    unsigned int health{ 10 };
    float damage{ 5 };
    unsigned short lvl{ 1 };
    bool isAlive{ true };
public:

    // ����������� 
    worldevil(string n, int h, float d, unsigned short l, bool isA);
    // ������������  
    worldevil();
    worldevil(string n);
    worldevil(string n, int h);

    // �������� ����� info

    ~worldevil();


};


#endif // !WORLDEVIL_H