public class DataTypeVar{
    public static void main(String[] args){
        int x=3;
        System.out.println(x); //預設為整數
        x=120;
        System.out.println(x);
        long y=2000000000000000L;
        System.out.println(y); //long，數字最後面加大寫L
        double m=3.14159268;
        System.out.println(m); //預設為double
        float n=3.14159268F;
        System.out.println(3.14159268F); //數字後面加大寫F，強制轉型為float，小數點後7位
        boolean b=false;
        System.out.println(false); //boolean，java語言沒有1代表Ture,0代表false
        char c='哥';
        System.out.println(c); //單引號裡面包字元
        String s="哈囉你好";
        System.out.println(s); //雙引號裡面包字串
        s="哈囉你好嗎? 衷心感謝 珍重再見 期待再相逢";
        System.out.println(s); 
    }

}