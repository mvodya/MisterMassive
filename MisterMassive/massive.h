#pragma once
#include <iostream>

class Massive {
private:
	double** data; // ���������� ��� ������.
	int m_, n_; // ������� �������.
public:
	void init(int & m, int & n); // ������������� � �������� �������.
	friend std::ostream & operator<<(std::ostream & os, const Massive & masive); // �������� ������� ������� � ������� (� ������� cout).

	// ��������� ��������.
	Massive operator+(Massive & massive); // �������� ��������.
	Massive operator+(double & object); // ������� �������� �������.
	Massive operator*(Massive & massive); // ��������� ��������.
	Massive operator^(Massive & massive); // ���������������� ��������.
};