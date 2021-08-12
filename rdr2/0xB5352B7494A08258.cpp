// beechers2_2.ysc @ L53542
void func_1248(bool bParam0, bool bParam1)
{
  if (HUD::_UIPROMPT_IS_VALID(iLocal_207))
  {
    return;
  }
  iLocal_207 = HUD::_UIPROMPT_REGISTER_BEGIN();
  HUD::_0xF4A5C4509BF923B1(iLocal_207, 0);
  if (bParam1)
  {
    HUD::_UIPROMPT_SET_TEXT(iLocal_207, func_1652(5));
  }
  else
  {
    HUD::_UIPROMPT_SET_TEXT(iLocal_207, func_1652(4));
  }
  HUD::_UIPROMPT_SET_CONTROL_ACTION(iLocal_207, func_1653(3));
  HUD::_UIPROMPT_SET_BEAT_MODE(iLocal_207, bParam0);
  HUD::_UIPROMPT_REGISTER_END(iLocal_207);
  func_168(7);
  if (bParam0)
  {
    func_439(8);
  }
  else
  {
    func_168(8);
  }
}