/* Kim Kosman and Sarah Olson
 *
 * SKTravel Tool
 * bucket list class
 */

#include "BucketList.h"
#include <vector>
#include <string>
using namespace std;

BucketList::BucketList(){
  size =0;
}
 
void BucketList::addItem(string item){
  list.push_back(item); //add an item to the vector
  size++;
}

void BucketList::removeItem(string item){
  int location=-1;
  for (int i=0;i<list.size();i++){
	if (item.compare(list[i]))
		location=i;
  }
  if (location != -1)
	list.erase(list.begin()+location);
}

vector<string> BucketList::getList(){
  return list;
}

void BucketList::clear(){
  list.clear();
  size=0;
}