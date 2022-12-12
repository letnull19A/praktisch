package com.example.calculator;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.EditText;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
    }

    public void onButton1Click(View view) {
        EditText field_one = (EditText)findViewById(R.id.editTextNumberDecimal5);
        EditText field_two = (EditText)findViewById(R.id.editTextNumberDecimal6);

        TextView result = (TextView)findViewById(R.id.textView3);

        float number_one = Float.parseFloat(field_one.getText().toString());
        float number_two = Float.parseFloat(field_two.getText().toString());

        result.setText(Float.toString(number_one + number_two));
    }

    public void onButton2Click(View view) {
        EditText field_one = (EditText)findViewById(R.id.editTextNumberDecimal5);
        EditText field_two = (EditText)findViewById(R.id.editTextNumberDecimal6);

        TextView result = (TextView)findViewById(R.id.textView3);

        float number_one = Float.parseFloat(field_one.getText().toString());
        float number_two = Float.parseFloat(field_two.getText().toString());

        result.setText(Float.toString(number_one - number_two));
    }

    public void onButton3Click(View view) {
        EditText field_one = (EditText)findViewById(R.id.editTextNumberDecimal5);
        EditText field_two = (EditText)findViewById(R.id.editTextNumberDecimal6);

        TextView result = (TextView)findViewById(R.id.textView3);

        float number_one = Float.parseFloat(field_one.getText().toString());
        float number_two = Float.parseFloat(field_two.getText().toString());

        result.setText(Float.toString(number_one * number_two));
    }

    public void onButton4Click(View view) {
        EditText field_one = (EditText)findViewById(R.id.editTextNumberDecimal5);
        EditText field_two = (EditText)findViewById(R.id.editTextNumberDecimal6);

        TextView result = (TextView)findViewById(R.id.textView3);

        float number_one = Float.parseFloat(field_one.getText().toString());
        float number_two = Float.parseFloat(field_two.getText().toString());

        result.setText(Float.toString(number_one / number_two));
    }

    public void onButton5Click(View view) {
        EditText field_one = (EditText)findViewById(R.id.editTextNumberDecimal5);
        EditText field_two = (EditText)findViewById(R.id.editTextNumberDecimal6);

        TextView result = (TextView)findViewById(R.id.textView3);

        float number_one = Float.parseFloat(field_one.getText().toString());
        float number_two = Float.parseFloat(field_two.getText().toString());

        result.setText(Float.toString(number_one * (number_two / 100)));
    }
}