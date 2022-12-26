//7.1
/*
#include <iostream>
#include <string>
using namespace std;
void print(string s)
{
	cout << s << endl;
}
int main()
{
	setlocale(LC_ALL, "");
	string n;
	cin >> n;
	print(m.substr(2, 3));
	int index = n.find("a");
	print(to_string(index));
	if (index == 0) cout << "Символа а не найдено" << endl;
}*/
//7.2

#include <iostream>
#include <string>
#include <regex>
using namespace std;
bool name(string a)
{
	regex n("[A-Z][a-z]*?");
	return regex_search(a, n);
}
int main()
{
	setlocale(LC_ALL, "");
	string m;
	cout << "Введите имя: " << endl;
	cin >> m;
	if (name(m)) cout << m << endl;
	else cout << "Ошибка" << endl;
	string n = "tita222@gmail.com, farifari@mail, game45@gmail.com";
	cmatch result;
	regex regular("([\\w-]+)(@)([\\w-]+)(\.)([a-z]{2,5})");
	auto words_begin = sregex_iterator(n.begin(), n.end(), regular);
	auto words_end = sregex_iterator();
	for (sregex_iterator it = words_begin; it != words_end; ++it)
		cout << it->str() << endl;
}





