package project;

// LoginForm���� ���¸� �����ͼ� ��ư�� ����߰�

import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
public class LoginForm2 extends JFrame{
	TextField login = new TextField(10);
	TextField password = new TextField(10);
	JLabel login2=new JLabel("ID �Է� : ");
	JLabel password2=new JLabel("��й�ȣ �Է� : ");
	JButton button=new JButton("�α���");
	LoginForm2(){
		setTitle("�α��� â");
		setContentPane(new Form2());
		setSize(300,150);
		setVisible(true);
	}
	class Form2 extends JPanel {
		Form2(){
			setLayout(new GridLayout(2,1));
			
			JPanel p1=new JPanel();
			p1.setLayout(new GridLayout(2,2));
			p1.add(login2);
			p1.add(login);
			p1.add(password2);
			p1.add(password);
			
			password.setEchoChar('��'); //��й�ȣ�� �������ʰ� ó��
			
			JPanel p2=new JPanel();
			p2.add(button);
			
			button.addActionListener(new ActionListener() {
				public void actionPerformed(ActionEvent e) {
					JButton b=(JButton)e.getSource();
					if(b.getText().equals("�α���")) {
						JOptionPane jp=new JOptionPane();
						jp.showMessageDialog(null,"�α��� ����"); //�α��� �����ϸ� �޽����ڽ� ���
					}
				}
			});
			add(p1);
			add(p2);
		}
	}
	public static void main(String[] args) {
		new LoginForm2();
	}
}
