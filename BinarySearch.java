import java.util.Scanner;

/* Java Program for Binary Search on Unsorted Array */

public class BinarySearch {
    
    //----------------Function to Sort Array-------------------
    
    static int[] sorted(int arr[])
    {
        int l,max,temp;
        l=arr.length;
        for(int i=0;i<l;i++)
        {
            for(int j=i+1;j<l;j++)
            {
                if(arr[i]>arr[j])
                {
                    temp=arr[j];
                    arr[j]=arr[i];
                    arr[i]=temp;
                }
            }  
        }
        return arr;        
    }
    
    //------------function to search key in array-------------
    
    static int binarysearch(int a[],int key)
    {
        int beg,l,end,mid;
        l=a.length;
        beg=0;
        end=l-1;
        mid=(beg+end)/2;
        while(beg<=end)
        {
            if(a[mid]<key)
            {
                beg=mid+1;
                mid=(beg+end)/2;
            }

            else if(a[mid]==key)
            {
                break;
            }
            else
            {
                end=mid-1;
                mid=(beg+end)/2;
            }
        
                if(beg>end)
                {
                    mid=0;
                }
        
        }
        
        return mid;
    }
    

    public static void main(String[] args) {
     
        int i,n,b[],key,c;
        System.out.print("Enter size of array: ");
        Scanner sc = new Scanner(System.in);
        n=sc.nextInt();
        int a[]=new int[n];
        
        //---------Enter values to array-------------
        
        for(i=0;i<n;i++)
        {
           System.out.print(i+1 +" element : "); 
           a[i]=sc.nextInt();
        }
        System.out.print("");
        
        //-----------------Sort the array--------------------
        
        b=sorted(a);
        for(i=0;i<n;i++)
        {
           System.out.println(i+1 +" element : "+b[i]); 
          
        }
        
        //---------------Enter search key u want to find-----------
        
        System.out.println("Enter the number u want to search: ");
        
        key=sc.nextInt();
        
        c=binarysearch(b,key);
        
        if(c==0)
        {
            System.out.println("Sorry,Key doesn't exist in the array");
        }
        else
        {
            System.out.println("Position of element is : "+(c+1));
        }
                
    }
    
}