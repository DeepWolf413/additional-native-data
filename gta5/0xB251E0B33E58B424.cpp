// fm_mission_controller.ysc @ L622248
void func_10320(bool bParam0)
{
  int iVar0;
  
  if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
  {
    iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
    if (func_10321(iVar0))
    {
      MISC::SET_BIT(&(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_849), 3);
      if (bParam0)
      {
        if (VEHICLE::_ARE_HELI_STUB_WINGS_DEPLOYED(iVar0))
        {
          VEHICLE::_SET_DEPLOY_HELI_STUB_WINGS(iVar0, false, false);
        }
      }
      else if (!VEHICLE::_ARE_HELI_STUB_WINGS_DEPLOYED(iVar0))
      {
        VEHICLE::_SET_DEPLOY_HELI_STUB_WINGS(iVar0, true, false);
      }
    }
  }
}