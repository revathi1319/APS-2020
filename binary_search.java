import java.util.*;

class Main
{
    public static int binarySearch(int[] arr,int key)
    {
        boolean found=false;
        int l=0;
        int r=arr.length-1;

        int m=0;
        while(l<=r)
        {
            m=(l+r)/2;
            if(arr[m]==key)
            {
                found=true;
                break;
            }
            else
            {
                if(key>arr[m])
                    l=m+1;
                else
                    r=m-1;
            }
        }

        if(found)
            return m;
        else
            return -1;
    }
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter Array Size");
        int n=sc.nextInt();
        int[] arr=new int[n];
        System.out.println("Enter Array Elements");

        for(int i=0;i<n;i++)
            arr[i]=sc.nextInt();

        System.out.println("Enter Key to find");
        int key=sc.nextInt();

        Arrays.sort(arr);

        int res=binarySearch(arr,key);
        if(res!=-1)
            System.out.println("Element "+key+" present in Array at index "+res);
        else
            System.out.println("Element not found!");
        sc.close();
    }
}
