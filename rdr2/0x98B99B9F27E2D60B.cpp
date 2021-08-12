// beechers2_2.ysc @ L66374
void func_1648(int iParam0)
{
  struct<7> Var0;

  if (CAM::DOES_CAM_EXIST(iLocal_829[iParam0]))
  {
    return;
  }
  Var0 = { func_2040(iParam0) };
  iLocal_829[iParam0] = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Var0, Var0.f_3, Var0.f_6, false, 2);
  func_1255();
  CAM::SHAKE_CAM(iLocal_829[iParam0], "HAND_SHAKE", 0.025f);
}