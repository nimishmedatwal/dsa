package arrays;

public class MinandMax {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int[] a	 = {1,4,6,8,5,48,33,7,3,2};
		int n =a.length;
		int min = a[0];
		int max=a[0];
		for(int i=0 ; i<n ; i++) {
			if (min<a[i]) {
				min=a[i];
			}
			if (max>a[i]) {
				max=a[i];
			}
		}
		System.out.println(min+" "+max);	
		
	}

}
