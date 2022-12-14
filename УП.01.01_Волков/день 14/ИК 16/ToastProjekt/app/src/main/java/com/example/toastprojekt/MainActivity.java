package com.example.toastprojekt;

import android.content.Intent;
import android.content.res.ColorStateList;
import android.graphics.Color;
import android.os.Bundle;
import android.view.LayoutInflater;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.RatingBar;
import android.widget.TextView;
import android.widget.Toast;

import androidx.appcompat.app.AlertDialog;
import androidx.appcompat.app.AppCompatActivity;

public class MainActivity extends AppCompatActivity {

    private EditText pass;
    private Button btn, btn1, btn2, btn4, btn5;
    private RatingBar bar;
    private TextView rateText;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        addListenerOnButton();
    }

    public void addListenerOnButton() {
        pass = findViewById(R.id.editTextTextPersonName);
        btn = findViewById(R.id.button2);
        btn1 = findViewById(R.id.button);
        btn2 = findViewById(R.id.button3);
        btn4 = findViewById(R.id.button4);
        btn5 = findViewById(R.id.button5);
        bar = findViewById(R.id.ratingBar2);
        rateText = findViewById(R.id.textView);

        btn.setOnClickListener(view -> {
            btn.setText("Готово");
            btn.setBackgroundTintList(ColorStateList.valueOf(Color.CYAN));
            Toast.makeText(MainActivity.this, pass.getText(), Toast.LENGTH_SHORT)
                    .show();
        });

        btn1.setOnClickListener(view -> {
            btn.setBackgroundTintList(ColorStateList.valueOf(Color.BLUE));
            Toast.makeText(MainActivity.this, "Другое сообщение", Toast.LENGTH_SHORT)
                    .show();
        });

        btn2.setOnClickListener(view -> {
            LayoutInflater inflater = getLayoutInflater();
            View layout = inflater.inflate(R.layout.custom_toast, findViewById(R.id.toast_layout));
            Toast toast = new Toast(getApplicationContext());
            toast.setDuration(Toast.LENGTH_SHORT);
            toast.setView(layout);
            toast.show();
        });

        btn4.setOnClickListener(view -> {
            AlertDialog.Builder builder = new AlertDialog.Builder(MainActivity.this);
            builder
                .setMessage("Вы хотите закрыть приложение?")
                .setCancelable(false)
                .setPositiveButton("Да", (dialogInterface, i) -> {
                    finish();
                })
                .setNegativeButton("Нет", (dialogInterface, i) -> {
                    dialogInterface.cancel();
                });
            AlertDialog alert = builder.create();
            alert.setTitle("Закрытие приложения");
            alert.show();
        });

        bar.setOnRatingBarChangeListener((ratingBar, v, b) -> {
            rateText.setText("Рейтинг: " + String.valueOf(v));
        });

        btn5.setOnClickListener(view -> {

            //LayoutInflater inflater = getLayoutInflater();
            //View layout = inflater.inflate(R.layout.activity_about_me, findViewById(R.id.layer_about));
            //Toast toast = new Toast(getApplicationContext());
            //toast.setDuration(Toast.LENGTH_SHORT);
            //toast.setView(layout);
            //toast.show();
            Intent intent = new Intent(MainActivity.this, SecondaryActivity.class);
            startActivity(intent);
        });

    }

}