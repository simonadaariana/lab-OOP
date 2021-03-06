#pragma once
#include "entitate.h"
#include "repo.h"
#include <fstream>
#include <cstring>

using namespace std;

class RepoFile:Repo {
private:
	Produs elem[10];
	char* fileName;
public:
	RepoFile();
	RepoFile(char* fileName);
	~RepoFile();

	char* getFileName();
	void setFileName(char* fileName);


	void loadFromFile();
	void saveToFile();
	void getAllFile(Produs *elem, int dim);

};

