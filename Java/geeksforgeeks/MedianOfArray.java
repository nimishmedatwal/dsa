package geeksforgeeks;
import java.util.*;

public class MedianOfArray {

	public static void main(String[] args) {
		int [] a= {1,5,9};
		int [] b= {2,3,6,7};
		int m=a.length;
		int n=b.length;
		int [] p = new int[m+n];
		int pos=0;
		int k=m+n ;
		for (int element : a)
		{  
		p[pos] = element;  
		pos++;              
		}  
		for (int element : b) 
		{  
		p[pos] = element;  
		pos++;  
		}   
		Arrays.sort(p);
		if (n % 2 != 0){
            System.out.println((double)p[k / 2]);
		 }else{
			 System.out.println((double)(p[(k - 1) / 2] + p[k / 2]) / 2.0);
		 }
		
		
	}

}
