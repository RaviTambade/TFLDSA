using System;
using System.IO;
using System.Collections.Generic;

namespace linkeList.UI;

using linkeList.utils;
public class FileManager
{
    public void Serilalize(string filename, string content)
    {
        System.IO.File.WriteAllText(filename, content);
    }

    public  DeSerialize(string filename)
    {
        return System.IO.File.ReadAllText(filename);
    }
}