/*Kim Kosman and Sarah Olson
 *
 * SKTravel
 * Activity class implementation
 */

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "Activity.h"

Activity::Activity(string cityname){
	string activity;
        string file = cityname;
        file.append(".txt");
        ifstream activityFile;
        activityFile.open(file.c_str());

        while (! activityFile.eof()){
                getline(activityFile, activity);
                activities.push_back(activity);
        }
}

int Activity::bucketMatch(vector<string> bucketList){
        int match=0;

        for (int i=0;i<activities.size();i++){
		string activity=activities[i];
                for (int k=0;k<activity.size();k++)
                        activity[k]=tolower(activity[k]);
		cout << activity << " " << endl;
                for (int j=0;j<bucketList.size();j++){
                        if (activity.compare(bucketList[j])==0){
                                match++;
			}
                }
        }
        return match;
}

void Activity::printActivities(){
        for (int i=0;i<5;i++)
                cout << "       " << activities[i] << endl;
}
