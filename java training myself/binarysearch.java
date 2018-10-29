/**
 * binarysearch
 */

import java.util.Scanner;

public class binarysearch {
    public static void binarysearch(int a[], int first, int last, int key){
        int mid = (first + last)/2;
        if(first <= last){
            if(a[mid] < key){
                first = mid + 1;
            }else if(a[mid] > key){
                last = mid - 1;
            }else{
                System.out.println("da tim thay!");
                return;
            }
            binarysearch(a, first, last, key);
            //mid = (first+last)/2;
        }else{
            System.out.println("khong tim thay!");
            return;
        }
    }
    public static void main(String[] args) {
        int []a = {1,2,3,5,9,12,15,25,90};
        int key;
        System.out.println("nhap va0 mot so: ");
        Scanner sc = new Scanner(System.in);
        key = sc.nextInt();

        binarysearch(a, 0, 9, key);
    }
}