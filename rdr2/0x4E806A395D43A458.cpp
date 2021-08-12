// odriscolls5.ysc @ L36020
int func_774(char[4] cParam0)
{
  func_880(cParam0, 4194304);
  if (MAP::DOES_BLIP_EXIST(iLocal_640))
  {
    MAP::_BLIP_REMOVE_MODIFIER(iLocal_640, -401963276);
    func_472(&iLocal_640);
  }
  if (OBJECT::DOES_PICKUP_EXIST(iLocal_638))
  {
    OBJECT::REMOVE_PICKUP(iLocal_638);
  }
  func_441(sLocal_186, sLocal_185);
  PED::SET_PED_CONFIG_FLAG(Local_14.f_24[0], 249, false);
  func_470(0);
  if (func_435(Global_35, 0))
  {
    PLAYER::SET_PLAYER_CAN_USE_COVER(PLAYER::PLAYER_ID(), true);
    TASK::_0x4E806A395D43A458(1);
    PED::SET_PED_CONFIG_FLAG(Global_35, 258, false);
  }
  func_1282();
  PED::_0x949B2F9ED2917F5D(Global_35, 16);
  PED::_0x949B2F9ED2917F5D(Global_35, 17);
  return 1;
}