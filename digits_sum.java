import java.util.*;

class Main
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a Number");
        int n=sc.nextInt();
        int x=n;
        int sum=0;

        while(n!=0)
        {
            sum+=n%10;
            n/=10;
        }
        System.out.println("Sum of digits of "+x+" is : "+sum);
        sc.close();
    }
}
