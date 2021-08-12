// beat_wild_man.ysc @ L12673
void func_345(vector3 vParam0)
{
  float fVar0;

  fVar0 = 0f;
  fVar0 = func_514(vParam0, Global_36);
  iLocal_1163[2] = func_368(joaat("A_C_WOLF_SMALL"), &(Local_675[2 /*32*/]), vParam0, fVar0, 1, 0, 1, 0, 1);
  func_134(iLocal_1163[2], &(uLocal_1168[2]), joaat("BLIP_STYLE_ENEMY"), 942020339, 0, 0);
  FLOCK::_0xA881F5C77A560906(10f);
  TASK::TASK_COMBAT_PED(iLocal_1163[2], Global_35, 0, 0);
  PED::SET_PED_FLEE_ATTRIBUTES(iLocal_1163[2], 512, true);
  PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_1163[2], 17, false);
  PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_1163[2], 58, true);
  PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_1163[2], 46, true);
  FLOCK::_0x706B434FEFAD6A24(1f);
  PED::SET_PED_KEEP_TASK(iLocal_1163[2], true);
  FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(iLocal_1163[2], 112, 9001f);
  func_153(&iLocal_1180, 33554432);
}