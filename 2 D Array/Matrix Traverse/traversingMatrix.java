/* traversing 2 D array */

import java.util.*;

public class twoDArray 
{
    public static void main(String[] args)
    {
        try(Scanner sc = new Scanner(System.in))
        {
            /* scanning number of rows */
            System.out.print("Enter the number of rows: ");
            int row = sc.nextInt();

            /* scanning number of columns */
            System.out.print("Enter the number of columns: ");
            int column = sc.nextInt();
            
            /* defining matrix */
            int matrix[][] = new int[row][column];

            /* scanning elements of matrix */
            System.out.println("Enter the elements of matrix: ");
            for(int i=0; i<row; i++)
            {
                for(int j=0; j<column; j++)
                {
                    System.out.print("Element ["+ i +"]["+ j +"]: ");
                    matrix[i][j] = sc.nextInt();
                }
            }

            /* printing the matrix */
            System.out.println("The matrix: ");
            for(int i=0; i<row; i++)
            {
                for(int j=0; j<column; j++)
                {
                    System.out.print(matrix[i][j] + " ");
                }

                System.out.println();
            }
        }
    }    
}
