 #include <stdio.h>

    int main()
    {
 
	    unsigned int num= 0xff;

	    printf("\nValue of num = %04X before left shift.",num);

	    /*shifting 2 bytes left*/
	    num = (num<<2);
	    printf("\nValue of num = %04X after left shift.",num);

	    return 0;
    }
