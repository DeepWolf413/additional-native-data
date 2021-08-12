// shop_doctor.ysc @ L11041
int func_337(var uParam0, bool bParam1)
{
  if (func_623())
  {
    return 0;
  }
  if (bParam1)
  {
    if ((ENTITY::GET_ENTITY_HEALTH(Global_35) < BUILTIN::ROUND((BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, false)) / 2f)) || PED::_0x22F2A386D43048A9(Global_35) < 0.5f) || PLAYER::_0x3A6AE4EEE30370FE(PLAYER::PLAYER_ID(), 0) < 0.5f)
    {
      uParam0->f_45 = 1;
      uParam0->f_44 = "PLAYER_ENTER_DOCTOR_CATALOG_INJURED";
    }
    else
    {
      uParam0->f_45 = 1;
      uParam0->f_44 = "PLAYER_ENTER_DOCTOR_CATALOG_HEALTHY";
    }
  }
  else if (func_716(uParam0))
  {
    uParam0->f_45 = 1;
    uParam0->f_44 = "PLAYER_EXIT_DOCTOR_CATALOG_PURCHASED";
  }
  return 1;
}