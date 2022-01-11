package arrays;

public class Test3 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int[] arr1= {1,3,7,5,88};
		int n=5;
		int[] arr2= {4,3,77,3,2,2,2};
		int m=7;
		
		int []arr3 = new int[n+m];
	     int j=0;
	     for (int i = 0 ; i<m+n ; i++){
	         for (j=0 ; j<n ;j++ ){
	             arr3[j]=arr1[j];
	             
	         }
	         for (int p=0 ; p<m ; p++){
	             arr3[j+p]= arr2[p];
	             
	         }
	     }
	     for (int i=0 ; i<m+n ; i++) {
	    	 System.out.print(arr3[i]+" ");
	    	 
	     }
	     int t=n+m;
	     System.out.println(" ");
	     for (int i=0;i<t-1;i++) {
				int min=i;
				for (int l=i;l<t;l++ ) {
					if(arr3[l]<arr3[min]) {
						min=l;
					
					}
				}
				int temp = arr3[i];
				arr3[i]=arr3[min];
				arr3[min]=temp;
				
			}
			for(int i=0 ; i<t; i++) {
			System.out.print(arr3[i]+" ");
	}

	}
}
