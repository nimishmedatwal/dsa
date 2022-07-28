package Sorting;

public class Bubble {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int a[]= {-2,12,1,2,3};
		int length = a.length;
		for (int i=0 ; i<length-1 ;i++) {
			for (int j=0 ; j<length-1 ; j++) {
				if (a[j+1]<a[j]) {
					int c= a[j+1];
					a[j+1]=a[j];
					a[j]=c;
				}
			}			

		}
		
		for (int i=0 ; i<length ; i++) {
			System.out.print(a[i]+" ");
		}
	}

}
