// act_caunc_rustling_invite.ysc @ L10391
bool func_353(var uParam0)
{
  int iVar0;

  if (Global_1359489.f_672)
  {
    return true;
  }
  iVar0 = 1;
  if (func_259(*uParam0) < 100f)
  {
    iVar0 = 0;
  }
  if (BUILTIN::VDIST2(Global_36, TASK::_GET_SCENARIO_POINT_COORDS(uParam0->f_33, true)) < 100f)
  {
    iVar0 = 0;
  }
  if (func_155(uParam0->f_1, 1116471296 /* Float: 70f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */) || CAM::IS_SPHERE_VISIBLE(TASK::_GET_SCENARIO_POINT_COORDS(uParam0->f_33, true), 3f))
  {
    iVar0 = 0;
  }
  return iVar0;
}