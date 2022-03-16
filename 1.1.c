/*
#include <stdio.h>
int main()
{
    static int i=5;
    if(--i){
        
        printf("%d ",i);
        main();
    }
    return 0;
}//0 0 0 0  
//A static variable is shared among all calls of a function. 
//All calls to main() in the given program share the same i.
 //i becomes 0 before the printf() statement in all calls to main().
 
#include <stdio.h>
int main()
{
    int x = 5;
    //int const * ptr = &x;
    int * const ptr = &x;
    ++(*ptr);
    printf("%d", x);
   
    return 0;
}


#include<stdio.h>
int main()
{
  typedef int *i;
  int j;
  i a = &j;
  printf("%d", *a);
  return 0;
}


#include <stdio.h>
int fun()
{
  static int num = 16;
  return num--;
}
 
int main()
{
  for(fun(); fun(); fun())
    printf("%d ", fun());
  return 0;
}

#include<stdio.h>
int main()
{
  register  int i = 10;
      int* a = &i;
    printf("%d", *a);
    getchar();
    return 0;
}
*/

#include <stdio.h>
int fun(int n)
{
	static int s = 0;
	s = s + n;
    printf("\ns=%d",s);
	return (s);
}

int main()
{
	int i = 10, x;
	while (i > 0)
	{
		x = fun(i);
            printf("\nbi=%d",i);
		i--;
        printf("\nai=%d",i);
	}
	printf ("\n%d ", x);
	return 0;
}

































































