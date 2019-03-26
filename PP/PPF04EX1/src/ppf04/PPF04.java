package ppf04;


public class PPF04 {
static User user1,user2;
 
public static void main(String[] args) {
    user1.id[0]='A';
    user1.id[1]='B';
    user1.id[2]='C';
    user1.name=new char[]{'B','r','u','n','o'};
    user1.email=new char[]{'b','m','@','e','s','t','g','.','c','o','m'};
    System.out.println("-------User 1-------");
    System.out.println("ID:");
    System.out.println(user1.id);
    System.out.println("Name:");
    System.out.println(user1.name);
    System.out.println("Email:");
    System.out.println(user1.email);
 // user 2 
    user2.id[0]='A';
    user2.id[1]='B';
    user2.id[2]='C';
    user2.name=new char[]{'J','o','s','é'};
    user1.email=new char[]{'z','é','@','e','s','t','g','.','c','o','m'};
    System.out.println("-------User 2-------");
    System.out.println("ID:");
    System.out.println(user2.id);
    System.out.println("Name:");
    System.out.println(user2.name);
    System.out.println("Email:");
    System.out.println(user2.email);

    }
}

   

    


