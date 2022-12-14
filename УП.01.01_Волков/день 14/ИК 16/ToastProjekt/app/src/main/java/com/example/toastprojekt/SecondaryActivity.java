package com.example.toastprojekt;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.media.Image;
import android.os.Bundle;
import android.view.animation.AnimationUtils;
import android.widget.Button;
import android.widget.ImageView;

public class SecondaryActivity extends AppCompatActivity {

    private Button btn1;
    private ImageView image;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_secondary);

        btn1 = findViewById(R.id.button7);

        btn1.setOnClickListener(view -> {
            Intent intent = new Intent(SecondaryActivity.this, AboutMeActivity.class);
            startActivity(intent);
        });

        image = findViewById(R.id.imageView2);

        image.startAnimation(AnimationUtils.loadAnimation(this, R.anim.anim_scaling));
    }
}