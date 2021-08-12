// trelawny1.ysc @ L73345
void func_1855()
{
  if (func_424(iLocal_2383, 0) && func_424(Global_35, 0))
  {
    if (!PED::IS_PED_GROUP_MEMBER(iLocal_2383, PED::GET_PED_GROUP_INDEX(Global_35), 0))
    {
      PED::SET_GROUP_FORMATION(PED::GET_PED_GROUP_INDEX(Global_35), 3);
      PED::SET_PED_CONFIG_FLAG(iLocal_2383, 279, true);
      PED::SET_PED_AS_GROUP_MEMBER(iLocal_2383, PED::GET_PED_GROUP_INDEX(Global_35));
      COMPANION::_0x2917E634206B9E17(iLocal_2383, 0);
    }
  }
}