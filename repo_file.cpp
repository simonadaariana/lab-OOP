
#include "repo_file.h"
#include <cstring>
#include <fstream>
using namespace std;


RepoFile::RepoFile():Repo()
{
	fileName = nullptr;
}

RepoFile::RepoFile(char* file_name)
{
    fileName = file_name;
	if (fileName != NULL)
	{
		fileName = new char[strlen(file_name) + 1];
		strcpy_s(fileName, sizeof(file_name) + 1, file_name);
		loadFromFile();
	}
	else
	{
		fileName = NULL;
	}
}

RepoFile::~RepoFile(){
}

char* RepoFile::getFileName()
{
	return fileName;
}

void RepoFile::setFileName(char* fileName)
{

	if (fileName != NULL)
	{
		fileName = new char[strlen(fileName) + 1];
		strcpy_s(fileName, strlen(fileName) + 1, fileName);
	}
}

void RepoFile::loadFromFile()
{
    ifstream file;
    Produs produs;
    string brand;

    file.open("produse.txt", ios::in);
    while(!file.eof())
    {
        file >> produs.cod;
        file >> brand;
        //strcpy(produs.brand, brand.c_str());
        produs.brand = &brand[0];
        file >> produs.pret;
        addElem(produs);
    }

    file.close();
/*	if (fileName != NULL)
	{
	    int i;
	    for (i = 0; i < getSize(); i++)
            addElem(elem[i]);
	}
	saveToFile();
	*/
}

void RepoFile::saveToFile(){

    ofstream fout(fileName);
    int i;
	if (fileName != NULL)
	{
	    int dim;
	    dim = getSize();

		for (i = 0; i < dim; i++)
		{
			fout << elem[i] << endl;
		}
	}
}
