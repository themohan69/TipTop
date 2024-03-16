import java.awt.event.*;
import java.awt.*;
import javax.swing.*;

public class GUI1 implements ActionListener {
    JFrame f1;
    JTextField t1;
    JButton b1;

    GUI1() {
        f1 = new JFrame();
        t1 = new JTextField();
        b1 = new JButton("Click");

        t1.setBounds(100, 200, 150, 70);
        b1.setBounds(170, 300, 70, 50);
        b1.addActionListener(this);

        f1.add(t1);
        f1.add(b1);
        f1.setLayout(null);
        f1.setVisible(true);
        f1.setSize(500, 500);
        f1.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }

    public static void main(String[] args) {
        GUI1 obj = new GUI1();
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        t1.setText("Helo");

    }
}