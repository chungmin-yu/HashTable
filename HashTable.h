#ifndef HASHTABLE
#define HASHTABLE

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class HashTable{
	public:
		vector<string> key;
		vector<string> gender;
		vector<int> height;
		vector<int> weight;
		int n;
		HashTable(){
			n=0;
		}
		void addItem(string temp_key,string temp_gender,int temp_height,int temp_weight){
			key.push_back(temp_key);
			gender.push_back(temp_gender);
			height.push_back(temp_height);
			weight.push_back(temp_weight);
		}
		HashTable operator[](const string s){
			vector<string>::iterator iter = find(key.begin(),key.end(),s);
			n=distance(key.begin(),iter);
			return *this;
		}
		string getGender(){
			return gender[n];
		}    
        int getHeight(){
        	return height[n];
		}
        int getWeight(){
        	return weight[n];
		}
		
};

#endif
