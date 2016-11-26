/******
 
 * find_max.cpp
 * find the maximum number among A B C D F!
 * return max value
 * *****/

#include <iostream>
using namespace std;
int find_max(int a, int b, int c, int d, int f)
{
   int max;

   max = a;
   
   if(max < b)
   {
	   max = b;
   }

   if(max < c)
   {
	   max = c;
   }
  
   if(max < d)
   {
	    max = d;
   }

   if(max < f)
   {
	   max = f;
   }

	return max;
}
