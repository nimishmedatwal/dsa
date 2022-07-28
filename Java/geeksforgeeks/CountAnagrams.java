package geeksforgeeks;

public class CountAnagrams {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String s= "0000100";
		 int index=-1 ; 
	        for (int i =0 ; i<s.length() ; i++){
	            if (s.charAt(i)=='1'){
	                index=i;
	                
	            }
	            
	        }
	        System.out.println(index);
		 
	}

}
