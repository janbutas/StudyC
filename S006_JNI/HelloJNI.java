public class HelloJNI {
   static {
       System.loadLibrary("hello"); // hello.dll (Windows) or libhello.so (Unixes)
   }
   // A native method that receives nothing and returns void
   private native double sayHello(int n);
 
   public static void main(String[] args) {
       System.out.println("Java "+ new HelloJNI().sayHello(3));  // invoke the native method
   }
} 
