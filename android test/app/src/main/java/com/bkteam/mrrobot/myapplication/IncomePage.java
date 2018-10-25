package com.bkteam.mrrobot.myapplication;

import android.os.Bundle;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.v4.app.Fragment;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.Button;
import android.widget.Toast;

public class IncomePage extends Fragment {


    private Button button;
    private View result;

    public IncomePage() {
    }

    @Nullable
    @Override
    public View onCreateView(@NonNull LayoutInflater inflater, @Nullable ViewGroup container, @Nullable Bundle savedInstanceState) {



        result = inflater.inflate(R.layout.income_page, container,false);
        handlerMovie();
        return result;
    }

    private void handlerMovie() {

    }


}

