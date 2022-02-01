class Animal
{
    String colour;
    int age;

    void eat()
    {
        System.out.println("I am Eating");
    }
}

class Dog extends Animal
{
    String breed;

    void bark()
    {

        System.out.println("Barking...");
    }

    void displayInfo()
    {
        System.out.println(colour);
        System.out.println(age);
        System.out.println(breed);
    }
}

class Puppy extends Dog
{
    boolean canWalk;
    void weep()
    {
        System.out.println("Weeping....");
    }

    void displayInformation()
    {
        System.out.println(colour);
        System.out.println(age);
        System.out.println(breed);
        System.out.println(canWalk);
    }

//    void displayInfo()                    // Overides displayInfo in super class(Dog class)
//    {
//        System.out.println(colour);
//        System.out.println(age);
//        System.out.println(breed);
//        System.out.println(canWalk);
//    }
}

class Cat extends Animal
{
    void meow()
    {
        System.out.println("meowing...");
    }

    void displayInfo()                    // Overides displayInfo in super class(Dog class)
    {
        System.out.println(colour);
        System.out.println(age);
    }

}

public class OOP
{
    public static void main(String args[])
    {
        Dog d=new Dog();
        d.colour = "Brown";
        d.bark();
        d.eat();

        Dog e=new Dog();
        e.colour = "White";
        e.bark();

        Puppy p = new Puppy();
        p.canWalk = false;
        p.weep();
        p.displayInformation();
        p.bark();
        p.eat();

        Cat c = new Cat();
        c.meow();
        c.colour = "Blue";
        c.age = 5;
        c.displayInfo();
        c.bark();
        c.eat();

    }
}



