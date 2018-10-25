package com.bkteam.mrrobot.myapplication;

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
                AnalysisPage analysisPage = new AnalysisPage();
                return analysisPage;


            case 1:
                IncomePage incomePage = new IncomePage();
                return incomePage;

            case 2:
                OutcomePage outcomePage = new OutcomePage();
                return outcomePage;

            default:
                return null;
        }

    }

    @Override
    public int getCount() {
        return total;
    }
}
