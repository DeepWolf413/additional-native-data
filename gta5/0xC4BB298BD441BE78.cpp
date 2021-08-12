// fm_bj_race_controler.ysc @ L273050
void func_3669(var* uParam0)
{
  Global_2518673 = 0;
  SYSTEM::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(joaat("turret_cam_script"), uParam0, 8, 1424);
  SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("turret_cam_script"));
  Global_2518662 = Global_2518671;
  Global_1682130.f_44 = 1;
}