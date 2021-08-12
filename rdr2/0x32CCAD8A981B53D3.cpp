// cv_itm_dtc_01.ysc @ L3476
bool func_94(var uParam0)
{
  if (func_21(uParam0) == 495)
  {
    return true;
  }
  func_8(&iLocal_29, 1, 1);
  if (!ENTITY::IS_ENTITY_DEAD(func_9(uParam0, iLocal_14)))
  {
    PED::_0x32CCAD8A981B53D3(func_9(uParam0, iLocal_14));
    PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), func_9(uParam0, iLocal_14), sLocal_31, 0f, 0f, 0f, 0, sLocal_31);
    MISC::_0xE98D55C5983F2509(func_9(uParam0, iLocal_14));
  }
  func_203(uParam0, iLocal_15, 1);
  return true;
}