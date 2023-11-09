interface Walkable {
    void walk();
}
interface Swimable {
    void swim ();
}
class Duck implements Walkable, Swimable {
    public void walk()
    {
        System.out.println("Duck is walking.");
    
    }
    public void swim()
    {
        System.out.println("Duck is swimming.");
    }
}
class Main{
    public static void main(String[] args) {
        Duck duck = new Duck();
        duck.walk();
        duck.swim();
    }
}