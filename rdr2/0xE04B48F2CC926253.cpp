// ambush_bnd_cliff1.ysc @ L4892
void func_203(var uParam0, float fParam1)
{
  vector3 vVar0;
  vector3 vVar3;
  vector3 vVar6;
  vector3 vVar9;

  vVar0 = { uParam0->f_209 + Vector(-40f, -fParam1, -fParam1) };
  vVar3 = { uParam0->f_209 + Vector(40f, fParam1, fParam1) };
  vVar6 = { func_358(vVar0, vVar3, 0) };
  vVar9 = { func_359(vVar0, vVar3, 0) };
  PED::CLEAR_PED_NON_CREATION_AREA();
  PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(vVar6, vVar9, 0);
  func_360(uParam0->f_209, fParam1, 5);
  func_361(uParam0);
}