// 1.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <conio.h>

void main()
{
	int myid;
	do
	{
		printf("Nhap ID khong vuot qua 4 chu so: ");
		scanf_s("%d", &myid);
	} while (myid > 9999);

	int serial = 0;
	serial += myid + 76 + 1 + 907;
	serial += serial;
	serial = serial * 3;
	serial -= 1;
	printf("Your serial: %d\n", serial);
	_getch();
}
