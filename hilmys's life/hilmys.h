/*
 * hilmys.h
 *
 *  Created on: Jan 28, 2020
 *      Author: Niveus Caelus
 */

#ifndef HILMYS_H_
#define HILMYS_H_

#include <string.h>
#include <stdio.h>

typedef struct user
{
	int money;
} userstatus;

typedef struct bot
{
	int id;
	char name;
	char class;
	int health;
	int mp;
	int hapiness;
	int hygine;
	int social;
} botstatus[3];

typedef struct enemy
{
	int id;
	char name;
	int health;
	int droprate;
} enemystatus;

typedef struct map /*otoritas kota-semakin tinggi nilai development fitur kota semakin banyak*/
{
	char name;
	int development;
};


void createBot()
{
	printf("Give your Robot a name: \n");
	scanf("%s", strcpy);
}
botstatus record;
void makeBot() /*buat bikin robot mesti ada fungsi for*/
{
	record.id=1;
	strcpy(record.name, "hilmys");
	record.health = 50;
	record.class = "adventurer";
	record.mp = 100;
	record.hapiness = 50;
	record.hygine = 50;
	record.social = 0;
}

void KasiMakanan()
{
	record.health += 20;
	record.hygine -= 10;
}

void Mandikan(bot)
{
	botstatus record;
	record.hygine += 20;
}

#endif /* HILMYS_H_ */
