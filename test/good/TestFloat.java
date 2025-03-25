class TestFloat {
    public static void main(String[] args) {
        {
           if(true) {
                System.out.println(1.2f);

                // Test additions
                System.out.println(2+3.2f);
                System.out.println(2.2f+3);
                System.out.println(2.2f+3.2f);

                // Test subtractions
                System.out.println(2-3.2f);
                System.out.println(2.2f-3);
                System.out.println(2.2f-3.2f);

                // Test multiplications
                System.out.println(2*3.2f);
                System.out.println(2.2f*3);
                System.out.println(2.2f*3.2f);

                // Test divisions
                System.out.println(2/3.0f);
                System.out.println(2.0f/3);
                System.out.println(2.0f/3.0f);
    
                System.out.println(2/3);
           }

        }
    }
}
