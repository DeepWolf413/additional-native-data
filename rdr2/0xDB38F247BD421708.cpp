// ambush_bnd_cliff1.ysc @ L6339
void func_244(var uParam0, float fParam1)
{
  vector3 vVar0;
  vector3 vVar3;
  vector3 vVar6;
  vector3 vVar9;
  int iVar12;

  if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_237))
  {
    func_371(&(uParam0->f_237), uParam0->f_209, uParam0->f_151);
  }
  func_372(uParam0->f_237, "ambush_restriction", 1, 0, 512, 0, -1082130432 /* Float: -1f */);
  vVar0 = { uParam0->f_209 + Vector(-40f, -fParam1, -fParam1) };
  vVar3 = { uParam0->f_209 + Vector(40f, fParam1, fParam1) };
  vVar6 = { func_358(vVar0, vVar3, 0) };
  vVar9 = { func_359(vVar0, vVar3, 0) };
  if (func_373(uParam0->f_151))
  {
    iVar12 = func_374(uParam0);
    func_375(uParam0->f_209, fParam1, 0, 0, iVar12);
  }
  PED::SET_PED_NON_CREATION_AREA(vVar6, vVar9);
  PATHFIND::SET_PED_PATHS_IN_AREA(vVar6, vVar9, false, 1);
  FIRE::STOP_FIRE_IN_RANGE(uParam0->f_209, fParam1);
  func_376(uParam0->f_209, fParam1, 0);
}