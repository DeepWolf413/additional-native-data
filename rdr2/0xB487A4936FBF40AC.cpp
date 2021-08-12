// beechers2_2.ysc @ L66682
void func_1665(bool bParam0)
{
  if (!HUD::_UIPROMPT_IS_VALID(iLocal_207))
  {
    return;
  }
  if ((bParam0 && func_166(8)) || (!bParam0 && !func_166(8)))
  {
    return;
  }
  if (bParam0)
  {
    func_439(8);
  }
  else
  {
    func_168(8);
  }
  HUD::_UIPROMPT_SET_BEAT_MODE_GRAYED_OUT(iLocal_207, bParam0);
  if (!bParam0)
  {
    func_168(7);
  }
}