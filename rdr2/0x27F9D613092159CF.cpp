// winter1.ysc @ L18208
void func_187(char[4] cParam0)
{
  MAP::DISPLAY_RADAR(true);
  HUD::DISPLAY_HUD(true);
  if (func_33(cParam0) <= iLocal_86)
  {
    PED::_0x9851DE7AEC10B4E1(func_473(4, 2), 50f, 1, 1);
  }
  func_489(1, 4);
  func_489(1, 32);
  func_489(1, 1024);
  func_48(2);
  func_200(cParam0, 0);
  OBJECT::REMOVE_ALL_PICKUPS_OF_TYPE(joaat("PICKUP_WEAPON_REVOLVER_CATTLEMAN"));
  func_490(func_473(14, 4), 20f, 0);
  func_491(-1187950766, 0, 0);
}