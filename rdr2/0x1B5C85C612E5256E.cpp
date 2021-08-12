// beat_friendly_outdoorsman.ysc @ L12258
int func_389(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, var uParam11)
{
  int iVar0;
  vector3 vVar1;
  vector3 vVar4;

  vVar1 = { func_208(vParam0, vParam3, iParam10) };
  vVar4 = { func_209(vParam0, vParam3, iParam10) };
  func_530(vParam6, iParam9, uParam11);
  PED::SET_PED_NON_CREATION_AREA(vVar1, vVar4);
  PATHFIND::SET_PED_PATHS_IN_AREA(vVar1, vVar4, false, 0);
  iVar0 = PED::ADD_SCENARIO_BLOCKING_AREA(vVar1, vVar4, uParam11, 15);
  return iVar0;
}