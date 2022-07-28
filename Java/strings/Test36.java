package strings;
import java.util.*;
public class Test36 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		{	int arr[] = {1,5,5,5,5,6,6,6,4,4,4,5,66666,5,5,5,5,4,4,44,4,5,555,6,6,6,6,4,444,44433,53453534,534,5,345,345345,34,534,534,53,45};
			int n=arr.length;
			System.out.println(n);
	        int counteven=0;
	        int countodd=0;
	        for (int i=0; i<n ; i++){
	            if (arr[i]%2==0){
	                counteven++;
	            }else{
	                countodd++;
	            }
	        }
	        System.out.print(countodd+" "+counteven);
	        
	    }
	}

}
