#include <iostream>
#include <string>
#include <list>
using namespace std;




int main() {
	
	list<string> lst;
	lst.push_back("Huseyin");//listenin sonuna ekle
	lst.push_front("UZUN");//listenin başına ekle
	lst.insert(++lst.begin(), "Trabzonn");//başın sağına ekle
	list<string>::iterator it = lst.begin();//list.begin listenin ilk öğresini işaret eden bir pointer geri döndürür
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