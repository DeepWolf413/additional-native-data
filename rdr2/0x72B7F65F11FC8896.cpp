// braithwaites3.ysc @ L35752
bool func_790(var uParam0)
{
  func_1248();
  func_166(uParam0, Local_101[0 /*10*/], 1);
  func_1303(Local_101[2 /*10*/]);
  PED::_0x58F7DB5BD8FA2288(Local_101[2 /*10*/]);
  PED::_0x935CF6E42BAF7F4D(Local_101[2 /*10*/]);
  PED::SET_PED_CONFIG_FLAG(Local_101[2 /*10*/], 252, true);
  COMPANION::_0x72B7F65F11FC8896(PED::GET_PED_GROUP_INDEX(Global_35));
  PED::SET_PED_CONFIG_FLAG(Local_101[2 /*10*/], 156, false);
  PED::SET_PED_CONFIG_FLAG(Global_35, 155, false);
  return uParam0->f_607 == uParam0->f_607;
}