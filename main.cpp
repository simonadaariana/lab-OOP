#include <iostream>
#include "repo.h"
#include "entitate.h"
#include "service.h"
#include "ui.h"
#include "tests.h"
#include "repo_file.h"
#include "validator.h"

using namespace std;

int main()
{
    Service service (Repo);
    UserInterface ui;
    Tests test_all();
    Repo repo;
    Validator validator;
    Exceptie exceptie;
    ui.meniu();
    //RepoFile repofile("produse.txt");



    return 0;
}
