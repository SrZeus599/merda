package ppf04ex2;

    
public class PPF04EX2{
static User user1;
static double total1=0,total2=0,media1=0,media2=0;    
   
public static void main(String[] args) {
    user1.car.car_value = new double[]{1,2,3,4,5,6};
    user1.food.food_value = new double[]{4,5,6,7,8,9}; 
        
    System.out.println(user1.car.car_description);
    System.out.println(user1.car.car_value[2]);
    System.out.println(user1.food.food_description);
    System.out.println(user1.food.food_value[1]);
    
    for(int i=0;i<user1.car.car_value.length;i++){
        total1 = total1 + user1.car.car_value[i];
        media1 = total1 / user1.car.car_value.length;
    }
    for(int i=0;i<user1.food.food_value.length;i++){
        total2 = total2 + user1.food.food_value[i];
        media2 = total2 / user1.food.food_value.length;
    }
     
    System.out.print("Total car");
    System.out.println(total1);
    System.out.print("Total food:");
    System.out.println(total2);
    System.out.print("Media car:");        
    System.out.println(media1);        
    System.out.print("Media food"); 
    System.out.println(media2); 
    System.out.print("Total:");
    System.out.println(total1 + total2);
    System.out.print("Media:");
    System.out.println(media1 + media2);
               
               
               
   }

}