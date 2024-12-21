import data.Person;
class App{
    public static void main(String[] args){
        /*
        Person p1=new Person();
        p1.talk();
        Person p2=new Person("Pei", 36);
        */
       Person p1=new Person(10, "丁滿");
       p1.talk();
       Person p2=new Person("彭彭");
       p2.talk();
    }

}