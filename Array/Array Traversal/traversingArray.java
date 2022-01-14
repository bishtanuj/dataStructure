import java.util.*;

public class traversingArray 
{
    public static void main(String[] args)
    {
        try(Scanner sc = new Scanner(System.in))
        {
            System.out.print("Enter the size of the array: ");
            int arraySize = sc.nextInt();

            int array[] = new int[arraySize];

            System.out.println("Enter the " + arraySize + " elements of array: ");

            for(int i=0; i<arraySize; i++)
            {
                System.out.print("Element ["+ i +"]: ");
                array[i] = sc.nextInt();
            }

            System.out.println("The elements of array are: ");

            System.out.print(array[0]);
            for(int i=1; i<arraySize; i++)
            {
                System.out.print(", "+array[i]);
            }
        }    
    }    
}
