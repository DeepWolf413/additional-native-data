// cv_end_abi_01.ysc @ L3440
bool func_95(var uParam0)
{
  if (func_109(&uLocal_19) < 10f)
  {
    PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(func_48(uParam0, iLocal_17), false);
    PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(func_48(uParam0, iLocal_17), false);
  }
  if (ENTITY::IS_ENTITY_OCCLUDED(func_48(uParam0, iLocal_17)) && func_208(func_48(uParam0, iLocal_17), Global_35, 1) >= 144f)
  {
    func_209(uParam0, iLocal_17);
    return true;
  }
  return false;
}