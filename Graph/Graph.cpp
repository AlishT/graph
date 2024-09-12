
#include <string>
#include <vector>
#include <iostream>
#include <stdio.h>
#include "Graph.h"


void Graph::addNode(std::string headNode, std::string node)
{
	if (find(strName.begin(), strName.end(), node) == strName.end())
	{
		strName.push_back(node);
	}

	resize(strName.size());
}

void Graph::removeNode(std::string headNode, std::string node)
{
	if (find(strName.begin(), strName.end(), node) != strName.end())
	{
		auto index = find(strName.begin(), strName.end(), node) - strName.end();

		for (auto& row : matrix)
		{
			row.erase(row.begin() + index);
		}

		matrix.erase(matrix.begin() + index);

		strName.erase(find(strName.begin(), strName.end(), node));
	}

}

void Graph(size_t size)
{
	std::vector<std::vector<int>> oldMatrix = matrix;
	matrix = std::vector<std::vector<int>>(size, std::vector<int>(size, 0));

	for (size_t row = 0; row < std::min(size, oldMatrix.size()); row++)
	{
		for (size_t col = 0; col < std::min(size, oldMatrix.size()); col++)
		{
			matrix[row][col] = oldMatrix[row][col];
		}
	}
}