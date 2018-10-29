package com.bkteam.mrrobot.fragmenttest;

import android.content.Context;
import android.support.v4.app.Fragment;
import android.support.v4.app.FragmentManager;
import android.support.v4.app.FragmentStatePagerAdapter;

public class PageAdapter extends FragmentStatePagerAdapter {

    private int numberofPages;
    private Context context;

    public PageAdapter(FragmentManager fm, Context context,int tabCount) {
        super(fm);
        numberofPages = tabCount;
        this.context = context;
    }

    @Override
    public Fragment getItem(int i) {
        switch (i){
            case 0:
                FragmentPage1 fragmentPage1 = new FragmentPage1();
                return fragmentPage1;

            case 1:
                FragmentPage2 fragmentPage2 = new FragmentPage2();
                return fragmentPage2;
            case 2:
                FragmentPage3 fragmentPage3 = new FragmentPage3();
                return fragmentPage3;
            default:
                return null;

        }

    }

    @Override
    public int getCount() {
        return numberofPages;
    }
}
