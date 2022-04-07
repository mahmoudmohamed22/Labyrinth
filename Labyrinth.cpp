#include <bits/stdc++.h>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

const int SIZE=12;
char  M[SIZE][SIZE]; // array of random numbers
int sizeV,sizeH;



/*

int maze_traverse(int row, int col) {
	// return TRUE if at the end of the maze
	if (M[row][col] == 'E') return 1;

	// return FALSE if not at the end of the maze
	if (M[row][col] > SIZE-1 || M[row][col] == 'S') return 0;

	// mark + for part of the path
	M[row][col] = '+';

	// return TRUE if the path goes to the North
	if (M[row-1][col] == TRUE) return 1;

	// return TRUE if the path goes to the South
	if (M[row+1][col] == TRUE) return 1;

	// return TRUE if the path goes to the East
	if (M[row][col+1] == TRUE) return 1;

	// return TRUE if the path goes to the West
	if (M[row][col-1] == TRUE) return 1;

	// mark x for the wrong path
	M[row][col] = 'x';

	return 0;
}
*/
void display_maze(int sizeV,int sizeH){
	int i, j;
	
	for(i=0; i<sizeV; i++) {
	for(j=0; j<sizeH; j++)
		printf("%c ", M[i][j]);
        
		cout << endl;
	}
	cout << endl;
}
int main()
{
   int i, j;
   /* get dimensions from file */
   ifstream aFile ("maze.txt");   
   size_t lines_count =0;
   string line;
   while (getline(aFile , line))
    {    ++lines_count; 
	sizeH= line.length();
	}
	sizeV=lines_count;	

    //read file 
   FILE* ifp;
   ifp=fopen("maze.txt", "r");


    /* get file in array 2d */
	for(i=0; i< sizeV; i++)
	for(j=0; j< sizeH; j++)
		fscanf(ifp, " %c ", &M[i][j]);

    
    bool b=1;
    for(i=0;i<sizeH;i++)
	{
		if(M[sizeV-1][i]=='.')
		{b=0;
				break;
				}
	}
    if(b==1)
	{
		cout<<"-1"<<"\n";
		display_maze(sizeV,sizeH);
	}


	/*print array */
	display_maze(sizeV,sizeH);
	
}
