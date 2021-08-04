package com.company;

import javax.swing.*;
import java.awt.*;

public class BallGame extends JFrame
{
    Image ball = Toolkit.getDefaultToolkit().getImage("images/ball.png");
    Image desk = Toolkit.getDefaultToolkit().getImage("images/desk.png");

    double x = 100;//小球的横坐标
    double y = 100;//小球的纵坐标
    boolean right = true;//方向

    public void paint(Graphics g)
    {
        System.out.println("窗口被画了一次！");
        g.drawImage(desk,0,0,null);//图片球桌靠右上角的距离
        g.drawImage(ball,(int)x,(int)y,null);//小球的位置

        if(right)
        {
            x = x + 10;//小球运动的速度方向向右
        }
        else
        {
            x = x - 10;//小球运动的速度方向向左
        }
        if(x>785)
        {
            right = false;//小球向左方向运动
        }
        if(x<45)
        {
            right = true;//小球向右方向运动
        }
    }

    void launchFrame()
    {
        //窗口加载
        System.out.println("==========================================");
        System.out.println("==========你好啊！欢迎来到桌球游戏！========");
        System.out.println("==========================================");
        setSize(856,500);//窗口大小
        setLocation(100,100);//窗口距离屏幕右上角的距离
        setVisible(true);//可视化窗口

        //重画窗口
        while(true)
        {
            repaint();
            try
            {
                Thread.sleep(40);//40ms，1秒=1000毫秒，大约一秒25次窗口
            }
            catch(Exception e)
            {
                e.printStackTrace();
            }
        }
    }
}
