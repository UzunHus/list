#include <iostream>
#include <string>
#include <list>
using namespace std;




int main() {
	
	list<string> lst;
	lst.push_back("Huseyin");//listenin sonuna ekle
	lst.push_front("UZUN");//listenin ba��na ekle
	lst.insert(++lst.begin(), "Trabzonn");//ba��n sa��na ekle
	list<string>::iterator it = lst.begin();//list.begin listenin ilk ��resini i�aret eden bir pointer geri d�nd�r�r
	it++;
	it++;
	lst.insert(it, 3, "Trabzon");
	it--;
	lst.erase(it);//son Trabzonu sil
	/*for (it = lst.begin();it != lst.end();it++)
		cout << *it << endl;*/
	lst.sort();
	while (!lst.empty()) {
		cout << lst.front() << endl;
		lst.pop_front();
	}

















	return 0;
}