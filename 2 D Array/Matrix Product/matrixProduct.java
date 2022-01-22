// Program to compute the product of two matrices

import java.util.*;

public class matrixProduct 
{
    public static void main(String[] args)
    {
        try(Scanner sc = new Scanner(System.in))
        {
            // Scanning the size of the matrix
            System.out.println("Enter the size of the matrix: ");
            int size = sc.nextInt();

            int matrixOne[][] = new int[size][size];
            // Scanning the elements of matrix I
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
            // Scanning the elements of matrix II
            System.out.println("Enter teh elements of matrix II ");
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

            int product[][] = new int[size][size];
            // Computing the product of matrices
            for(int i=0; i<size; i++)
            {
                for(int j=0; j<size; j++)
                {
                    product[i][j] = 0;
                    for(int k=0; k<size; k++)
                    {
                        product[i][j] += matrixOne[i][k] * matrixTwo[k][j];
                    }
                }
            }

            // Printing the product of matrices
            System.out.println("Product of matrices: ");
            for(int i=0; i<size; i++)
            {
                for(int j=0; j<size; j++)
                {
                    System.out.print(product[i][j] + " ");
                }

                System.out.println();
            }
        }
    }    
}
