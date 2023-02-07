//*******************************C++ STL ***************************
#include<iostream>
#include<vector>
using namespace std;
int main(){
	//Declaring a vector
	//Vector are Dynamic array we can change its size
	vector<int> v;
	//push_back-dynamically increase its size and push 1 at the back
	v.push_back(1);
	//emplace_back work same as push_back but emplace_back is faster than push_back
	v.emplace_back(2);
	
/****************************************************/	
	//defining a vector of pair datatype type
	vector<pair<int,int>> vec;
	
	vec.push_back({1,2});
	//curly braces is not required in emplace_back
	vec.emplace_back(3,4);

/**************************************************/
	vector<int> ve(5,100);//100 100 100 100 100
	
	//vector of size 5
	vector<int> vee(5);
	
	vector<int> v1(5,20);
	//copying v1 vector to v2 vector
	vector<int> v2(v1);
	
/**************************************************/
vector<int> vec1={20,15,10,5,0};
//syntax for declaring iterator
//iterator basically means it points to the memory address
vector<int>::iterator it=vec1.begin();
// vec1.begin() is an iterator pointing to the memory address of first element
it++;
cout<<*(it)<<" ";//15

it=it+2;
cout<<*(it)<<" ";//5
//vec1.end() pointing to the right after the last element
vector<int>::iterator itr=vec1.end();
//vec1.back prints the last element
cout<<vec1.back()<<endl;//0
	//printing vector using iterator
	for(vector<int>::iterator itrr=vec1.begin();itrr!=vec1.end();itrr++){
		cout<<*(itrr)<<" ";
	}
	cout<<endl;
/* instead of writting vector<int>::iterator we can use auto*/
// auto automatically assign data type according to the data
for(auto itr1=vec1.begin();itr1!=vec1.end();itr1++){
	cout<<*(itr1)<<" ";
} 
cout<<endl;
auto a=4;//we can also use auto as data type it assign data automatically
auto w="string";
//printing vector using for each loop
//here auto is int
for(auto it1:vec1){
	cout<<it1<<" ";
}
/****************************ERASE FUNCTION*****************************/
//{10,20,30,40,50}
v.erase(v.begin()+1);//{10,30,40,50}
	
//{10,20,12,23,43}
v.erase(v.begin()+1,v.begin()+3);//{10,23,43} [start,end) start is included and end is not included
	
/***********************INSERT FUNCTION****************************************/
vector<int> v(2,100);//{100,100}
v.insert(v.begin(),300);//{300,100,100}
	v.insert(v.begin()+1,2,10){300,10,10,100,100}
	
	//inserting one vector to another
	vector<int> copy(2,50);//{50,50}
	v.insert(v.begin(),copy.begin(),copy.end());//{50,50,300,10,10,100,100}
	
	//v.size() returns the number of elements in vector
	//v.pop_back() remove the last element from the vector 
	//v1->{10,20}, v2->{30,40}
	v1.swap(v2);//v1->{30,40} , v2->{10,20}
	v.clear();//erases the entire vector
	cout<<v.empty();//returns 1 if the vector is empty otherwise 0
	
	return 0;
}
