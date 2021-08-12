// gb_biker_contraband_sell.ysc @ L144891
void func_2001(int iParam0, bool bParam1)
{
  if (func_23())
  {
    if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
    {
      if (!MISC::IS_BIT_SET(Local_709.f_982, iParam1))
      {
        PED::DROP_AMBIENT_PROP(iParam0);
        func_324(iParam0, func_326(1), 1);
        func_1497(iParam0, "GENERIC_THANKS", 0);
        if (func_23())
        {
          ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
        }
        MISC::SET_BIT(&(Local_709.f_982), bParam1);
      }
    }
  }
}