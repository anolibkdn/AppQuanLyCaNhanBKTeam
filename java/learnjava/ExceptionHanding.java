/**
 * 
 * exception handing in java is one of the powerful mechanism
 * to handle the runtime error so that normal flow of the app
 * can be maintained(duy tri)
 * 
 * 
 * - try: is a key word that is used to specify(chi dinh) a block
 * where we should place exception code.
 * 
 * - catch
 * 
 * finaly: block is used to excute the important code of the program
 * it is executed whether an exception is handle or not
 * 
 * - throw: that is used to throw an exception
 * 
 * - throws: keyword is used to declare (khai bao) exception
 *  it doesn't throw an exception, it specifyes that there may occur
 * (xay ra) an exception in the method, it is always used with method signature
 * 
 */

/**
 * ExceptionHanding
 */
public class ExceptionHanding {

    public static void main(String[] args) {
        try {
            int data = 200/0;
        } catch (Exception e) {
            //TODO: handle exception
            System.err.println(e);
        }
    }
}