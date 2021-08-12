// rcm_gunslinger5_1.ysc @ L56738
void func_1915(var uParam0, int iParam1, int iParam2, char* sParam3)
{
  if (Local_244[iParam1 /*86*/].f_76)
  {
    if (iParam1 == 1)
    {
      if (!MISC::IS_BIT_SET(iLocal_919, 13))
      {
        PED::_0xFC3DB99C8144CD81(iLocal_218, uLocal_928[13], 1, 0, 0);
        MISC::SET_BIT(&iLocal_919, 13);
        PED::_0xD8736EFDA38EDC5C(iLocal_218, ENTITY::GET_ENTITY_COORDS(iLocal_218, true, false), 500f);
        func_715(3);
      }
    }
    else if (iParam1 == 2)
    {
      if (!MISC::IS_BIT_SET(iLocal_919, 12))
      {
        PED::_0xFC3DB99C8144CD81(iLocal_218, uLocal_928[12], 1, 0, 0);
        MISC::SET_BIT(&iLocal_919, 12);
        PED::_0xD8736EFDA38EDC5C(iLocal_218, ENTITY::GET_ENTITY_COORDS(iLocal_218, true, false), 500f);
        func_715(4);
      }
    }
    else if (iParam1 == 3)
    {
      func_715(6);
    }
    func_2122(uParam0, iParam2, sParam3);
  }
}