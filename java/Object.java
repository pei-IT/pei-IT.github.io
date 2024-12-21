import math.geometry.Point;
class Object{
    public static void main(String[] args){
        
        System.out.println(Point.ORIGIN_X);
        Point.renderOrigin();

    Point p1=new Point(3,4);
    System.out.println(p1.x);
    p1.render();

    Point p2=new Point(1,1);
    System.out.println(p2.x);
    p2.render();
    }

}