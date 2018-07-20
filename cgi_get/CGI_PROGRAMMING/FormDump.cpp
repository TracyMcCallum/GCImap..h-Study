//: C10:FormDump.cpp
//{L} FormData
#include "FormData.h"
#include "../require.h"
int main(int argc, char* argv[]) {
	requireArgs(argc, 1);
	FormData fd(argv[1]);
	fd.dump();
} ///:~ 