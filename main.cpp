#include <iostream>
#include <vector>
#include <Windows.h>
#include <iomanip>


int* county(int* list, int* cncl, int N, int i = 0)
{
    for (int l = 0; l < 50; ++l) { list[l] = -1; };

    std::string a = "������� ������ ���������� ������ � ������� ����������� �������: ";
    for (int h = 0; h < a.length(); ++h){Sleep(20); std::cout � a[h];};
std::cout � '\n';

std::vector<int> v(N);
for (auto& num : v) { std::cin � list[i]; ++i; }
for (int l = 0; l < 50; ++l) { cncl[l] = list[l]; }

return list, cncl;
}

int* priest(int* list, int* cncl, int M)
{
std::string a = "������� ����� �������� �����-����������� � ����� ��������� �����-�����������: ";
for (int h = 0; h < a.length(); ++h)
{
Sleep(20); std::cout � a[h] ;
}
std::cout � '\n';

std::vector<int> v(2);
for (int i = 0; i < M; ++i)
{
std::cin � v[0] � v[1];
for (int j = 0; j < 50; ++j)
{
if (list[j] == v[0]) { cncl[j] = v[1]; }
}
}
return cncl;
}

void l_table(int* list, int* cncl, int N, std::string a = ". . .")
{
system("cls");
for (int i = 0; i < 3; ++i)
{
for (int h = 0; h < a.length(); ++h)
{
Sleep(460); std::cout � a[h] ;
}
system("cls");
}

std::cout � std::setw(16) � "� ��������"
� std::setw(24) � "� ����������� �����"
� std::setw(28) � "� ����������� �����"
� std::endl � std::endl;

for (int i = 0; i < N; ++i)
{
std::cout � std::setw(8) � i + 1
� std::setw(19) � list[i]
� std::setw(24) � cncl[i]
� std::endl;
}

}

int main()
{
setlocale(LC_ALL, "Russian");

int N, M, list[51], cncl[51];

std::string a = "������� ���������� �������: ";
for (int i = 0; i < a.length(); ++i)
{
Sleep(30); std::cout  � a[i];
}
std::cin � N;

county(list, cncl, N);

a = "������� ��������� �������� ��������� (�� 200): ";
for (int i = 0; i < a.length(); ++i)
{
Sleep(30); std::cout � a[i];
}
std::cin � M;

priest(list, cncl, M);

l_table(list, cncl, N);

return 0;
}
