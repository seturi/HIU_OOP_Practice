#include <stdlib.h>
#include <cstdio>
#include <stdexcept>
using namespace std;

char* ReadFromFile(const char* filename, size_t numChars) {
	FILE* f; char* buffer = NULL;
	try
	{
		buffer = new char[numChars + 1];
		f = fopen(filename, "rb");
		if (f == NULL) throw runtime_error("Can't open file!");
		if (fread(buffer, numChars, 1, f) != numChars) throw runtime_error("Can't read enough characters!");
		fclose(f);
		buffer[numChars] = '\0';
		return buffer;
	}
	catch (...)
	{
		delete[] buffer;
		if (f!= NULL) fclose(f);
		throw;
	}
}
