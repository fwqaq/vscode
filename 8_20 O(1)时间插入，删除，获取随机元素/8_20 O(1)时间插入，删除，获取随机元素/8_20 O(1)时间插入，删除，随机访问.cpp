#include <iostream>
#include <map>
using namespace std;

class RandomizedCollection{
private:
	multimap<int, int> myMap;
public:
	RandomizedCollection(){}

	//²åÈëÊý¾Ý
	bool insert(int val){
		myMap.insert(myMap.end(), { val, val });
		if (myMap.count() > 1){
			return false;
		}
		else{
			return true;
		}
	}
	bool remove(int val){
		multimap<int, int>::iterator it = myMap.find(val);
		if (it != myMap.end()){
			myMap.erase(it);
			return true;
		}
		else{
			return false;
		}
	}
	bool getRandom(){
		multimap<int, int>::iterator it = myMap.begin();
		int index = rand() % myMap.size();
		while (index-- > 0){
			it++;
		}
		return it->first;
	}
};