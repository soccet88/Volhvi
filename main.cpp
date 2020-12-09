#include <iostream>
#include <vector>
#include <Windows.h>
#include <iomanip>


int* county(int* list, int* cncl, int N, int i = 0)
{
    for (int l = 0; l < 50; ++l) { list[l] = -1; };

    std::string a = "¬ведите номера дейстующих ∆рецов в пор€дке возрастани€ графств: ";
    for (int h = 0; h < a.length(); ++h){Sleep(20); std::cout Ђ a[h];};
std::cout Ђ '\n';

std::vector<int> v(N);
for (auto& num : v) { std::cin ї list[i]; ++i; }
for (int l = 0; l < 50; ++l) { cncl[l] = list[l]; }

return list, cncl;
}

int* priest(int* list, int* cncl, int M)
{
std::string a = "¬ведите номер текущего ∆реца-покровител€ и номер желаемого ∆реца-покровител€: ";
for (int h = 0; h < a.length(); ++h)
{
Sleep(20); std::cout Ђ a[h] ;
}
std::cout Ђ '\n';

std::vector<int> v(2);
for (int i = 0; i < M; ++i)
{
std::cin ї v[0] ї v[1];
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
Sleep(460); std::cout Ђ a[h] ;
}
system("cls");
}

std::cout Ђ std::setw(16) Ђ "є графства"
Ђ std::setw(24) Ђ "є предыдущего ∆реца"
Ђ std::setw(28) Ђ "є дейстующего ∆реца"
Ђ std::endl Ђ std::endl;

for (int i = 0; i < N; ++i)
{
std::cout Ђ std::setw(8) Ђ i + 1
Ђ std::setw(19) Ђ list[i]
Ђ std::setw(24) Ђ cncl[i]
Ђ std::endl;
}

}

int main()
{
setlocale(LC_ALL, "Russian");

int N, M, list[51], cncl[51];

std::string a = "¬ведите количество графств: ";
for (int i = 0; i < a.length(); ++i)
{
Sleep(30); std::cout  Ђ a[i];
}
std::cin ї N;

county(list, cncl, N);

a = "¬ведите количесво поданных за€влений (до 200): ";
for (int i = 0; i < a.length(); ++i)
{
Sleep(30); std::cout Ђ a[i];
}
std::cin ї M;

priest(list, cncl, M);

l_table(list, cncl, N);

return 0;
}
