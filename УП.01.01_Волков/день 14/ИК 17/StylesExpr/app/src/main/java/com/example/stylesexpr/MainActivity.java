package com.example.stylesexpr;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.widget.Button;
import android.widget.EditText;
import android.widget.ImageView;

public class MainActivity extends AppCompatActivity {

    private ImageView image;
    private Button button;
    private EditText loginField, passwordField;
    private final String login = "login";
    private final String password = "1111";

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        image = findViewById(R.id.imageView);
        button = findViewById(R.id.button);
        loginField = findViewById(R.id.editTextTextPersonName);
        passwordField = findViewById(R.id.editTextTextPassword);

        button.setOnClickListener(view -> {
            boolean result = login();
            image.setImageResource((result) ? R.drawable.icon_ok : R.drawable.icon_cencel);
        });

    }

    private boolean login() {
        return login.equals(String.valueOf(loginField.getText()))
                && password.equals(String.valueOf(passwordField.getText()));
    }
}