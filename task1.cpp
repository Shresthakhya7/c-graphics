#include<stdio.h>

#include<conio.h>

#include<graphics.h>

#include<windows.h>
int accident();
int main() 

{

int gdriver=DETECT,gmode,i;
initgraph(&gdriver,&gmode,(char*)"");
initwindow(1000,700);
//MOVING CAR

for(i=0;i<=639;i++)
{
//CAR BODY
line(50+i,300,70+i,300);
arc(85+i,300,0,180,15);
line(100+i,300,140+i,300);
arc(155+i,300,0,180,15);
line(170+i,300,190+i,300);
line(190+i,300,190+i,280);
line(160+i,250,80+i,250);
line(160+i,250,190+i,280);
line(50+i,280,50+i,300);
line(50+i,280,80+i,250);arc(155+i,300,0,180,15);

//CAR WINDOW
line(126+i,260,126+i,280);
line(126+i,260,155+i,260);
line(126+i,280,175+i,280);
line(175+i,280,155+i,260);
line(115+i,260,115+i,280);
line(115+i,260,85+i,260);
line(115+i,280,65+i,280);
line(65+i,280,85+i,260);

//WHEEL,S
circle(85+i,300,10);
circle(155+i,300,10);

circle(85+i,300,1);
circle(155+i,300,1);
setfillstyle(1,YELLOW);
	pieslice(85+i,300,0-i,90-i,10);
		pieslice(85+i,300,180-i,270-i,10);
			pieslice(155+i,300,0-i,90-i,10);
		pieslice(155+i,300,180-i,270-i,10);


//MAN
circle(140+i,272,4);
line(145+i,275,150+i,280);
line(137+i,274,131+i,280);

//COLOR
setfillstyle(1,RED);
floodfill(55+i,280,WHITE);



//ROAD
line(0,312,1000,312);

  //truck
  rectangle(675-2*i,225,875-2*i,290);
  rectangle(625-2*i,250,675-2*i,290);
  rectangle(635-2*i,260,665-2*i,280);
  setfillstyle(2,BROWN);
  floodfill(680-2*i,230,WHITE);
  //WHEELS
  circle(650-2*i,300,10);
  circle(850-2*i,300,10);
   circle(650-2*i,300,1);
  circle(850-2*i,300,1);
  circle(830-2*i,300,10);
  circle(830-2*i,300,1);
  setfillstyle(1,WHITE);
  	pieslice(650-2*i,300,0+i,90+i,10);
		pieslice(650-2*i,300,180+i,270+i,10);
			pieslice(850-2*i,300,0+i,90+i,10);
		pieslice(850-2*i,300,180+i,270+i,10);
pieslice(830-2*i,300,0+i,90+i,10);
		pieslice(830-2*i,300,180+i,270+i,10);

  //MAN
  circle(650-2*i,272,4);
line(655-2*i,275,660-2*i,280);
line(645-2*i,274,636-2*i,280);

  delay(50);

  cleardevice();

if (i>155)

{
	
	delay(50);
	//CAR BODY
  line(200,300,220,300);
arc(235,300,0,180,15);
line(250,300,290,300);

line(290,300,310,290);
line(310,290,295,280);

line(230,250,305,260);


line(200,280,200,300);
line(200,280,230,250);

//CAR WINDOW
line(276,260,276,280);
line(276,260,305,260);
line(276,280,295,280);

line(265,260,265,280);
line(265,260,235,260);
line(265,280,215,280);
line(215,280,235,260);

//WHEEL,S
circle(235,300,10);
circle(315,300,10);

circle(235,300,1);

circle(315,300,1);
setfillstyle(1,YELLOW);
	pieslice(235,300,0-i,90-i,10);
		pieslice(235,300,180-i,270-i,10);
			pieslice(315,300,0-i,90-i,10);
		pieslice(315,300,180-i,270-i,10);
//MAN
circle(140+165,275,4);
setfillstyle(1,RED);
floodfill(141+165,275,WHITE);
line(137+165,275,130+165,270);
line(135+165,275,131+165,280);
line(135+165,272.5,128+165,280);
//COLOR
setfillstyle(1,RED);
floodfill(55+i,280,WHITE);


//ROAD
line(0,312,1000,312);

  //truck
  rectangle(675-2*i,225,875-2*i,290);
  line(675-2*i,290,625-2*i,290);
  line(625-2*i,290,615-2*i,250);
  line(615-2*i,250,675-2*i,250);
  rectangle(635-2*i,260,665-2*i,280);
  setfillstyle(2,BROWN);
  floodfill(680-2*i,230,WHITE);
  
  circle(650-2*i,300,10);
  circle(850-2*i,300,10);
   circle(650-2*i,300,1);
  circle(850-2*i,300,1);
  circle(830-2*i,300,10);
  circle(830-2*i,300,1);
  

  
  circle(650-2*i,272,4);
line(655-2*i,275,660-2*i,280);
line(645-2*i,274,636-2*i,280);
setfillstyle(1,WHITE);
	pieslice(650-2*i,300,0+i,90+i,10);
		pieslice(650-2*i,300,180+i,270+i,10);
			pieslice(850-2*i,300,0+i,90+i,10);
		pieslice(850-2*i,300,180+i,270+i,10);
pieslice(830-2*i,300,0+i,90+i,10);
		pieslice(830-2*i,300,180+i,270+i,10);

 
  circle(650-2*i,272,4);
line(655-2*i,275,660-2*i,280);
line(645-2*i,274,636-2*i,280);
delay(1000);
	accident();
	break;
}

}
getch();
return 0;
}
int accident()
{	
	setcolor(RED);
	
	settextstyle(3,0,5);
		outtextxy(100,100,(char*)"ACCIDENT");
		
			
}

