//**************************C++ STL**************************
#include<iostream>
#include<utility>
using namespace std;
int main(){
	//Defining a pair 
//	Data type can be anything
//Pairs are used combine two data elements
// Pair generally lies in utility library
	pair<int,int>p={1,3};


//Accessing both element seperately in pair
	cout<<p.first<<" "<<p.second<<endl;//1 3

//Nested Property Of pair 
// storing three values in a pair
pair<int,pair<int,int>> pp={1,{3,4}};
cout<<pp.first<<" "<<pp.second.first<<" "<<pp.second.second<<endl;//1 3 4

//Pair can be used as a Data Type
//Declaring array of pair data type
pair<int,int> arr[]={{1,2},{2,5},{3,1}};
cout<<arr[0].first<<endl;//1
cout<<arr[1].second;//5
	return 0;
}
