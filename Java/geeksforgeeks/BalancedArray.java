package geeksforgeeks;

public class BalancedArray {
	
	public static void main(String[] args) {
		int A=0;
		int [] a = {1, 5, 3, 2};
		
		int n=a.length;
		int sum1=0;
		int sum2=0;
		for (int i=0 ;i<n/2 ;i++) {
			int F=a[i];
			sum1=sum1+F;
			
		}
		for (int i=n/2 ;i<n ;i++) {
			int F=a[i] ;
			sum2=sum2+F;
	}
		System.out.println(sum1+" "+sum2);
		if (sum1>sum2 ) {
			A=sum1-sum2;
		}else {
			A=sum2-sum1;
		}
	System.out.println(A);
}
}
