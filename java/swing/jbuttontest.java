import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;

/**
 * jbuttontest
 */
public class jbuttontest {

    public static void main(String[] args) {
        JFrame f = new JFrame("Button");
        JLabel label = new JLabel("if you want to change me, please click button below!");
        JTextField jTextField = new JTextField("this is textfield",3);

        JButton btn = new JButton("click");
        btn.setBounds(50, 250, 100, 30);
        jTextField.setBounds(20, 10, 200, 100);
        label.setBounds(20, 210, 200, 50);
        btn.addActionListener(new ActionListener(){
        
            @Override
            public void actionPerformed(ActionEvent e) {
                label.setText("you have just changed me");
            }
        });

        jTextField.addActionListener(new ActionListener(){
        
            @Override
            public void actionPerformed(ActionEvent e) {
                System.out.println(e);
            }
        });

        f.add(jTextField);

        f.add(btn);
        f.add(label);

        f.setSize(400, 300);
        f.setLayout(null);
        f.setVisible(true);
    }
}