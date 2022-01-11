package geeksforgeeks;

public class String2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String S="sdjvnj";
		String patt="wddj";
		int min=2;
        String s =new String ();
        for (int i=0 ; i<patt.length() ; i++){
            for (int j= 0 ; j<S.length() ; j++){
                if (patt.charAt(i)==S.charAt(j) && j<=min){
                    min=j;
                    s=Character.toString(patt.charAt(i));
                }
            }
           
            
        }
        if (S.contains(s)==true){
            System.out.println(s);
        }else{
            System.out.println("$");
        }
        
	}

}
