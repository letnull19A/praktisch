package com.example.listapplication;

import static android.widget.AdapterView.*;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.KeyEvent;
import android.view.View;
import android.view.inputmethod.EditorInfo;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.EditText;
import android.widget.ListView;
import android.widget.SeekBar;
import android.widget.Toast;

import java.util.ArrayList;

public class MainActivity extends AppCompatActivity {

    private ListView _list;
    private ArrayList<String> _names = new ArrayList<String>();
    private SeekBar _seekBar;
    private EditText _editText;
    private ArrayAdapter<String> _adapter;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        _editText = findViewById(R.id.editTextTextPersonName);
        _list = findViewById(R.id.listView);
        _seekBar = findViewById(R.id.seekBar);

        _editText.setOnEditorActionListener((key, keyCode, event) -> {
            if (keyCode == EditorInfo.IME_ACTION_DONE) {
                _names.add(_editText.getText().toString());
                updateList();
                return true;
            }
            return false;
        });

        _list.setOnItemClickListener((adapterView, view, i, l) -> {
            String val = (String)_list.getItemAtPosition(i);
            Toast.makeText(
                    MainActivity.this,
                    "Позиция: " + i + " значение: " + val + "seekBar: " + _seekBar.getProgress(),
                    Toast.LENGTH_LONG
                    ).show();
        });
    }

    private void updateList() {
        _adapter =
                new ArrayAdapter<String>(this, R.layout.names_layout, _names);

        _list.setAdapter(_adapter);
    }
}