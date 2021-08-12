// beechers2_2.ysc @ L66410
void func_1650(int iParam0, int iParam1)
{
  struct<15> Var0;

  if (!CAM::DOES_CAM_EXIST(iLocal_829[iParam0]))
  {
    return;
  }
  Var0 = { func_2040(iParam0) };
  CAM::SET_CAM_PARAMS(iLocal_829[iParam0], Var0.f_7, Var0.f_10, Var0.f_13, BUILTIN::FLOOR((Var0.f_14 * 1000f)), 1, 1, 2, iParam1, 0);
}