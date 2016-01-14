

public class bytes {

    // bytes are signed
    public static void main( String[] args ) {
        Byte b =  Byte.parseByte("00011100", 2);
        System.out.println( "toString() - " + b.toString());
        System.out.println( "Hashcode() - " + b.hashCode());
        System.out.println( "intValue() - " + b.intValue());

    
        //System.out.println( "toString() - " + ((byte)121).intValue());
        System.out.println( "Hashcode() - " + b.hashCode());
        System.out.println( "intValue() - " + b.intValue());

        for(int i = 0; i <= 255; i++) {
            System.out.println(Byte.parseByte(((Integer)i).toString()));
        }
    }

}
