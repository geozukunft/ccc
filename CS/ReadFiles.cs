using System;
using System.IO;

/// <summary>
/// Reading Files
/// </summary>
public static class ReadFiles
{
    /// <summary>
    /// Reades The first Line
    /// </summary>
    /// <param name="path">Path of the File which should be read from</param>
    /// <returns>lines that are read from</returns>
	public static string ReadFirstLine (string path)
    {
        StreamReader reader = new StreamReader(path);

        string read = reader.ReadLine();
        reader.Close();
        return read;
    }


    /// <summary>
    /// reades the complete file and returns the lines in an array
    /// </summary>
    /// <param name="path">Path of the file which should be read from</param>
    /// <returns>Lines that are read</returns>
    public static string[] ReadFile(string path)
    {
        StreamReader reader = new StreamReader(path);
        string[] read = new string[1000];

        while((read = reader.ReadLine()) != null) { }

        reader.Close();
        return read;
    }
}
