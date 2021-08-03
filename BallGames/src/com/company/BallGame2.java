package com.company;

import javax.swing.*;
import java.awt.*;

public class BallGame2 extends JFrame
{
    Image ball = Toolkit.getDefaultToolkit().getImage("images/ball.png");
    Image desk = Toolkit.getDefaultToolkit().getImage("images/desk.png");

    double x = 100;//小球的横坐标
    double y = 100;//小球的纵坐标

    double degree = 3.14 / 3;//弧度、此处就是：60度

    public void paint(Graphics g)
    {
        g.drawImage(desk,0,0,null);
        g.drawImage(ball,(int)x,(int)y,null);

        x = x + 10 * Math.cos(degree);
        y = y + 10 * Math.sin(degree);

        if(y>435||y<67)//碰到上下边框回弹
        {
            degree = -degree;
        }
        if(x<35||x>790)//碰到左右边界回弹
        {
            degree = 3.14 - degree;
        }
    }

    void launchFrame()
    {
        //窗口加载
        System.out.println("==========================================");
        System.out.println("==========你好啊！欢迎来到桌球游戏！========");
        System.out.println("==========================================");
        setSize(856,500);
        setLocation(100,100);
        setVisible(true);

        //重画窗口
        while(true)
        {
            repaint();
            try
            {
                Thread.sleep(10);//40ms，1秒=1000毫秒，大约一秒25次窗口
            }
            catch(Exception e)
            {
                e.printStackTrace();
            }
        }
    }
}
