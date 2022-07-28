package geeksforgeeks;
import java.util.*;
public class Segregate0and1 {
	public static void main(String[] args) {
		int[] arr= {0,1,0,0,0,0,0,1,1,1,1,0,0};
		int  n =arr.length;
		int counter =0;
        int coun =0;
        for (int i=0 ; i<n ; i++){
            if (arr[i]==0){
                counter=counter+1;
            }else{
                coun=coun+1;
            }
        }
        int[] ap = new int[n];
        while (counter> 0){
            ap[counter-1]=0;
        }
        ap[0]=1;
        for (int i=0 ; i <n ; i++) {
        	System.out.println(ap[i]);
        	System.out.println(3);
        }
		

		
	}
}
