package com.bkteam.mrrobot.myapplication;

import android.content.Intent;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.LinearLayout;

public class MaterialCollapsingPage extends AppCompatActivity {

    private LinearLayout profile_page,analysis_page, setting_page;
    private Intent intent_profile, intent_analysis , intent_setting;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_material_collapsing_page);

        setting_page = findViewById(R.id.settingbutton);
        profile_page = findViewById(R.id.profile_home);
        analysis_page = findViewById(R.id.analysis_page);


        intent_profile = new Intent(this, ProfilePage.class);
        profile_page.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(intent_profile);
            }
        });

        intent_analysis = new Intent(this,MainActivity.class);
        analysis_page.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(intent_analysis);
            }
        });

        intent_setting = new Intent(this, SettingPage.class);
        setting_page.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(intent_setting);
            }
        });

    }
}
