// agency_heist2.ysc @ L111289
void func_708(int iParam0)
{
  int iVar0;
  
  iVar0 = func_42(iParam0);
  if (func_41(iVar0) && !PED::IS_PED_INJURED(iParam0))
  {
    if (iParam0 == PLAYER::PLAYER_PED_ID() && PED::GET_PED_MAX_HEALTH(iParam0) == 200)
    {
      PED::SET_PED_MAX_HEALTH(iParam0, SYSTEM::ROUND((IntToFloat(PED::GET_PED_MAX_HEALTH(iParam0)) * Global_262145.f_106)));
    }
    if (Global_112293.f_2361.f_539.f_290[iVar0] <= 0f)
    {
      Global_112293.f_2361.f_539.f_290[iVar0] = 100f;
    }
    else if (Global_112293.f_2361.f_539.f_290[iVar0] <= 10f)
    {
      Global_112293.f_2361.f_539.f_290[iVar0] = 10f;
    }
    ENTITY::SET_ENTITY_HEALTH(iParam0, SYSTEM::ROUND((((Global_112293.f_2361.f_539.f_290[iVar0] / 100f) * (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH(iParam0)) - 100f)) + 100f)), 0);
  }
}