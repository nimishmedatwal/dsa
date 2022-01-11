package strings;

public class RemovingDuplicates {

	public static void main(String[] args) {
		String 	S= "adaaopoio";
		String P = "";
		for (int i=0 ;i < S.length() ; i++) {
			String V=Character.toString(S.charAt(i));
			if (P.contains(V)!=true ) {
				P=P+V;
			}
		}
		System.out.println(P);
	}

}
