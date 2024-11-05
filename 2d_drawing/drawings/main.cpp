#include<graphics.h>
#include <stdio.h>

main()
{
	initwindow(1000,524,"Window");
	
	//Definicion del circulo
	settextstyle(GOTHIC_FONT, HORIZ_DIR, 5);
	outtextxy(175, 100, "Sly Cooper");
	settextstyle(GOTHIC_FONT, HORIZ_DIR, 2);
	outtextxy(175, 175, "the thief");
	
	setcolor(YELLOW);
	arc(440, 520, 40, 180, 70);
	arc(440, 520, 50, 180, 90);
	
	line(493,477,535,452);
	line(497,452,515,440);
	
	setcolor(WHITE);
	
	
	int ojo_izq[]={540,320,580,328,593,365,552,373,530, 350, 540,320};
   
   	drawpoly(6, ojo_izq);
   	
   	int antifaz_izq[]={525, 300,520,370,550,385,600,377,620,365,620,
	    325, 565,300};
   	
	   drawpoly(7, antifaz_izq);
	
	int antifaz_der[]={665, 290, 620, 325, 620,365,637, 373, 705,375,770,
		340,820,305,810,290,780,307,745,270};
	
	drawpoly(10, antifaz_der);
	
	int ojo_der[]={720,290,740,310,738,344,700,360,657, 360, 665,320, 720,290};
	
	drawpoly(7, ojo_der);
	
	setcolor(BLUE);
	// Gorra
	int gorra_inf[]={490, 290,535,300,680,285,757,263,745,250,700,235,
	540,257,490,290};
	drawpoly(8, gorra_inf);
	
	int gorra_sup[]={745,250, 745,225,760,200,705,153,616,160,553,173,535,185,
	510,215,540,257};
	drawpoly(9, gorra_sup);
	
	setcolor(WHITE);
	// Oreja Izquierda
	int oreja_izq[]={513,274,508,244,475,170,487,165,502,179,517,204};
	drawpoly(6, oreja_izq);
	
	// Oreja derecha
	int oreja_der[]={755,192,760,180,765,135,778,94,777,69,790,66,840,168,
	830,230,810,240,845,263,805,273,766,264,745,250};
	drawpoly(13, oreja_der);
	
	// Parte cercana a los ojos izquierda
	line(520, 355, 500, 360);
	
	// Antifaz izquierda
	line(525, 300, 520, 355);
	
	// Parte cercana a los ojos derecha
	line(850, 310, 815, 300);
	
	// Cierra antizaz-ojos derecha
	line(810,290,805,273);
	
	// Recta a la nariz iz
	line(500, 360, 580,420);
	
	// Parte inferior
	
	// Lado izquierdo de la cara boca
	line(500, 360, 510,435);
	line(510,435, 635, 510);
	
	//Lado derecho de la cara boca
	line(635, 510,790,430);
	line(790,430, 850,360);
	
	// Recta a la nariz rig
	line(630,417, 850, 310);
	
	// Nariz
	int nariz[]={630,417,600,410,580,420,588,440,607,450,630,435,630,417};
	drawpoly(7, nariz);
	//circle(600, 420, 10);
	
	// Sonrisa
	int sonrisa[] = {743,415,663,467,590,475,570,445,545,435};
	//drawpoly(5, sonrisa);
	
	// ojos
	arc(710, 310, 150, 80, 15);
	arc(710, 315, 160, 60, 25);
	
	arc(575, 336, 135, 325, 12);
	arc(575, 336, 145, 315, 19);
	
	// 
	line(850, 310, 850, 360);
	
	// abdomen
	setcolor(BLUE);
	line(855,355,875,358);
	line(875,358,890,373);
	
	int brazo_sup[] = {845, 387, 912, 368,960, 340,988,338,1000,333};
	int brazo_inf[] = {817,524,860,515,920,465,1000,405};
	drawpoly(5, brazo_sup);
	drawpoly(4, brazo_inf);
	
	setcolor(YELLOW);
	
	// Cuello
	int cuello1[] = {795,432,793,469,778,510,768,523};
	int cuello2[] = {776,444,768,502,730,524};
	drawpoly(4, cuello1);
	drawpoly(3, cuello2);
	
	setcolor(WHITE);
	line(718,524,670,493);
	//int x = 25, y = 25, font = 0;
	
	/*
	for (font = 0; font <= 10; font++)
   {
      settextstyle(font, HORIZ_DIR, 1);
      outtextxy(x, y, "Hola, tengo una fuente nueva");
      y = y + 25;
   }

	*/

	getch();
}
