import javax.swing.JFrame;
import java.awt.FlowLayout;
import javax.swing.JButton;

 class SwingDemoButton100
 {
    public static void main(String args[])
    {
        JFrame f= new JFrame("My Frame");
        f.setSize(400,500);
        f.setLayout(new FlowLayout());
        for(int i=1;i<=100;i++)
            {
                f.add(new JButton("Click"+i));
            }       
             f.setVisible(true);

    }
  } 
    

