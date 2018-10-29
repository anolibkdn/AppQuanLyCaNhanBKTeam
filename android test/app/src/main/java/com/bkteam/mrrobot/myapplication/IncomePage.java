package com.bkteam.mrrobot.myapplication;

import android.app.AlertDialog;
import android.content.DialogInterface;
import android.os.Bundle;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.v4.app.Fragment;
import android.support.v4.content.ContextCompat;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.AbsListView;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.ImageButton;
import android.widget.ListView;
import android.widget.Toast;

import com.github.mikephil.charting.charts.LineChart;
import com.github.mikephil.charting.components.AxisBase;

import com.github.mikephil.charting.components.XAxis;
import com.github.mikephil.charting.components.YAxis;
import com.github.mikephil.charting.data.Entry;
import com.github.mikephil.charting.data.LineData;
import com.github.mikephil.charting.data.LineDataSet;
import com.github.mikephil.charting.formatter.IAxisValueFormatter;

import java.util.ArrayList;

public class IncomePage extends Fragment {


    private Button button;
    private LineChart lineChart;
    private View result;
    private ListView listView;
    private ImageButton imageButton1,imageButton2,imageButton3,imageButton4;

    public IncomePage() {
    }

    @Nullable
    @Override
    public View onCreateView(@NonNull LayoutInflater inflater, @Nullable ViewGroup container, @Nullable Bundle savedInstanceState) {

        result = inflater.inflate(R.layout.income_page, container,false);
        lineChart = result.findViewById(R.id.linechartincome);

        listView = result.findViewById(R.id.ListChoose);
        imageButton1 = result.findViewById(R.id.imageButton1);
        imageButton2 = result.findViewById(R.id.imageButton2);
        imageButton3 = result.findViewById(R.id.imageButton3);
        imageButton4 = result.findViewById(R.id.imageButton4);

        final String[] Color = {"red","blue","black"};
        final Boolean [] result_check = {false,false,false};


        final AlertDialog.Builder builder = new AlertDialog.Builder(getActivity());
        builder.setTitle("List Choice").setMultiChoiceItems(Color, null, new DialogInterface.OnMultiChoiceClickListener() {
            @Override
            public void onClick(DialogInterface dialog, int which, boolean isChecked) {
                Toast.makeText(getActivity(), isChecked +"", Toast.LENGTH_SHORT).show();

            }
        });

        builder.setNeutralButton("Choice all", new DialogInterface.OnClickListener() {
            @Override
            public void onClick(DialogInterface dialog, int which) {

            }
        });
        final AlertDialog alertDialog = builder.create();
        imageButton1.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {

                alertDialog.show();
            }
        });


        imageButton2.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                for (int i=0;i<3;i++) {
                    result_check[i] = false;
                }
            }
        });


        ArrayList<String> data = new ArrayList<>();

        data.add("an nha hang het 8k");
        data.add("an nha hang het 8k");
        data.add("an nha hang het 8k");
        data.add("an nha hang het 8k");
        data.add("an nha hang het 8k");

        listView.setChoiceMode(ListView.CHOICE_MODE_MULTIPLE);
        ArrayAdapter arrayAdapter = new ArrayAdapter<String>(getActivity(),android.R.layout.simple_list_item_1, data);

        listView.setAdapter(arrayAdapter);



        //=============tao do thi ======================

        setData();
        handlerMovie();
        return result;
    }

    private void setData() {

        ArrayList<Entry> entries = new ArrayList<>();
        entries.add(new Entry(0, 4));
        entries.add(new Entry(1, 1));
        entries.add(new Entry(2, 2));
        entries.add(new Entry(3, 4));
        entries.add(new Entry(4, 0));
        entries.add(new Entry(5, 7));
        entries.add(new Entry(6, 2));

        LineDataSet dataSet = new LineDataSet(entries, "Customized values");
        dataSet.setColor(ContextCompat.getColor(getActivity(), R.color.colorPrimary));
        dataSet.setValueTextColor(ContextCompat.getColor(getActivity(), R.color.colorPrimaryDark));

        //****
        // Controlling X axis
        XAxis xAxis = lineChart.getXAxis();
        // Set the xAxis position to bottom. Default is top
        xAxis.setPosition(XAxis.XAxisPosition.BOTTOM);
        //Customizing x axis value
        final String[] day = new String[]{"Mon", "Tue","Wen", "Thus", "Fri","Sat","Sun"};

        IAxisValueFormatter formatter = new IAxisValueFormatter() {
            @Override
            public String getFormattedValue(float value, AxisBase axis) {
                return day[(int) value];
            }
        };
        xAxis.setGranularity(1f); // minimum axis-step (interval) is 1
        xAxis.setValueFormatter(formatter);

        //***
        // Controlling right side of y axis
        YAxis yAxisRight = lineChart.getAxisRight();
        yAxisRight.setEnabled(false);

        //***
        // Controlling left side of y axis
        YAxis yAxisLeft = lineChart.getAxisLeft();
        yAxisLeft.setGranularity(1f);

        // Setting Data
        LineData data = new LineData(dataSet);
        lineChart.setData(data);
        lineChart.animateX(2500);
        //refresh
        lineChart.invalidate();
    }

    private void handlerMovie() {

    }


}

