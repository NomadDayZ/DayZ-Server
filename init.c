//	Spawn helper function	//
void SpawnObject(string objectName, vector position, vector orientation)
{
    Object obj;
    obj = Object.Cast(GetGame().CreateObject(objectName, "0 0 0"));
    obj.SetPosition(position);
    obj.SetOrientation(orientation);

    //Force update collisions
    if (obj.CanAffectPathgraph())
    {
        obj.SetAffectPathgraph(true, false);
        GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(GetGame().UpdatePathgraphRegionByObject, 100, false, obj);
    }
}
//  End Spawn helper function  //

//Apocalyptic
	//#include "$CurrentDir:\\mpmissions\\dayzOffline.chernarusplus\\Custom_Buildings\\Apocalyptic\\Apocalyptic_Balota.c"
	//#include "$CurrentDir:\\mpmissions\\dayzOffline.chernarusplus\\Custom_Buildings\\Apocalyptic\\Apocalyptic_Berezino.c"
	//#include "$CurrentDir:\\mpmissions\\dayzOffline.chernarusplus\\Custom_Buildings\\Apocalyptic\\Apocalyptic_Biathlon_Arena.c"
	#include "$CurrentDir:\\mpmissions\\dayzOffline.chernarusplus\\Custom_Buildings\\Apocalyptic\\Apocalyptic_Bridge_Prison.c"
	#include "$CurrentDir:\\mpmissions\\dayzOffline.chernarusplus\\Custom_Buildings\\Apocalyptic\\Apocalyptic_Bunker_666.c"
	//#include "$CurrentDir:\\mpmissions\\dayzOffline.chernarusplus\\Custom_Buildings\\Apocalyptic\\Apocalyptic_Dolina.c"
	//#include "$CurrentDir:\\mpmissions\\dayzOffline.chernarusplus\\Custom_Buildings\\Apocalyptic\\Apocalyptic_Dubrovka.c"
	//#include "$CurrentDir:\\mpmissions\\dayzOffline.chernarusplus\\Custom_Buildings\\Apocalyptic\\Apocalyptic_Electro.c"
	//#include "$CurrentDir:\\mpmissions\\dayzOffline.chernarusplus\\Custom_Buildings\\Apocalyptic\\Apocalyptic_Factory_Solnichy.c"
	//#include "$CurrentDir:\\mpmissions\\dayzOffline.chernarusplus\\Custom_Buildings\\Apocalyptic\\Apocalyptic_Gorka.c"
	//#include "$CurrentDir:\\mpmissions\\dayzOffline.chernarusplus\\Custom_Buildings\\Apocalyptic\\Apocalyptic_Guglovo.c"
	//#include "$CurrentDir:\\mpmissions\\dayzOffline.chernarusplus\\Custom_Buildings\\Apocalyptic\\Apocalyptic_Kamarovo.c"
	//#include "$CurrentDir:\\mpmissions\\dayzOffline.chernarusplus\\Custom_Buildings\\Apocalyptic\\Apocalyptic_Kamenka.c"
	//#include "$CurrentDir:\\mpmissions\\dayzOffline.chernarusplus\\Custom_Buildings\\Apocalyptic\\Apocalyptic_Kamyshovo.c"
	//#include "$CurrentDir:\\mpmissions\\dayzOffline.chernarusplus\\Custom_Buildings\\Apocalyptic\\Apocalyptic_Mogilevka.c"
	//#include "$CurrentDir:\\mpmissions\\dayzOffline.chernarusplus\\Custom_Buildings\\Apocalyptic\\Apocalyptic_Msta.c"
	//#include "$CurrentDir:\\mpmissions\\dayzOffline.chernarusplus\\Custom_Buildings\\Apocalyptic\\Apocalyptic_Nizhnoye.c"
	//#include "$CurrentDir:\\mpmissions\\dayzOffline.chernarusplus\\Custom_Buildings\\Apocalyptic\\Apocalyptic_Orlovets.c"
	//#include "$CurrentDir:\\mpmissions\\dayzOffline.chernarusplus\\Custom_Buildings\\Apocalyptic\\Apocalyptic_Pavlovo.c"
	//#include "$CurrentDir:\\mpmissions\\dayzOffline.chernarusplus\\Custom_Buildings\\Apocalyptic\\Apocalyptic_Polana.c"
	//#include "$CurrentDir:\\mpmissions\\dayzOffline.chernarusplus\\Custom_Buildings\\Apocalyptic\\Apocalyptic_Pusta.c"
	//#include "$CurrentDir:\\mpmissions\\dayzOffline.chernarusplus\\Custom_Buildings\\Apocalyptic\\Apocalyptic_Solnichy.c"
	//#include "$CurrentDir:\\mpmissions\\dayzOffline.chernarusplus\\Custom_Buildings\\Apocalyptic\\Apocalyptic_Staroye.c"
	//#include "$CurrentDir:\\mpmissions\\dayzOffline.chernarusplus\\Custom_Buildings\\Apocalyptic\\Apocalyptic_Stary_Sobor.c"
	//#include "$CurrentDir:\\mpmissions\\dayzOffline.chernarusplus\\Custom_Buildings\\Apocalyptic\\Apocalyptic_Svetloyarsk.c"
	//#include "$CurrentDir:\\mpmissions\\dayzOffline.chernarusplus\\Custom_Buildings\\Apocalyptic\\Apocalyptic_Three_Valleys.c"
	//#include "$CurrentDir:\\mpmissions\\dayzOffline.chernarusplus\\Custom_Buildings\\Apocalyptic\\Apocalyptic_Tulga.c"
	//#include "$CurrentDir:\\mpmissions\\dayzOffline.chernarusplus\\Custom_Buildings\\Apocalyptic\\Apocalyptic_Turovo.c"

//Nomad
	#include "$CurrentDir:\\mpmissions\\dayzOffline.chernarusplus\\Custom_Buildings\\Nomad\\Nomad_Black_Market.c"
	#include "$CurrentDir:\\mpmissions\\dayzOffline.chernarusplus\\Custom_Buildings\\Nomad\\Nomad_NEAF.c"
	#include "$CurrentDir:\\mpmissions\\dayzOffline.chernarusplus\\Custom_Buildings\\Nomad\\Nomad_Willow_Lake.c"
        #include "$CurrentDir:\\mpmissions\\dayzOffline.chernarusplus\\Custom_Buildings\\Nomad\\Nomad_Bolata.c"
        #include "$CurrentDir:\\mpmissions\\dayzOffline.chernarusplus\\Custom_Buildings\\Nomad\\Nomad_CannaTRD.c"
  	#include "$CurrentDir:\\mpmissions\\dayzOffline.chernarusplus\\Custom_Buildings\\Nomad\\Nomad_Train.c"
	#include "$CurrentDir:\\mpmissions\\dayzOffline.chernarusplus\\Custom_Buildings\\Nomad\\Nomad_VMC.c"
        #include "$CurrentDir:\\mpmissions\\dayzOffline.chernarusplus\\Custom_Buildings\\Nomad\\Nomad_Misc.c"
        #include "$CurrentDir:\\mpmissions\\dayzOffline.chernarusplus\\Custom_Buildings\\Nomad\\Nomad_Skalisty_Bridge.c"
        #include "$CurrentDir:\\mpmissions\\dayzOffline.chernarusplus\\Custom_Buildings\\Nomad\\Nomad_NWAF.c"
        #include "$CurrentDir:\\mpmissions\\dayzOffline.chernarusplus\\Custom_Buildings\\Nomad\\Nomad_Gorka_Trader.c"      
        

void main()
{
	
//Apocalyptic
	//Apocalyptic_Balota();
	//Apocalyptic_Berezino();
	//Apocalyptic_Biathlon_Arena();
	Apocalyptic_Bridge_Prison();
	Apocalyptic_Bunker_666();
	//Apocalyptic_Dolina();
	//Apocalyptic_Dubrovka();
	//Apocalyptic_Electro();
	//Apocalyptic_Factory_Solnichy();
	//Apocalyptic_Gorka();
	//Apocalyptic_Guglovo();
	//Apocalyptic_Kamarovo();
	//Apocalyptic_Kamenka();
	//Apocalyptic_Kamyshovo();
	//Apocalyptic_Mogilevka();
	//Apocalyptic_Msta();
	//Apocalyptic_Nizhnoye();
	//Apocalyptic_Orlovets();
	//Apocalyptic_Pavlovo();
	//Apocalyptic_Polana();
	//Apocalyptic_Pusta();
	//Apocalyptic_Solnichy();
	//Apocalyptic_Staroye();
	//Apocalyptic_Svetloyarsk();
	//Apocalyptic_Three_Valleys();
	//Apocalyptic_Tulga();
	//Apocalyptic_Turovo();
	
//Nomad
	Nomad_Black_Market();
	Nomad_NEAF();
	Nomad_Willow_Lake();
	Nomad_Bolata();
        Nomad_CannaTRD();
        Nomad_Train();
        Nomad_VMC();
        Nomad_Misc();
        Nomad_Skalisty_Bridge();
	Nomad_NWAF();
	Nomad_Gorka_Trader();

	//INIT WEATHER BEFORE ECONOMY INIT------------------------
	Weather weather = g_Game.GetWeather();

	weather.MissionWeather(false);    // false = use weather controller from Weather.c

	weather.GetOvercast().Set( Math.RandomFloatInclusive(0.4, 0.6), 1, 0);
	weather.GetRain().Set( 0, 0, 1);
	weather.GetFog().Set( Math.RandomFloatInclusive(0.05, 0.1), 1, 0);

	//INIT ECONOMY--------------------------------------
	Hive ce = CreateHive();
	if ( ce )
		ce.InitOffline();
    //GetCEApi().ExportProxyData( "7500 0 7500", 10000 );
	
	//DATE RESET AFTER ECONOMY INIT-------------------------
	int year, month, day, hour, minute;
	int reset_month = 9, reset_day = 20;
	GetGame().GetWorld().GetDate(year, month, day, hour, minute);

	if ((month == reset_month) && (day < reset_day))
	{
		GetGame().GetWorld().SetDate(year, reset_month, reset_day, hour, minute);
	}
	else
	{
		if ((month == reset_month + 1) && (day > reset_day))
		{
			GetGame().GetWorld().SetDate(year, reset_month, reset_day, hour, minute);
		}
		else
		{
			if ((month < reset_month) || (month > reset_month + 1))
			{
				GetGame().GetWorld().SetDate(year, reset_month, reset_day, hour, minute);
			}
		}
	}
}

class CustomMission : MissionServer
{
    private const static string m_SpawnLoadoutDirectory = "$profile:SpawnLoadout/"; // root directory for SpawnLoadout
    private const static string m_DonatorDirectory = m_SpawnLoadoutDirectory + "Donators/"; // directory for donator loadout text files

    private const static string m_RegularLoadout = m_SpawnLoadoutDirectory + "Regular.txt"; // file for regular loadout
    private const static string m_CommonItems = m_SpawnLoadoutDirectory + "CommonItems.txt"; // file for in common items for both regular and donator

    void CustomMission()
    {
        FileHandle templateFile;

        if (!FileExist(m_SpawnLoadoutDirectory))
        {
            MakeDirectory(m_SpawnLoadoutDirectory)

            // create default CommonItems.txt
            templateFile = OpenFile(m_CommonItems, FileMode.WRITE);
            FPrintln(templateFile, "Rag 4\nHuntingKnife\nMatchbox\nHatchet\nFlashlight\nBattery9V\nSodaCan_Cola\nBakedBeansCan");
            CloseFile(templateFile);

            // create default Regular.txt
            templateFile = OpenFile(m_RegularLoadout, FileMode.WRITE);
            FPrintln(templateFile, "BomberJacket_Grey\nJeans_Black\nTaloonBag_Blue\nAthleticShoes_Grey");
            CloseFile(templateFile);
        }

        if (!FileExist(m_DonatorDirectory))
        {
            string template = GetDonatorFile("STEAMIDHERE");

            MakeDirectory(m_DonatorDirectory);

            // create template donator file
            templateFile = OpenFile(template, FileMode.WRITE);
            FPrintln(templateFile, "BomberJacket_Blue\nJeans_Grey\nTaloonBag_Orange\nAthleticShoes_Brown");
            CloseFile(templateFile);
        }
    }

    //!!! REPLACES EXISTING METHOD
    override void StartingEquipSetup(PlayerBase player, bool clothesChosen)
    {
        player.RemoveAllItems(); // clear all default spawning items

        FileHandle donatorFile;
        string line;

        TStringArray contents = new TStringArray();
        string file = GetDonatorFile(player.GetIdentity().GetPlainId());

        if (FileExist(file))
        {
            SpawnLoadout(player, ReadFileLines(file)); // spawn donator loadout
            return;
        }

        SpawnLoadout(player, ReadFileLines(m_RegularLoadout)); // spawn regular player loadout
    }

    private void SpawnLoadout(PlayerBase player, ref TStringArray loadout)
    {
        FileHandle loadoutFile;
        string line;

        // creates clothes loadout
        foreach (string clothes : loadout)
            player.GetInventory().CreateInInventory(clothes);


        // creates common items
        TStringArray items = ReadFileLines(m_CommonItems);
        foreach (string item : items)
        {
            if (item.Contains(" ")) // check for space, which signifies a quantity item
            {
                CreateQuantityItem(player, item);
                continue;
            }

            player.GetInventory().CreateInInventory(item);
        }
    }

    private void CreateQuantityItem(PlayerBase player, string item)
    {
        TStringArray quantity = new TStringArray();
        item.Split(" ", quantity);

        ItemBase quantityItem = player.GetInventory().CreateInInventory(quantity[0]);
        quantityItem.SetQuantity(quantity[1].ToFloat());
    }

    private string GetDonatorFile(string id)
    {
        return string.Format("%1%2.txt", m_DonatorDirectory, id);
    }

    private TStringArray ReadFileLines(string path)
    {
        FileHandle file;
        string line;

        TStringArray contents = new TStringArray();

        file = OpenFile(path, FileMode.READ);
        while (FGets(file, line) > 0)
        {
            line.Trim();
            if (line != string.Empty)
            {
                contents.Insert(line);
                line = string.Empty;
            }
        }

        CloseFile(file);
        return contents;
    }
};


Mission CreateCustomMission(string path)
{
	return new CustomMission();
}