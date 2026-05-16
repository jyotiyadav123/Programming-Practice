import javax.swing.*; 
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JTextField;

public class add {
    public static void main(String[] args)
    {
        JFrame f1=new JFrame("add");
        f1.setLayout(new FlowLayout());

        JTextField txt1=new JTextField(10);
        JTextField txt2=new JTextField(10);
        JButton b1=new JButton(" ");
        
        b1.addActionListener(e -> { 
            int num1=Integer.parseInt(txt1.getText());
            int num2=Integer.parseInt(txt2.getText());
    
            int res=num1+num2;
            b1.setText(" "+res );
        });
        f1.add(txt1);
        f1.add(txt2);
        f1.add(b1);
        f1.setSize(200,300);
        f1.setVisible(true);
    }
    
}
