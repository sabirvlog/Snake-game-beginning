#include<iostream>
#include<conio.h>
using namespace std;
bool gameOver;
const int width=20;
const int height=20;
int x,y,fruitX,fruitY,score;
enum eDirection { STOP=0,Left,RIGHT,UP,DOWN };
eDirection dir;
void setup()
{
	gameOver=false;
	dir=STOP;
	x=width/2;
	y=height/2;
    fruitX = rand() % width;
	fruitY = rand() % height;
	score=0;
}
void Draw()
{
  system("cls");//System("clear"); /on the linux type that statement 	
  for( int i=0; i<width+2 ;i++)
  cout<< "#" ;
  cout<<endl;
  
  for(int i=0; i<height; i++)
  {
  	for(int j=0; j<width; j++ )
  	{
  		if (j==0)
  		cout<< "#";
  	
  	cout<<" ";
  	 if(j==width-1)
  	 cout<<"#";
	  }
	  cout<<endl;
   } 
  
  for( int i=0; i<width+2 ;i++)
    cout<< "#" ;
    cout<<endl;
  
}
void Input()
{
	
}
 void Logic()
 {
 	
 }
  
int main()
{
  setup();
  while(!gameOver)
  {
  	Draw();
  	Input();
  	Logic();
  	//sleep(10);sleep(10);
  }
    getch();
	return 0;
}
 
