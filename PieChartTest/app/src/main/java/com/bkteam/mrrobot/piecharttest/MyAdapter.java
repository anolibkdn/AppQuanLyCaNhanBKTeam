package com.bkteam.mrrobot.piecharttest;

import android.content.Context;
import android.support.v4.app.Fragment;
import android.support.v4.app.FragmentManager;
import android.support.v4.app.FragmentPagerAdapter;

public class MyAdapter extends FragmentPagerAdapter {
    private Context myContext;
    private int total;


    public MyAdapter(FragmentManager fm, Context context, int total) {
        super(fm);

        myContext = context;
        this.total = total;
    }



    @Override
    public Fragment getItem(int i) {

        switch (i){
            case 0:
                HomeFragment homeFagment = new HomeFragment();
                return homeFagment;


            case 1:
                SportFragment sportFagment = new SportFragment();
                return sportFagment;

            case 2:
                MovieFragment movieFragment = new MovieFragment();
                return movieFragment;

            default:
                return null;
        }

    }

    @Override
    public int getCount() {
        return total;
    }
}
