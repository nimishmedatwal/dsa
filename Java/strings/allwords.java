package strings;

public class allwords {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
	     byte[] allchar=new byte[] {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	     int lengthOfAllChar=allchar.length;
	             System.out.println(lengthOfAllChar);
	            for (int i = 0; i < lengthOfAllChar; i++){
	                for(int j = 0; i < lengthOfAllChar; j++){
	                    StringBuffer finalWordBuffer = new StringBuffer();
	                    finalWordBuffer.append((char)allchar[i]);
	                    finalWordBuffer.append((char)allchar[j]);
	                    System.out.println(finalWordBuffer);
	                }
	            }
	}

}
