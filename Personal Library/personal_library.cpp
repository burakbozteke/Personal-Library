#include <iostream>
#include "pch.h"
#include <utility>
#include "personal_library.h"
#include <Windows.h>
#include <algorithm>
#include <iterator>
#include <cstring>

static const char* x;
static int birinci;
static int ikinci;
static unsigned index;

void veriler(const unsigned int a, const unsigned int b)
{
	index = 0;
	birinci = a;
	ikinci = b;
}

int topla()
{
index++;
	return birinci + ikinci;
}

int cikart()
{
	index++;
	return birinci - ikinci;
}


int carp()
{
	index++;
	return birinci * ikinci;
}

int bol()
{
	index++;
	if (ikinci==0)
	{
		return -1;
	}
	else
	{
		return birinci / ikinci;
	}
}

unsigned islem_sayisi()
{
	return index;
}

const char* test()
{
	const char* name = "Süleyman";
	return name;
}

const char* cevir(const char* metin, const char* kaynakDil, const char* hedefDil)
{

	return "deneme";
}//fonksiyon sonu