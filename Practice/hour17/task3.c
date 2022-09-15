/*Write a program to ask the user to enter the total number of float data. Then use
the calloc() and malloc() functions to allocate two memory blocks with the
same size specified by the number, and print out the initial values of the two memory blocks. 
*/
  
   #include <stdio.h>
   #include <stdlib.h>
  
   int main()
   {
          float *ptr1, *ptr2;
	//int x;
	int sum = 0;
        int cancel = 1;
	int i;
          ptr1 = calloc(sum, sizeof(float));
 	ptr2 = malloc(sum * sizeof(float));

	printf("enter the total number of float data\n");
	scanf("%d",&sum);

          if(ptr1 == NULL)
          {
                  printf("the calloc function is not available\n");
  //              cancel = 1;
          }
	
	else if(ptr2 == NULL)
	{
		printf("the malloc function is not available\n");	
	}

          else
          {
		for(i=0; i < sum; i++)
			printf("ptr1 = (%d) %3.2f,    ptr2 = (%d) %3.2f\n", i, *(ptr1 + i), i, *(ptr2 + i));         
		free(ptr1);
		free(ptr2);
		cancel = 0;
	 }
	printf("finished\n");          
	return cancel;
 }      
