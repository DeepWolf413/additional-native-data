// camp_beaverhollow.ysc @ L9490
void func_303(int iParam0, var uParam1)
{
  vector3 vVar0;

  func_296(uParam1);
  vVar0 = { func_741(iParam0) };
  uParam1->f_5 = VOLUME::_CREATE_VOLUME_CYLINDER(vVar0, 0f, 0f, 0f, 2.25f, 2.25f, 2f);
  uParam1->f_6 = GRAPHICS::_0xFA50F79257745E74(vVar0, 2f, 1, 36, 0);
  if (MAP::DOES_BLIP_EXIST(uParam1->f_4))
  {
    MAP::REMOVE_BLIP(&(uParam1->f_4));
  }
  uParam1->f_4 = MAP::_BLIP_ADD_FOR_COORD(1687768444, func_741(iParam0));
  MAP::_BLIP_SET_MODIFIER(uParam1->f_4, 287169430);
  MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam1->f_4, "BLIP_CAMP_HITCH");
  MAP::SET_BLIP_FLASH_TIMER(uParam1->f_4, 68, -1);
  func_686(uParam1->f_4, func_268());
}