package geeksforgeeks;

public class ArraySUM {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int [] arr1 = {13,8,4,5,7,9,1};
		int min_odd = -1;
		int min_even = -1;
		int sum = 0;
		
		for (int i =0 ; i<arr1.length;i++) {
			if(arr1[i]%2==0) {
					if(min_even ==-1){
						min_even = arr1[i];
					}
				
				
				if (min_even > arr1[i]) {
						min_even =arr1[i];
						
					}
			}
			else {
				if(min_odd ==-1){
					min_odd = arr1[i];
					
					
				}
				
				if (min_odd >arr1[i]) {
					min_odd =arr1[i];
					
				}
			}
				sum = sum + arr1[i];
			}
		
		if (sum%2==0)
		{
			System.out.println(min_even);
		}
		else
		{
			System.out.println(min_odd);
		}
}
}
