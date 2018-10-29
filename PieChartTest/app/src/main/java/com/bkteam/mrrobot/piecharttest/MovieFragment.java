package com.bkteam.mrrobot.piecharttest;

import android.os.Bundle;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.v4.app.Fragment;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.Button;
import android.widget.Toast;


public class MovieFragment extends Fragment {


    private Button button;
    private View result;

    public MovieFragment() {
    }

    @Nullable
    @Override
    public View onCreateView(@NonNull LayoutInflater inflater, @Nullable ViewGroup container, @Nullable Bundle savedInstanceState) {



        result = inflater.inflate(R.layout.movie_fragment, container,false);
        handlerMovie();
        return result;
    }

    private void handlerMovie() {

        button = result.findViewById(R.id.btn_movie);

        button.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Toast.makeText(getActivity(), "ok", Toast.LENGTH_SHORT).show();
            }
        });
    }


}
