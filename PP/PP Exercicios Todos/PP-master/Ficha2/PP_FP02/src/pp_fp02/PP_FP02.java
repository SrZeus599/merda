/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pp_fp02;
import static java.lang.System.out;

/**
 *
 * @author Isabel Silva
 */
public class PP_FP02 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        char[] sentence = {'e','u',' ',
                            's','o','u',' ',
                                'a','l','u','n','o',' ',
                                    'd','a',' ',
                                        'E','S','T','G','F','.','\n'};
        for(int i=0;i<sentence.length;i++){
            out.print(sentence[i]);
        }
    }
    
}
