package com.bkteam.mrrobot.myapplication;

import android.content.Intent;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;

public class SplashScreenPage extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_splash_screen_page);


        final Intent intent = new Intent(this,SigninPage.class);

        Thread timer = new Thread(){
            @Override
            public void run() {
                super.run();
                try {
                    sleep(5000);
                }catch (InterruptedException e){
                    e.printStackTrace();
                }finally {

                    startActivity(intent);
                    finish();

                }
            }
        }; timer.start();
    }
}
