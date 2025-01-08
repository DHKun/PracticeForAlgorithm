import java.util.Scanner;
public class test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("请输入数组长度:");
        int n = sc.nextInt();
        int[] arr = new int[n];
        
        System.out.println("请输入" + n + "个整数:");
        for(int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        
        // 冒泡排序
        for(int i = 0; i < n-1; i++) {
            for(int j = 0; j < n-1-i; j++) {
                if(arr[j] > arr[j+1]) {
                    // 交换
                    int temp = arr[j];
                    arr[j] = arr[j+1]; 
                    arr[j+1] = temp;
                }
            }
        }
        
        System.out.println("排序后的结果:");
        for(int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
        sc.close();
    }
}
