package data;
public class Person{
    //物件屬性
    public int age;
    public String name;
    //物件建構式
    public Person(int age, String name){
        this.age=age;
        this.name=name;
    }
    public Person(String name){
        this.age=18;
        this.name=name;
    }
    //物件方法
    public void talk(){
        System.out.println(this.name+":"+this.age);
    }

}