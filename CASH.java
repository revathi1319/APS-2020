import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
 class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		int n,b,k,sm=0;
		Scanner s=new Scanner(System.in);
		n=s.nextInt();
		for(int i=0;i<n;i++)
		{
		    b=s.nextInt();
		    sm=0;
		    k=s.nextInt();
		    for(int j=0;j<b;j++)
		    {
		        sm+=(s.nextInt())%k;
		    }
		    System.out.println(sm%k);
		}
		
	}
}
