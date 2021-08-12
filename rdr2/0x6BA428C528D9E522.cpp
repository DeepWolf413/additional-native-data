// beat_sharp_shooter.ysc @ L22256
void func_567(int iParam0)
{
  if (!ENTITY::IS_ENTITY_DEAD(iLocal_445[iParam0]))
  {
    PED::SET_PED_CONFIG_FLAG(iLocal_445[iParam0], 260, true);
    PED::SET_PED_CONFIG_FLAG(iLocal_445[iParam0], 265, false);
    PED::SET_PED_CONFIG_FLAG(iLocal_445[iParam0], 266, false);
    PED::SET_PED_MAX_TIME_IN_WATER(iLocal_445[iParam0], ((60f * 60f) * 7f));
    PED::SET_PED_MAX_TIME_UNDERWATER(iLocal_445[iParam0], ((60f * 60f) * 4f));
    PED::_0x7FB0088E8769CDDB(iLocal_445[iParam0], 1);
    PED::_0xD05AD61F242C626B(iLocal_445[iParam0], 1000f);
  }
}