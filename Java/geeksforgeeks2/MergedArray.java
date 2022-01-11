package geeksforgeeks2;
import java.util.*;
public class MergedArray {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int arr[][] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
		int n=4;
		int m =3;
		System.out.println();
		ArrayList<Integer> l = new ArrayList ();
	    for(int i =0 ; i<m ;i++){
	        l.add(arr[0][i]);
	        
	    }	
	    for (int i=1 ; i<n-1 ; i++){
		            l.add(arr[i][m-1]);
		        }
	    for(int i =0 ; i<m ;i++){
	        l.add(arr[n-1][i]);
	    }
	    for (int i=1 ; i<n-1 ; i++){
            l.add(arr[i][0]);
        }
	    System.out.println(l.get());
	int[]a =new int[2];
	}

}
