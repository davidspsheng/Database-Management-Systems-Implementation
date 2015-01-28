#include <iostream>

#include "Interpreter.h"

using namespace std;

char* catalog_path = "catalog";
char* dbfile_dir = "/home/sugar/";
char* tpch_dir = "/home/sugar/DATA/1G/";

int main (int argc, char* argv[]) {
    QueryInterp qi;
    qi.run();
    return 0;
}
