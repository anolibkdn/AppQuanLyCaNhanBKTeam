package com.bkteam.mrrobot.myapplication;

import android.app.Dialog;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.LinearLayout;
import android.widget.Toast;

public class ProfilePage extends AppCompatActivity {

    LinearLayout linearLayout_Update;

    Dialog myDialog;
    Button btn_back;


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_profile_page);

        linearLayout_Update = findViewById(R.id.Linear_update_profile);

        myDialog = new Dialog(this);


        myDialog.setContentView(R.layout.activity_enter_info_page);


        linearLayout_Update.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                myDialog.show();
            }
        });

        myDialog.findViewById(R.id.btn_back_profile).setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                myDialog.dismiss();
            }
        });
    }
}
