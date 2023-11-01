/*
 * software_timer.c
 *
 *  Created on: Oct 1, 2023
 *      Author: tuann
 */

#include "software_timer.h"

int timer1_counter=0;
int timer1_flag=0;
int timer2_counter=0;
int timer2_flag=0;
int timer3_counter=0;
int timer3_flag=0;
int period_count = 0;
int status=0;
int index_led=0;
int led_buffer [4] = {1 , 2 , 3 , 4};

void settimer1(int duration)
{
	timer1_counter=duration;
	timer1_flag=0;
}
void settimer2(int duration)
{
	timer2_counter=duration;
	timer2_flag=0;
}
void settimer3(int duration)
{
	timer3_counter=duration;
	timer3_flag=0;
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
	}
	if(timer2_counter>0)
	{
			timer2_counter--;
	}
	if(timer2_counter<=0)
	{
	         timer2_flag=1;
	         status++;
	         period_count++;
	         if(status==0){status=1;}
	         else if(status>4){status=1;}
	}
	if(timer3_counter>0)
	{
			timer3_counter--;
	}
	if(timer3_counter<=0)
	{
	         timer3_flag=1;
	}

}





