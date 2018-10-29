package com.bkteam.mrrobot.fragmenttest;

import android.support.design.widget.TabLayout;
import android.support.v4.view.ViewPager;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;

public class MainActivity extends AppCompatActivity {

    private TabLayout tabLayout;
    private ViewPager viewPager;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        tabLayout = findViewById(R.id.tabLayout);
        viewPager = findViewById(R.id.viewPages);

        tabLayout.addTab(tabLayout.newTab().setText("fragment1"));
        tabLayout.addTab(tabLayout.newTab().setText("fragment2"));
        tabLayout.addTab(tabLayout.newTab().setText("fragment3"));

        tabLayout.setTabGravity(TabLayout.GRAVITY_FILL);


        final PageAdapter pageAdapter = new PageAdapter(getSupportFragmentManager(),this,tabLayout.getTabCount());

        viewPager.setAdapter(pageAdapter);

        viewPager.addOnPageChangeListener(new TabLayout.TabLayoutOnPageChangeListener(tabLayout));

        tabLayout.addOnTabSelectedListener(new TabLayout.OnTabSelectedListener() {
            @Override
            public void onTabSelected(TabLayout.Tab tab) {
                viewPager.setCurrentItem(tab.getPosition());
            }

            @Override
            public void onTabUnselected(TabLayout.Tab tab) {

            }

            @Override
            public void onTabReselected(TabLayout.Tab tab) {

            }
        });

//        tabLayout.setOnTabSelectedListener();


    }
}
