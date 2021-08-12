// spd_madscientist.ysc @ L6018
bool func_225(int iParam0)
{
  vector3 vVar0;

  vVar0.f_3 = 1065353216;
  vVar0.f_4 = -1;
  vVar0.f_5 = 1048576000;
  vVar0.f_6 = 1193033728;
  if (func_273(iParam0->f_3, vLocal_696[iLocal_685 /*3*/], 1) < 2f)
  {
    iLocal_685++;
    if (iLocal_685 >= 8)
    {
      iLocal_685 = 0;
    }
    vVar0 = { vLocal_696[iLocal_685 /*3*/] };
    TASK::TASK_FOLLOW_PAVEMENT_TO_COORD(iParam0->f_3, &vVar0);
  }
  if (!PED::_0x5102307CE88798EB(iParam0->f_3))
  {
    PED::REQUEST_PED_VISIBILITY_TRACKING(iParam0->f_3);
  }
  if (func_346(Global_35, iParam0->f_3, 1, 1) > 100f && !PED::IS_TRACKED_PED_VISIBLE(iParam0->f_3))
  {
    return true;
  }
  return false;
}