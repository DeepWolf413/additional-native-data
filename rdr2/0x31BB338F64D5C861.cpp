// act_fishing01.ysc @ L10732
bool func_241(var uParam0)
{
  CAM::_0xE296208C273BD7F0(0, -1, 0, 17, 1, 0);
  func_598(1);
  func_599(0);
  func_600(0);
  func_601(0);
  func_602(1);
  TASK::_0x31BB338F64D5C861(Global_35, 1);
  TASK::_0x31BB338F64D5C861(Local_195.f_37, 1);
  func_603(&(Local_195.f_96), Global_35, 0, "w_melee_fishingpole02^1", 0, 0);
  func_603(&(Local_195.f_96), Local_195.f_37, 0, "w_melee_fishingpole02", 0, 0);
  func_605(&(Local_195.f_96), func_604(0));
  func_596(&(Local_195.f_94), 32);
  func_596(&(Local_195.f_94), 64);
  func_596(&(Local_195.f_94), 128);
  func_596(&(Local_195.f_94), 256);
  func_588();
  func_570(1);
  func_63(0, 1);
  func_63(1, 1);
  func_606();
  return true;
}