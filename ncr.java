import java.util.*;

class Main
{
    public static int factorial(int n)
    {
        int fact=1;
        for(int i=1;i<=n;i++)
            fact*=i;
        return fact;
    }

    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter n");
        int n=sc.nextInt();
        System.out.println("Enter r");
        int r=sc.nextInt();
        if(r>n)
        {
            System.out.println("Invalid Input (Valid->(n>=r))");
            System.exit(0);
        }

        int res=factorial(n)/(factorial(n-r)*factorial(r));
        System.out.println(n+"C"+r+" is : "+res);
        sc.close();
    }
}
