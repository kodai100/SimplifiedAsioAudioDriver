#include <stdio.h>
#include <string.h>
#include <iostream>
#include "asiosys.h"
#include "asio.h"
#include "asiodrivers.h"

//
//int main()
//{
//
//	AsioDrivers* asioDrivers = new AsioDrivers();
//
//	char buffer[10][32] = {};
//	char* buf[10];
//
//	for (auto i = 0; i < 10; ++i) {
//		buf[i] = buffer[i];
//	}
//	int availableDriverNum = asioDrivers->getDriverNames(buf, 10);
//
//	std::cout << availableDriverNum << " drivers found. =====" << std::endl;
//
//	for (int i = 0; i < availableDriverNum; ++i) {
//		std::cout << i  << " : " << buf[i] << std::endl;
//	}
//
//
//	delete asioDrivers;
//}