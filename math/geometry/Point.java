package math.geometry;
public class Point{
    //類別的屬性跟方法
    public static int ORIGIN_X=0;
    public static int ORIGIN_Y=0;
    public static void renderOrigin(){
        System.out.println(Point.ORIGIN_X+","+Point.ORIGIN_Y);
    }


    public int x;
    public int y;
    public Point(int xarg, int yarg){
        this.x=xarg;
        this.y=yarg;
    }
    public void render(){
        System.out.println(this.x+","+this.y);
    }

}