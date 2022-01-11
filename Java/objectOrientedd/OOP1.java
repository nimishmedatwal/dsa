package objectOrientedd;

class Cat {
    boolean hasFur;
    int hasLegs;
    String name; 
    public void walk() {
        System.out.println("The cat can walk");
    }
    public void eat(){
        System.out.println("the cat can eat");
    }
    public void discription(){
        System.out.println("the cat has "+hasLegs+" legs and its name is "+name);
    }
}

class dog {
    String Breed ; 
    String Name ;
    public void jump(){
        System.out.println("My dog named "+Name+ " jumped");
    }
}

    public class OOP1{
        public static void main(String[] args){
            Cat cat1= new Cat();
            Cat cat2 = new Cat();
            cat2.eat();
            cat1.walk();
            cat1.name =" Elisa";
            cat2.name ="Aria";
            cat1.hasLegs=4;
            cat2.hasLegs=3;
            
            cat1.discription();
            cat2.discription();
            dog Gogo = new dog();
            dog ilia = new dog();
            Gogo.Name="Gogo";
            ilia.Name="ilia";
            Gogo.jump();
            ilia.jump();


        }
    } 
