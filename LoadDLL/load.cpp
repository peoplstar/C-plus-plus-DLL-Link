#include <stdio.h>
#include <Windows.h>

typedef int(*METHOD)(char* path);
METHOD p_sum;

int main(int argc, char* argv[]) {
	HINSTANCE sum_dll = LoadLibrary(L"CreateDLL.dll");
	p_sum = (METHOD)GetProcAddress(sum_dll, "Parsing");

	(*p_sum)(argv[1]);
	return 0;
}