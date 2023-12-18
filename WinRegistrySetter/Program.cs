using Microsoft.Win32;

string keyName = "HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options";
string valueName = "K2FemMklLoader.exe";
string valueData = "2";

var val1 = Registry.GetValue(keyName, valueName, null);

Console.WriteLine("Before modification of registry");
Console.WriteLine($"{keyName} {valueName} = {val1}");

Registry.SetValue(keyName, valueName, valueData);

var val2 = Registry.GetValue(keyName, valueName, null);

Console.WriteLine("After modification of registry");
Console.WriteLine($"{keyName} {valueName} = {val2}");
