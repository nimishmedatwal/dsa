package arrays;

import java.util.Scanner;

public class ArrayIntro {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
//		
//		int age []= {1,3,4,6,7,7,4};
//		System.out.println(age[1]);
//		for (int i=0 ; i<7 ; i++) {
//			System.out.println(age[i]);
//		}
		
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter the number of elements in array : ");
		int length =sc.nextInt();
		int[] arrayt= new int[length];
		for (int i=0 ; i<length ; i++) {
			int p=sc.nextInt();
			arrayt[i]= p;
		}
		int average =0 ;
		for (int i=0 ; i<length ; i++) {
			average= average + arrayt[i];
			
			
	}
		int e = average/length;
		System.out.println("Average of array is "+e);
	}
}
