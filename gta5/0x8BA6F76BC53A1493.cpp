// agency_heist3a.ysc @ L139199
void func_1120(int iParam0, int iParam1, int iParam2, struct<3> Param3, float fParam6)
{
  int iVar0;
  
  if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
  {
    if (STREAMING::HAS_MODEL_LOADED(iParam0->f_1))
    {
      if (!func_1122(PLAYER::GET_PLAYERS_LAST_VEHICLE(), iParam0->f_3, iParam2, Param3, fParam6))
      {
        func_642(iParam0, iParam1, iParam0->f_3, iParam0->f_6, 0, 0);
        VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(*iParam0, false, 0);
        func_1121(&Local_5327, *iParam0);
      }
      else
      {
        iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
        VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iVar0, false, 0);
        func_1121(&Local_5327, iVar0);
      }
    }
  }
}