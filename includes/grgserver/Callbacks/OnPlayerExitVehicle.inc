public OnPlayerExitVehicle(playerid, vehicleid)
{
	SaveVehicle(vehicleid, GetPlayerInterior(playerid));
	StopRadioStation(playerid);
	PVar:playerid[OLDVEHICLEID] = vehicleid;
	if (PVar:playerid[GPS_ENABLED])
	{
		PVar:playerid[GPS_ENABLED] = false;
		DisablePlayerRaceCheckpoint(playerid);
		SendClientMessageEx(playerid, COLOR_INFO, StringID:460("The navigation system has been turned off"));
	}
	return true;
}