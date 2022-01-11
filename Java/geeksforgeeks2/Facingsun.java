package geeksforgeeks2;

public class Facingsun {

	public static void main(String[] args) {
		int h[] = {7,4,8,2,9};
		int n=5;
		int count=0;
		int max=0;
		for (int i=0 ; i<n; i++ ) {
			if (h[i]>max) {
				max=h[i];
				count=count+1;
			}
			
		}
		System.out.println(count);
	}

}
