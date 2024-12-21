public class DataTypeConversion{
    public static void main(String[] args){
        /*小範圍轉大範圍，自動轉換
        byte x=34;
        int y=x;
        long z=y;
        double d=z;
        System.out.println(x);
        System.out.println(y);
        System.out.println(z);
        System.out.println(d);
        */

        /*大範圍轉小範圍，需使用(資料型態)做強制轉換
        int x=1024;
        byte y= (byte)x;
        long z=102400000000L;
        int m=(int)z;
        float f=(float)3.141592689;
        System.out.println(y);
        System.out.println(m);
        System.out.println(f);
        */

        /*字串轉換成數字
        String text="34";
        int y=Integer.parseInt(text);  
        double d=Double.parseDouble(text);
        System.out.println(y);
        System.out.println(d);
        */

        /*數字轉換成字串
        int x=34;
        String s=String.valueOf(x);
        System.out.println(s);
        long y=9999999;
        s=String.valueOf(y);
        System.out.println(s);
        s=String.valueOf(3.1415926F);     
        System.out.println(s);
        */
    }

}