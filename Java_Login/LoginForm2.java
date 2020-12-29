package project;

// LoginForm에서 형태를 가져와서 버튼에 기능추가

import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
public class LoginForm2 extends JFrame{
	TextField login = new TextField(10);
	TextField password = new TextField(10);
	JLabel login2=new JLabel("ID 입력 : ");
	JLabel password2=new JLabel("비밀번호 입력 : ");
	JButton button=new JButton("로그인");
	LoginForm2(){
		setTitle("로그인 창");
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
			
			password.setEchoChar('●'); //비밀번호는 보이지않게 처리
			
			JPanel p2=new JPanel();
			p2.add(button);
			
			button.addActionListener(new ActionListener() {
				public void actionPerformed(ActionEvent e) {
					JButton b=(JButton)e.getSource();
					if(b.getText().equals("로그인")) {
						JOptionPane jp=new JOptionPane();
						jp.showMessageDialog(null,"로그인 성공"); //로그인 성공하면 메시지박스 출력
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
