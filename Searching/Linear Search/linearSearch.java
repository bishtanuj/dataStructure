import java.util.*;

public class linearSearch 
{
    public static void main(String[] args)
    {
        try(Scanner sc = new Scanner(System.in))
        {
            // Scanning the size of the array
            System.out.print("Enter the size of the array: ");
            int size = sc.nextInt();

            // Defining an array
            int Array[] = new int[size];

            // Scanning the elements of array
            System.out.println("Enter the elements of array: ");
            for(int i=0; i<size; i++)
            {
                System.out.print("Element ["+ i +"]: ");
                Array[i] = sc.nextInt(); 
            }

            // Scanning the elemnet to search in array
            System.out.print("Enter an element to find in array: ");
            int key = sc.nextInt();
            
            int temp = 0;
            int index = 0;

            // Searching the key element in array
            for(int i=0; i<Array.length; i++)
            {
                if(Array[i] == key)
                {
                    index = i;
                    temp++;
                }
            }

            // Printing the conclusion
            if(temp != 0)
            {
                System.out.println(""+ key + " is found at index: "+ index);
            }
            else
            {
                System.out.println("" + key + " is not a part of Array !!");
            }
        }
    }    
}
