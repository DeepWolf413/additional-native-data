// abigail2_1.ysc @ L18004
void func_215(bool bParam0, bool bParam1)
{
  if (((WEAPON::IS_WEAPON_VALID(Global_1935630.f_44) && WEAPON::_IS_WEAPON_SNIPER(Global_1935630.f_44)) && PED::GET_PED_RESET_FLAG(Global_35, 0)) && CAM::_0xA24C1D341C6E0D53(1, 1, 1))
  {
    WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 0, 0);
    return;
  }
  if (Global_1935630.f_44 == joaat("WEAPON_KIT_BINOCULARS") && PED::GET_PED_RESET_FLAG(Global_35, 0))
  {
    WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 0, 0);
    return;
  }
  if (Global_1935630.f_44 == joaat("WEAPON_KIT_CAMERA"))
  {
    func_496(0);
    WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 0, 0);
    return;
  }
  if (bParam0)
  {
    GRAPHICS::ANIMPOSTFX_STOP_ALL();
  }
  if (bParam1)
  {
    CAM::_TRIGGER_MISSION_FAILED_CAM();
  }
}