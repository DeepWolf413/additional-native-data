// mudtown1.ysc @ L69248
void func_1763(int iParam0, int iParam1, float fParam2)
{
  int iVar0;
  struct<7> Var1;

  if (CAM::DOES_CAM_EXIST(iLocal_531[iParam0]))
  {
    if (CAM::IS_CAM_INTERPOLATING(iLocal_531[iParam0]))
    {
    }
    return;
  }
  Var1 = { func_1760(iParam0) };
  iLocal_531[iParam0] = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Var1, Var1.f_3, Var1.f_6, false, 2);
  iVar0 = 0;
  while (iVar0 < iLocal_531)
  {
    if (CAM::DOES_CAM_EXIST(iLocal_531[iVar0]) && iParam0 != iVar0)
    {
      if (CAM::IS_CAM_ACTIVE(iLocal_531[iVar0]))
      {
        CAM::SET_CAM_ACTIVE(iLocal_531[iVar0], false);
        CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_531[iParam0], iLocal_531[iVar0], iParam1, 1, 1);
        CAM::DESTROY_CAM(iLocal_531[iVar0], false);
        CAM::SHAKE_CAM(iLocal_531[iParam0], "HAND_SHAKE", fParam2);
      }
    }
    iVar0++;
  }
}