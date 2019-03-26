/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pp_fp05_p2.store;

/**
 *
 * @author Isabel Silva
 */
public class User {
    /**
     * Nome({@link User})
     */
    private String name;
    /**
     * Idade({@link User})
     */
    private int age;
    /**
     * Email({@link User})
     */
    private String email;
    /**
     * Metodo Construtor para criacao da instancia de ({@link User}), tendo por
     * base todos os atributos do User({@link User})
     * @param name Nome({@link User})
     * @param age Idade({@link User})
     * @param email Email({@link User})
     */
    User(String name, int age, String email){
        this.age = age;
        this.name = name;
        this.email = email;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
    }

    public String getEmail() {
        return email;
    }

    public void setEmail(String email) {
        this.email = email;
    }
    
}
