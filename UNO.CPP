#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
#include<time.h>

struct turn
{
       int t;
       struct turn *next;
       }*p,*temporary;

struct top
{
       int c;
       int n;
       } base;

struct listnode
{
int ctr;
int info;
int col;
struct listnode*next;
}*start,*start1,*start2;

int kl,h,s,s1,s2,player;

int check(struct listnode *);
int play(struct listnode *);
void display();
void display1();
void display2();
void displaybase( );
void show();
void create(struct listnode*);
void create1(struct listnode*);
void create2(struct listnode*);
main()
{
int gdriver=DETECT,gmode;
int x,y,i;
initgraph(&gdriver,&gmode,"C:\\Turboc3\\BGI");
setbkcolor(5);
x=getmaxx()/2;
y=getmaxy()/2;
for(i=0;i<200;i++)
{
delay(15);
setcolor(i/10);
arc(x,y,0,180,i-10);
}
delay(1000);
initgraph(&gdriver,&gmode,"C:\\Turboc3\\BGI");
setbkcolor(5);
setcolor(14);
printf("\t\t\tLETS PLAY UNO\n");
delay(2000);
setbkcolor(5);
setcolor(2);
struct listnode *node,*n;
struct listnode *node1,*n1,*n2;
struct listnode *node2;
srand(time(NULL));
node=(struct listnode*)malloc(sizeof(struct listnode));
node2=(struct listnode*)malloc(sizeof(struct listnode));
node1=(struct listnode*)malloc(sizeof(struct listnode));
node->ctr=1;
node->info=(rand()%13);
node->col=(rand()%4)+1;
node2->ctr=1;
node2->info=(rand()%13);
node2->col=(rand()%4)+1;
node1->ctr=1;
node1->info=(rand()%13);
node1->col=(rand()%4)+1;
node1->next=NULL;
node->next=NULL;
node2->next=NULL;
start=node;
start1=node1;
start2=node2;
create(node);
create1(node1);
create2(node2);
n=start;
n1=start1;
n2=start2;
  display();
 display1();
  display2();
  s=check(start);
  s1=check(start1);
  s2=check(start2);
int qwer=1;
struct turn *q,*q1;
q=(struct turn *)malloc(sizeof(struct turn));
q->t=qwer;
q->next=NULL;
p=q;
while(qwer<3)
{
	     qwer++;
	     q1=(struct turn *)malloc(sizeof(struct turn));
	     q1->t=qwer;
         q1->next=NULL;
	     q->next=q1;
	     q=q1;
	     }
	     q->next=p;
base.c=(rand()%4)+1;
base.n=rand()%10;
int flag;
do
{

displaybase();
    kl=0;
    switch(p->t)
    {
		case 1:
		     {
  
			   flag=play(n);
			   p=p->next;
			   break;
			   }
			   case 2:
				{   

				flag=play(n1);
				p=p->next;
				break;
				}
				case 3:
				     {
				     flag=play(n2);
					    p=p->next;
					    break;
					    }
					    }
					    n=start;
					    n1=start1;
					    n2=start2;
					    }while(flag!=1);





getch();
}




void display()
{

printf("PLAYER1 CARDS");
delay(1000);
int gdriver=DETECT,gmode;
initgraph(&gdriver,&gmode,"C:\\Turboc3\\BGI");
setbkcolor(5);
setcolor(5);
int i,j;
j=1;
struct listnode * y;
y=start;

printf("    ");
while(start!=NULL)
{
printf(" %d  ",start->ctr);
  j++;
start=start->next;
}
start=y;
i=0;
while(start!=NULL)
{
if(start->col==1)
{
setfillstyle(SOLID_FILL,RED);
}
if(start->col==4)
{
setfillstyle(SOLID_FILL,BLUE);
}
if(start->col==2)
{
setfillstyle(SOLID_FILL,GREEN);
}
if(start->col==3)
{
setfillstyle(SOLID_FILL,YELLOW);
}
bar(20+(i*35),20,50+(i*35),50);

if(start->info==1)
{
outtextxy(20+(i*35),25,"1");
}
if(start->info==2)
{
outtextxy(20+(i*35),25,"2");
}
if(start->info==3)
{
outtextxy(20+(i*35),25,"3");
}
if(start->info==4)
{
outtextxy(20+(i*35),25,"4");
}
if(start->info==5)
{
outtextxy(20+(i*35),25,"5");
}
if(start->info==6)
{
outtextxy(20+(i*35),25,"6");
}
if(start->info==7)
{
outtextxy(20+(i*35),25,"7");
}
if(start->info==8)
{
outtextxy(20+(i*35),25,"8");
}
if(start->info==9)
{
outtextxy(20+(i*35),25,"9");
}
if(start->info==10)
{
outtextxy(20+(i*35),25,"S");
}
if(start->info==11)
{
outtextxy(20+(i*35),25,"R");
}
if(start->info==12)
{
outtextxy(20+(i*35),25,"D2");
}
if(start->info==0)
{
outtextxy(20+(i*35),25,"0");
}
start=start->next;
i++;
}
start=y;
getch();
closegraph();
}
void display1()
{

printf("PLAYER2 CARDS");
delay(1000);
int gdriver=DETECT,gmode;
initgraph(&gdriver,&gmode,"C:\\Turboc3\\BGI");
setbkcolor(5);
setcolor(5);
int i,j;
j=1;
struct listnode * y;
y=start1;

printf("    ");
while(start1!=NULL)
{
printf(" %d  ",start1->ctr);
  j++;
start1=start1->next;
}
start1=y;
i=0;
while(start1!=NULL)
{
if(start1->col==1)
{
setfillstyle(SOLID_FILL,RED);
}
if(start1->col==4)
{
setfillstyle(SOLID_FILL,BLUE);
}
if(start1->col==2)
{
setfillstyle(SOLID_FILL,GREEN);
}
if(start1->col==3)
{
setfillstyle(SOLID_FILL,YELLOW);
}
bar(20+(i*35),20,50+(i*35),50);

if(start1->info==1)
{
outtextxy(20+(i*35),25,"1");
}
if(start1->info==2)
{
outtextxy(20+(i*35),25,"2");
}
if(start1->info==3)
{
outtextxy(20+(i*35),25,"3");
}
if(start1->info==4)
{
outtextxy(20+(i*35),25,"4");
}
if(start1->info==5)
{
outtextxy(20+(i*35),25,"5");
}
if(start1->info==6)
{
outtextxy(20+(i*35),25,"6");
}
if(start1->info==7)
{
outtextxy(20+(i*35),25,"7");
}
if(start1->info==8)
{
outtextxy(20+(i*35),25,"8");
}
if(start1->info==9)
{
outtextxy(20+(i*35),25,"9");
}
if(start1->info==10)
{
outtextxy(20+(i*35),25,"S");
}
if(start1->info==11)
{
outtextxy(20+(i*35),25,"R");
}
if(start1->info==12)
{
outtextxy(20+(i*35),25,"D2");
}
if(start1->info==0)
{
outtextxy(20+(i*35),25,"0");
}
start1=start1->next;
i++;
}
start1=y;
getch();
closegraph();
}
void display2()
{

printf("PLAYER3 CARDS");
delay(1000);
int gdriver=DETECT,gmode;
initgraph(&gdriver,&gmode,"C:\\Turboc3\\BGI");
setbkcolor(5);
setcolor(5);
int i,j;
j=1;
struct listnode * y;
y=start2;

printf("    ");
while(start2!=NULL)
{
printf(" %d  ",start2->ctr);
  j++;
start2=start2->next;
}
start2=y;
i=0;
while(start2!=NULL)
{
if(start2->col==1)
{
setfillstyle(SOLID_FILL,RED);
}
if(start2->col==4)
{
setfillstyle(SOLID_FILL,BLUE);
}
if(start2->col==2)
{
setfillstyle(SOLID_FILL,GREEN);
}
if(start2->col==3)
{
setfillstyle(SOLID_FILL,YELLOW);
}
bar(20+(i*35),20,50+(i*35),50);

if(start2->info==1)
{
outtextxy(20+(i*35),25,"1");
}
if(start2->info==2)
{
outtextxy(20+(i*35),25,"2");
}
if(start2->info==3)
{
outtextxy(20+(i*35),25,"3");
}
if(start2->info==4)
{
outtextxy(20+(i*35),25,"4");
}
if(start2->info==5)
{
outtextxy(20+(i*35),25,"5");
}
if(start2->info==6)
{
outtextxy(20+(i*35),25,"6");
}
if(start2->info==7)
{
outtextxy(20+(i*35),25,"7");
}
if(start2->info==8)
{
outtextxy(20+(i*35),25,"8");
}
if(start2->info==9)
{
outtextxy(20+(i*35),25,"9");
}
if(start2->info==10)
{
outtextxy(20+(i*35),25,"S");
}
if(start2->info==11)
{
outtextxy(20+(i*35),25,"R");
}
if(start2->info==12)
{
outtextxy(20+(i*35),25,"D2");
}
if(start2->info==0)
{
outtextxy(20+(i*35),25,"0");
}
start2=start2->next;
i++;
}
 start2=y;
getch();
closegraph();
}
void displaybase()
{

printf("presenting base card");
     delay(1000);
int gdriver=DETECT,gmode;
initgraph(&gdriver,&gmode,"C:\\Turboc3\\BGI");
setbkcolor(5);
setcolor(5);
 if(base.c==1)
{
setfillstyle(SOLID_FILL,RED);
}
if(base.c==4)
{
setfillstyle(SOLID_FILL,BLUE);
}
if(base.c==2)
{
setfillstyle(SOLID_FILL,GREEN);
}
if(base.c==3)
{
setfillstyle(SOLID_FILL,YELLOW);
}
bar(20,20,50,50);
if(base.n==1)
{
outtextxy(20,25,"1");
}
if(base.n==2)
{
outtextxy(20,25,"2");
}
if(base.n==3)
{
outtextxy(20,25,"3");
}
if(base.n==4)
{
outtextxy(20,25,"4");
}
if(base.n==5)
{
outtextxy(20,25,"5");
}
if(base.n==6)
{
outtextxy(20,25,"6");
}
if(base.n==7)
{
outtextxy(20,25,"7");
}
if(base.n==8)
{
outtextxy(20,25,"8");
}
if(base.n==9)
{
outtextxy(20,25,"9");
}
if(base.n==10)
{
outtextxy(20,25,"S");
}
if(base.n==11)
{
outtextxy(20,25,"R");
}
if(base.n==12)
{
outtextxy(20,25,"D2");
}
if(base.n==0)
{
outtextxy(20,25,"0");
}


getch();
closegraph();
}

void create(struct listnode*node)
{
int gdriver=DETECT,gmode;
initgraph(&gdriver,&gmode,"C:\\Turboc3\\BGI");
setbkcolor(5);
printf("PLEASE WAIT DISTRIBUTING PLAYER1 CARDS");
delay(500);
int z=2;
struct listnode *newnode,*y;
y=node;
int i;
srand(time(NULL));
for(i=1;i<=1;i++)
{
newnode=(struct listnode*)malloc(sizeof(struct listnode));
newnode->ctr=z;
newnode->info=(rand()%13);
newnode->col=(rand()%4)+1;
newnode->next=NULL;
node->next=newnode;
node=newnode;
z++;
}
srand(time(NULL));
node=y;
}
 void create1(struct listnode*node)
{
int gdriver=DETECT,gmode;
initgraph(&gdriver,&gmode,"C:\\Turboc3\\BGI");
setbkcolor(5);
printf("PLEASE WAIT DISTRIBUTING PLAYER2 CARDS");
delay(500);
int z=2;
struct listnode *newnode,*y;
y=node;
int i;
srand(time(NULL));
for(i=1;i<=1;i++)
{
newnode=(struct listnode*)malloc(sizeof(struct listnode));
newnode->ctr=z;
newnode->info=(rand()%12)+1;
newnode->col=(rand()%3)+2;
newnode->next=NULL;
node->next=newnode;
node=newnode;
z++;
}
srand(time(NULL));
node=y;
}
 void create2(struct listnode*node)
{
int gdriver=DETECT,gmode;
initgraph(&gdriver,&gmode,"C:\\Turboc3\\BGI");
setbkcolor(5);
printf("PLEASE WAIT DISTRIBUTING PLAYER3 CARDS");
delay(500);
int z=2;
struct listnode *newnode,*y;
y=node;
int i;
srand(time(NULL));
for(i=1;i<=1;i++)
{
newnode=(struct listnode*)malloc(sizeof(struct listnode));
newnode->ctr=z;
newnode->info=(rand()%11)+2;
newnode->col=(rand()%2)+3;
newnode->next=NULL;
node->next=newnode;
node=newnode;
z++;
}
srand(time(NULL));
node=y;
}

void show()
{
int b;
while(b!=0)
{
           printf("1.PLAYER1 cards \n2.PLAYER2 cards\n3.PLAYER3 cards\n4.BASE card\n0.exit\n");
scanf("%d",&b);
switch(b)
{
case 1:display();
	       break;
case 2:display1();
	  break;
case 3:display2();
	   break;
case 4:displaybase();
	    break;
	    case 0:
             {
                  break;
                  }   
default:printf("wrong entry\n");
}
}
}
void del(struct listnode *d, listnode *node)
{
     switch(player)
                {
                            case 1:
                                 {
                                      s--;
                                      break;
                                      }
                                      case 2:
                                           {
                                               s1--;
                                               break;
                                               }
                                               case 3:
                                                    {
                                                                s2--;
                                                                break;
                                                                }
                                                                }
     struct listnode *prev;
     if(node==d)
     {
                prev=node;
                switch(temporary->t)
                {
                            case 1:
                                 {
        start=start->next;
        break;
        }
        case 2:
             {
                          start1=start1->next;
                          break;
                          }
                          case 3:
                               {
                                              start2=start2->next;
                                              break;
                                              }
                                              }
		free(prev);
		}
		else
		{
     while(node!=d)
     {
			 prev=node;
			 node=node->next;
			 }
			 prev->next=node->next;
			 free(d);
			 }
			 }



void draw(struct listnode *node)
{
     switch(player)
                {
                            case 1:
                                 {
                                      s++;
                                      break;
                                      }
                                      case 2:
                                           {
                                               s1++;
                                               break;
                                               }
                                               case 3:
                                                    {
                                                                s2++;
                                                                break;
                                                                }
                                                                }
  struct listnode *newnode;
  newnode=(struct listnode *)malloc(sizeof(struct listnode));
  srand(time(NULL));
newnode->info=rand()%13;
newnode->col=(rand()%4)+1;
while(node->next!=NULL)
{
node=node->next;
}
newnode->ctr=(node->ctr)+1;
newnode->next=NULL;
node->next=newnode;
}




void reverse()
{
     struct turn *temp, *prev, *curr;
     prev=p;
     curr=p->next;
     temp=curr->next;
     prev->next=temp;
     temp->next=curr;
     curr->next=prev;
     }


int check(struct listnode *node)
{
    int ctr=0;
    while(node!=NULL)
    {
		     ctr++;
		     node=node->next;
		     }
		     return ctr;
		     }


int play(struct listnode *node)
{
delay(1000);
int gdriver=DETECT,gmode;
initgraph(&gdriver,&gmode,"C:\\Turboc3\\BGI");
setbkcolor(5);
setcolor(5);
printf("player %d's turn\n", p->t);
     struct listnode *t;
     t=node;
     int v,flag=0,f;
     player=p->t;
     while(flag!=1)
     {
                   show();
		   node=t;

     printf("\n\n\nWhich card do you want to play?\n");
     printf("Choose by number or press 0 to draw a card\n");
     scanf("%d", &v);
     if(v==0)
     {
     if(kl%2==0)
     {
	     draw(node);
	     kl++;
	     flag=1;
	     }
         else
         {
             printf("You have already drawn a card.\n");
             }
             }
	     else
	     {
     while(node!=NULL)
     {
		      if(v==node->ctr)
		      {
				      if((node->col==base.c)||(node->info==base.n))
				      {
										 base.c=node->col;
										 base.n=node->info;
										 temporary=p;
										 if((node->info>=10)&&(node->info<=12))
										 {
														       switch(node->info)
														       {
																	 case 10:
																	      {
																		    p=p->next;
																		    break;
																		    }
																	 case 11:
																	      {
																		    reverse();
																		    break;
																		    }
																		    case 12:
																			 {
                                                                                 p=p->next;
                                                                                 switch(p->t)
                                                                                 {
                                                                                             case 1:
                                                                                                  {
																			      draw(start);
																			      draw(start);
																			      break;
																			      }
																			      case 2:
                                                                                       {
																			      draw(start1);
																			      draw(start1);
																			      break;
																			      }
																			      case 3:
                                                                                               {
																			      draw(start2);
																			      draw(start2);
																			      break;
																			      }
																			      }
																			      }//case 12 closes
										 }//switch of special
                                      }//if of special
                                         flag=1;
										 del(node,t);
										 f=check(t);
										 
                                      }//if of match
										 else
										 {
										     printf("Wrong entry. Try again\n");
										     flag=0;
										     break;
										 }//else of match
										 }//if of number check
                                      
										 else
										 {
										     node=node->next;
										     }
										     }//while of node not null
										     }//else of draw 
										     }//while of flag
                                          
										     switch(player)
										     {
                                                                 case 1:
										     {
											     if(s==0)
                                                 {
                                                         printf("\n\n\n\nCONGRATULATIONS!\nPlayer %d is the winner\n", player);
											     getch();
                                                 return 1;
											     }
                                                 }
                                                 case 2:
										     {
											     if(s1==0)
                                                 {
                                                         printf("\n\n\n\nCONGRATULATIONS!\nPlayer %d is the winner\n", player);
											     getch();
                                                 return 1;
											     }
                                                 }
                                                 case 3:
										     {
											     if(s2==0)
                                                 {
                                                         printf("\n\n\n\nCONGRATULATIONS!\nPlayer %d is the winner\n", player);
											     getch();
                                                 return 1;
											     }
                                                 }
                                                 default:
											     {
												 return 0;
												 }
										     }
                                          }
