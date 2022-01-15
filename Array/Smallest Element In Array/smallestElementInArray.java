import java.util.*;

public class smallestElementInArray 
{
    public static void main(String[] args)
    {
        try(Scanner sc = new Scanner(System.in))
        {
            // Scanning the size of the array
            System.out.print("Enter the size of the array: ");
            int size = sc.nextInt();

            int array[] = new int[size];
            // Scanning the elements of array
            System.out.println("Enter the elements of array: ");
            for(int i=0; i<size; i++)
            {
                System.out.print("Element ["+ i +"]: ");
                array[i] = sc.nextInt();
            }

            //Printing the array
            System.out.println("Array: ");
            for(int i=0; i<size; i++)
            {
                System.out.print(array[i] + " ");
            }
            System.out.println();

            // Assigning the first element of array to min variable
            int min = array[0];

            // Computing smallest element in array
            for(int i=0; i<size; i++)
            {
                if(array[i] < min)
                {
                    min = array[i];
                }
            }

            // Printing the result
            System.out.println("The smallest element of the array: "+min);
        }
    }
}
