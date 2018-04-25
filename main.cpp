#include <cstdlib>  
#include <cstdio>   
#include <iostream>  
#include <fstream>
#include <string>
using namespace std; 

#define BREITE 120
#define A
#define zeilen 5
int main()
{
    fstream f;
    string xyz;
    //int zeilen=0,n;
    char filename[16];
    
    printf("Filename: ");
    scanf("%s",&filename);
    
	f.open(filename, ios::in);
	while(getline(f, xyz)) zeilen++;
	f.close();
    
    int wert[zeilen][2];
    string eingelesen[zeilen][2];
    
	f.open(filename, ios::in);
	for(n=0;n<zeilen;n++)
	{
        getline(f, eingelesen[n][0], ';');
        getline(f, eingelesen[n][1], '\n');
	}
	f.close();	
	
	for(n=0;n<zeilen;n++)
	{
		wert[n][0]= stoi(eingelesen[n][0]);
		wert[n][1]= stoi(eingelesen[n][1]);
	}	
	
	
	
	for(n=0;n<zeilen;n++)
	{
		printf("\n%03i\t%03i",wert[n][0],wert[n][1]);
	}
	
	
	return 0;
}
