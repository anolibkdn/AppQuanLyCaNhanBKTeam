package com.bkteam.mrrobot.myapplication;

import android.content.Intent;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;

public class SigninPage extends AppCompatActivity {

    private TextView T_signup;
    private Intent intent,intent1;
    private EditText e_password, e_email;
    private Button btn_sigin;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_signin_page);

        T_signup = findViewById(R.id.Text_signup);
        e_password = findViewById(R.id.E_passwordSignin);
        e_email = findViewById(R.id.E_emailSignin);
        btn_sigin = findViewById(R.id.btn_signin);

        intent = new Intent(this,SignupPage.class);
        T_signup.setOnClickListener(new View.OnClickListener() {

            @Override
            public void onClick(View v) {

                startActivity(intent);
                finish();
            }
        });

        intent1 = new Intent(this,MaterialCollapsingPage.class);
        btn_sigin.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(intent1);
                finish();
            }
        });

    }
}
