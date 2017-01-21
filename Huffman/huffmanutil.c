#include <stdio.h>
#include "huffmanutil.h"

Node* getMin(Node * array[MAXSIZE], int size) 
{	    
	float minfreq = 1.0;
	int i;
    for (i = 0; i < size; i++) {
	printf("Freq = %f\n", array[i].freq);
	if (array[i].freq < minfreq)
	    minfreq = array[i].freq;
    }	
	
}