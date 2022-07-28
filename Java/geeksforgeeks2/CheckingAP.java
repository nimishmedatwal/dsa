package geeksforgeeks2;
import java.util.*;
public class CheckingAP {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int arr[]= {140, 175, 49, 203, 210, 218, 84 ,119 ,105, 91, 189 ,133, 56, 126, 21, 70, 112, 182, 168, 14, 77, 63, 161, 154, 42, 28, 196, 98, 35, 147};
		int n=arr.length;
		Arrays.sort(arr);
        int d = arr[1]-arr[0];
//        System.out.println(arr[1]);
        boolean A= true;
        for (int i = 0 ; i<n-1 ;i++){
        	System.out.print(arr[i+1]-arr[i]+' ');
//        	System.out.println(arr[i+1]);
//        	System.out.println(arr[i]);
            if (arr[i+1]-arr[i]!=d){
                A=false; 
                break;
            }
            
        }
        System.out.println(A);
	}

}
