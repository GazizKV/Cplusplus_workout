#include <iostream>
#include <stdio.h>

int main()
{
	int array[100], size, min_pos, i, start, min, temp;
	cin>>size;
	
	for(i=0; i<size; i++)
		cin>>array[i];
	start=0;

	while(start!=size-1)
	{
		min=array[start];
		min_pos=start;
		
		for (i=start; i<size; i++)
			if (array[i]<min)
			{
				min=array[i];
				min_pos=i;
			}
		if (min_pos!=start)
		{
			temp=array[start];
			array[start]=array[min_pos];
			array[min_pos]=temp;
		}
		start++;
	}
	for (i=0; i<size; i++)
		cout<<array[[i]<< " ";
	return 0;
}

