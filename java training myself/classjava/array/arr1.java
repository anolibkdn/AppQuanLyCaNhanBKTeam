/*normally, array is a collection of similar type of elements that have
contiguous memory location.
java array is an object the contains elements of similar data  type
it's a datt a structure where we store similar elements. we can store only fixed set of elements in java aray

array in java is index based first element of the array is store at 0 index.

*/

/**
 * arr1
 */
public class arr1 {

    public static void main(String[] args) {
        int a[] = new int[5];
        a[0] = 1;
        for (int var : a) {
            System.out.println(var);
        }
    }
}