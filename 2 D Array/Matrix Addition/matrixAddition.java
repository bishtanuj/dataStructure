// Program to compute the addition of two matrices

import java.util.*;

public class matrixAddition 
{
    public static void main(String[] args)
    {
        try(Scanner sc = new Scanner(System.in))
        {
            //Scanning the size of the matrix
            System.out.print("Enter the size of the matrix: ");
            int size = sc.nextInt();

            int matrixOne[][] = new int[size][size];
            // Scanning the matrix I
            System.out.println("Enter the elements of matrix I: ");
            for(int i=0; i<size; i++)
            {
                for(int j=0; j<size; j++)
                {
                    System.out.print("Element ["+ i +"]["+ j +"]: ");
                    matrixOne[i][j] = sc.nextInt();
                }
            }

            int matrixTwo[][] = new int[size][size];
            // Scanning the matrix II
            System.out.println("Enter the elements of matrix II: ");
            for(int i=0; i<size; i++)
            {
                for(int j=0; j<size; j++)
                {
                    System.out.print("Element ["+ i +"]["+ j +"]: ");
                    matrixTwo[i][j] = sc.nextInt();
                }
            }

            // Printing matrix I
            System.out.println("Matrix I: ");
            for(int i=0; i<size; i++)
            {
                for(int j=0; j<size; j++)
                {
                    System.out.print(matrixOne[i][j] + " ");
                }
                System.out.println();
            }

            // Printing matrix II
            System.out.println("Matrix II: ");
            for(int i=0; i<size; i++)
            {
                for(int j=0; j<size; j++)
                {
                    System.out.print(matrixTwo[i][j] + " ");
                }
                System.out.println();
            }

            int sum[][] = new int[size][size];
            //Computing the addition
            for(int i=0; i<size; i++)
            {
                for(int j=0; j<size; j++)
                {
                    sum[i][j] = matrixOne[i][j] + matrixTwo[i][j];
                }
            }

            // Printing the sum
            System.out.println("Addtion of matrices: ");
            for(int i=0; i<size; i++)
            {
                for(int j=0; j<size; j++)
                {
                    System.out.print(sum[i][j] + " ");
                }
                System.out.println();
            }
        }
    }    
}
