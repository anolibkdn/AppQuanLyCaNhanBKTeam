package com.bkteam.mrrobot.myapplication;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.Toast;

public class EnterInfoPage extends AppCompatActivity {

    Button buttonBack;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_enter_info_page);

//        buttonBack = findViewById(R.id.btn_back_profile);
//
//        buttonBack.setOnClickListener(new View.OnClickListener() {
//            @Override
//            public void onClick(View v) {
//                Toast.makeText(EnterInfoPage.this, "ok", Toast.LENGTH_SHORT).show();
//                finish();
//            }
//        });
    }
}
