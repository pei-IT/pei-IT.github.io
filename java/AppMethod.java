class Test{ //編譯器執行包含main方法的Test類別
    public static void main(String[] args){
        Test.talk("hello"); //類別名稱.方法名稱(參數資料)
        Test.talk("你好");
        int ans=BasicMath.add(3,4);
        System.out.println(ans*20);
        ans=BasicMath.multiply(4,2);
        System.out.println("乘法的結果是: "+ans);
    }
    static void talk(String content){ //()內參數資料型態為字串，呼叫talk方法傳入參數的資料型態需相同，否則編譯錯誤
        System.out.println(content); //依照呼叫talk方法傳入不同參數印出不同字串
    }
class BasicMath{ //類別的角色:組織程式，將程式碼分門別類，基本四則運算
    static int add(int n1,int n2){
        int resault=n1+n2;
        return resault;
    }
    static int multiply(int n1, int n2){
        return n1*n2;
        
    }
}

}