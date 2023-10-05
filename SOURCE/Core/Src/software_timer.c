/*
 * software_timer.c
 *
 *  Created on: Oct 1, 2023
 *      Author: tuann
 */

#include "software_timer.h"

int timer1_counter;
int timer1_flag=0;
int status=2;

void settimer1(int duration)
{
	timer1_counter=duration;
	timer1_flag=0;
}

void timerrun()
{
	if(timer1_counter>0)
	{
		timer1_counter--;
	}
	if(timer1_counter<=0)
	{
         timer1_flag=1;
         status++;
	}
    if(status>2){status=1;}
}





