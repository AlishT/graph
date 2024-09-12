#pragma once

#include <string>
#include <vector>
#include <iostream>


class Graph
{
	std::string name;
	std::vector <std::string> strName;
	std::vector <std::vector<int>> matrix;
public:
	
	Graph(std::string _name) :
		name(_name)
	{

	}

	void resize(size_t size);
	void addNode(std::string headNode, std::string node);
	void removeNode(std::string headNode, std::string node);
};
