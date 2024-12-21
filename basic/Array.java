import java.util.Scanner;
public class Array{
    public static void main(String[] args){
        //輸入學生的人數，以及每位學生的成績，計算平均數
        System.out.println("請輸入學生的人數: ");
        Scanner s= new Scanner(System.in);
        int number=s.nextInt();
        int[] grades=new int[number];
        System.out.println("請逐一輸入學生的成績: ");
        for(int i=0;i<grades.length;i++){
            grades[i]=s.nextInt(); //輸入的成績逐一存入整數陣列grades
        }
        int total=0; //計算平均數，先計算總合
        for(int i=0;i<grades.length;i++){
            total=total+grades[i]; //依序存取陣列grades資料並存入變數total
        }
        float avg=total/grades.length; //宣告浮點數變數avg，因為平均數有可能為小數
        System.out.println("平均成績是"+avg);
        
        
        //陣列的基本操作
        /*
        int[] grades=new int[]{70,80,90,100}; //初始化整數陣列變數grades，給定長度4並給定四筆整數資料
        System.out.println("陣列長度: "+grades.length); //grades變數代表陣列，取得陣列長度並用+號轉成同一字串印出
        for(int i=0;i<grades.length;i++){
            System.out.println(grades[i]); //for迴圈與陣列的搭配，依序存取陣列資料並印出
        }
        */



    }

}